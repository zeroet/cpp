#include <iostream>

class Sample{

public:
	float const pi;
	int			qd;

	Sample(float const f) : pi(f), qd(42)
	{
		std::cout << "Constructor called" << std::endl;
	}
	~Sample()
	{
		std::cout << "deconstructor called " << std::endl;
	}
	
	void	bar(void	) const {
		std::cout << "this->pi = " << this->pi << std::endl;
		std::cout << "this->qd = " << this->qd << std::endl;
		this->qd=0;
		return ;
	}

};

int main(void)
{
	Sample instance( 3.14f);

	instance.bar();

	return 0;

}
