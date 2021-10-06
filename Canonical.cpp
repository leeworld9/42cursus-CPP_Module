#include "Canonical.hpp"

Canonical::Canonical() {
	std::cout << "[Canonical] Default constructor called" << std::endl;
}

Canonical::~Canonical() 
{
	std::cout << "[Canonical] Destructor called" << std::endl;
}

Canonical::Canonical(const Canonical& copy)
{
	std::cout << "[Canonical] Copy constructor called" << std::endl;
	*this = copy;
}

Canonical& Canonical::operator=(const Canonical& op)
{
	std::cout << "[Canonical] Assignation operator called" << std::endl;
	if (this != &op)
	{
		
	}
	return (*this);
}
