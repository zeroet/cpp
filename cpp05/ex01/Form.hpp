#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _F_Name;
		const int _F_Signal;
		const int _F_Executer;
		bool _F_Sign;

	public:
		Form(const std::string _F_Name, const int _F_Signal, const int _F_Executer);
		~Form();
		Form(Form const &rhs);
		Form &operator=(Form const &rhs);
		

};

#endif
