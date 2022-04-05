#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

#define SIGN_GRADE_P 25
#define EXEC_GRADE_P 5
#define TYPE_P "PresidentialPardonForm"

class PresidentialPardonForm : public Form
{
	private:
		std::string _Taget;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(PresidentialPardonForm const &rhs);
		PresidentialPardonForm & operator=(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm();

		std::string getTarget() const;
		virtual void execute(Bureaucrat const & execute) const;
};

#endif
