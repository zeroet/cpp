#include <iostream>

class Sample {
	
public:

	int foo;

	Sample(void);
	~Sample(void);

	void boo(void);

};



Sample::Sample(void) {
	std::cout << "Constructor called" << std::endl;
	
	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;
	
	//this->boo();
	boo();
	return ;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	return ;

}

void	Sample::boo(void) {
	std::cout << "Member function bar called" << std::endl;
}

int main()
{
	Sample instance;

	instance.foo = 42;
	
	//instance.boo();
	
	return 0;
}
