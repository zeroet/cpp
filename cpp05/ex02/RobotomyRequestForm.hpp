#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <random>

#define SIGN_GRADE_R 72
#define EXEC_GRADE_R 45
#define TYPE_R "RobotomyRequestForm"

class RobotomyRequestForm : public Form
{
	private:
		std::string _Target;
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(RobotomyRequestForm const & rhs);
		~RobotomyRequestForm();
		RobotomyRequestForm & operator=(RobotomyRequestForm const &rhs);
		
		std::string getTarget() const;
		virtual void execute(Bureaucrat const & execute) const;
};

#endif
