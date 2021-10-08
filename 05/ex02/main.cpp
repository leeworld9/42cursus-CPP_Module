/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:03:18 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/08 18:25:32 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "RobotmyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat a("ceo", 1);
	Bureaucrat b("b", 60);
	Bureaucrat c("c", 147);

	ShrubberyCreationForm fb(b.getName());
	RobotmyRequestForm fr(b.getName());
	PresidentialPardonForm fp(b.getName());

	a.signForm(fb);
	b.signForm(fr);
	c.signForm(fp);

	std::cout << "-----------------------------------------" << std::endl;

	a.executeForm(fb);
	b.executeForm(fr);
	c.executeForm(fp);

    return (0);
}