#include <iostream>

# define YELLOW "\033[0;38;5;220m"
# define GREEN "\033[0;38;5;42m"
# define RED "\033[0;38;5;196m"
# define BLUE "\033[0;38;5;21m"
# define PINK "\033[0;38;5;205m"
# define PURPLE "\033[0;38;5;93m"
# define ORANGE "\033[38;5;202m"
# define FIN "\033[0m"

struct Data
{
	std::string name;
	int	age;
	float tall;
};

uintptr_t serialize(Data *ptr)
{
//	std::cout << YELLOW << "Serialize : Data* to <uintptr_t>    " <<   ptr <<  FIN << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data * deserialize(uintptr_t raw)
{
//	std::cout <<  GREEN << "Deserialize : <uintptr_t> to Data*     " << &raw << FIN << std::endl;
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data a = { "a" , 42, 42.42f };
	Data *p = &a;
	uintptr_t raw;
	Data *ptr = NULL;

	std::cout << ORANGE << "Origin Value Name : " << p->name << std::endl;
	std::cout << "Origin Value Age : " <<  p->age << std::endl;
	std::cout << "Origin Value Tall : " << p->tall << FIN <<   std::endl;

	std::cout << std::endl;
	std::cout << std::endl;


	raw = serialize(p);
	
//	std::cout << raw.name << std::endl;


	ptr = deserialize(raw);

	std::cout << GREEN << "Origin Data *    " << p << FIN << std::endl;	
	std::cout << YELLOW << "Serialize : Data* to <uintptr_t>    " <<   &raw <<  FIN << std::endl;
	std::cout << PINK << "Deserialize : <uintptr_t> to Data*    " << &ptr << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	ptr->name = "new";
	ptr->age = 24;
	ptr->tall = 24.24f;

	std::cout << ORANGE << "Value Name : " << ptr->name << std::endl;
	std::cout << "Value Age : " <<  ptr->age << std::endl;
	std::cout << "Value Tall : " << ptr->tall << std::endl;


	return (0);
}
