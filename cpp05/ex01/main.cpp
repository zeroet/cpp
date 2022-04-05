
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
	std::cout << "================== sign no =========================" << std::endl;
	std::cout << std::endl;

	Bureaucrat A("Thor", 100);
	Form B("Odin", 10, 120);

	std::cout << A << std::endl;

	std::cout << B << std::endl;
	
	A.signForm(B);


	std::cout << std::endl;
	std::cout << "================== sign ok =========================" << std::endl;
	std::cout << std::endl;


	Bureaucrat C("Loki", 1);
	Form D("Valkyrie", 3, 10);

	std::cout << C << std::endl;
	std::cout << D << std::endl;

	C.signForm(D);


	std::cout << std::endl;
	std::cout << "================== decrement Loki +3 =========================" << std::endl;
	std::cout << std::endl;


	try
	{
		C.decrementGrade();
		C.decrementGrade();
		C.decrementGrade();
		std::cout << C << std::endl;
		C.signForm(D);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}


