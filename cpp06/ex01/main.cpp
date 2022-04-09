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
	std::cout << YELLOW << "Serialize : Data* to <uintptr_t>    " <<   ptr <<  FIN << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data * deserialize(uintptr_t raw)
{
	std::cout <<  GREEN << "Deserialize : <uintptr_t> to Data*     " << &raw << FIN << std::endl;
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data a = { "a" , 42, 42.42f };
	Data *p = &a;
	uintptr_t raw;
	Data *ptr = NULL;


	raw = serialize(p);
	
//	std::cout << raw.name << std::endl;


	ptr = deserialize(raw);

	
	std::cout << PINK << "Res ptr : " << &ptr << std::endl;
	std::cout << ORANGE << "Value Name : " << ptr->name << std::endl;
	std::cout << "Value Age : " <<  ptr->age << std::endl;
	std::cout << "Value Tall : " << ptr->tall << std::endl;


	return (0);
}
