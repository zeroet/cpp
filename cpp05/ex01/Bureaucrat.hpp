#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>


# define YELLOW "\033[0;38;5;220m"
# define GREEN "\033[0;38;5;42m"
# define RED "\033[0;38;5;196m"
# define BLUE "\033[0;38;5;21m"
# define PINK "\033[0;38;5;205m"
# define PURPLE "\033[0;38;5;93m"
# define ORANGE "\033[38;5;202m"
# define FIN "\033[0m"


class Bureaucrat
{
	private:
		const std::string _Name ;
		int _Grade;

	public:
	//	Bureaucrat();
		Bureaucrat(const std::string str, int num);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &rhs);
		Bureaucrat &operator=(Bureaucrat const &rhs);

		void	incrementGrade(void);
		void	decrementGrade(void);

		

		const std::string getName() const;
		int getGrade() const;
		
		class GradeTooHightException : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
};

std::ostream& operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
