#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _F_Name;
		const int _F_Signal;
		const int _F_Executer;
		bool _F_Sign;

	public:
		Form();
		Form(const std::string &str, const int &Signal, const int &Executer);
		~Form();
		Form(Form const &rhs);
		Form &operator=(Form const &rhs);

		const std::string getName() const;
		int getSignal() const;
		int getExecuter() const;
		bool getSign() const;


		void	beSigned(const Bureaucrat &rhs);

		class	GradeTooHighException : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
	
		class	GradeTooLowExcpetion : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
		
};

std::ostream & operator<<(std::ostream &o, Form const &rhs);

#endif
