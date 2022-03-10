#include <iostream>
#include "Sample.class.hpp"

/*
class Sample {

public:
	
	char		a;
	int			b;
	float		c;
	

	~Sample(void){
		std::cout << "delete" << std::endl;
}
	
	Sample(char p1, int p2, float p3) : a(p1), b(p2), c(p3) {

	std::cout << "Construction called" << std::endl;
	std::cout << "this->a1 = " << this->a <<std::endl;
	std::cout << "this->b1 = " << this->b <<std::endl;
	std::cout << "this-> c1 = " << this->c << std::endl;
}


};
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
*/
int main()
{
	Sample instance;
//	Sample instance('a', 10, 4.2);

//	instance.foo = 42;
	
	//instance.boo();
	

	return 0;
}
