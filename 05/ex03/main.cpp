/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:03:18 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/08 23:22:35 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "RobotmyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main()
{
	Intern i;
	Bureaucrat a("ceo", 1);

	Form *fa = i.makeForm("presidential pardon", "a");
	Form *fb = i.makeForm("robotomy request", "b");
	Form *fc = i.makeForm("shrubbery creation", "c");
	Form *fd = i.makeForm("test form", "d");

	std::cout << "----------------------------------------" << std::endl;
	
	if (fa != NULL)
	{
		a.signForm(*fa);
		a.executeForm(*fa);
	}
	if (fb != NULL)
	{
		a.signForm(*fb);
		a.executeForm(*fb);
	}
	if (fc != NULL)
	{
		a.signForm(*fc);
		a.executeForm(*fc);
	}
	if (fd != NULL)
	{
		a.signForm(*fd);
		a.executeForm(*fd);
	}
}