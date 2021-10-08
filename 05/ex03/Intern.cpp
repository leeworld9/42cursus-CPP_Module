/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:55:28 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/08 23:19:51 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& copy)
{
	*this = copy;
}

Intern& Intern::operator=(const Intern& op)
{
	if (this != &op)
	{
		
	}
	return (*this);
}

Form* createPresidentialPardonForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}
Form* createRobotomyRequestForm(std::string const & target)
{
	return (new RobotmyRequestForm(target));
}

Form* createShrubberyCreationForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

Form* Intern::makeForm(std::string form_name, std::string target)
{
	Form* rtn = NULL;
	typedef struct	s_formList
	{
		std::string	form_name;
		Form*		(*func)(std::string const & target);
	}				t_formList;

	t_formList forms[] = 
	{
		{"presidential pardon", &createPresidentialPardonForm},
		{"robotomy request", &createRobotomyRequestForm},
		{"shrubbery creation", &createShrubberyCreationForm}
	};

	for (int i = 0; i < 3; i++)
		if (forms[i].form_name == form_name)
		{
			rtn = forms[i].func(target);
			std::cout << "Intern creates " << rtn->getName() << std::endl;
			return (rtn);
		}
	std::cout << "Intern is not able to create the form asked." << std::endl;
	return (rtn);
}

