/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:26:49 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/08 02:05:01 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) 
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->name = name;
	this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& op)
{
	if (this != &op)
	{
		this->name = op.name;
		this->grade = op.grade;
	}
	return (*this);
}

void Bureaucrat::gradeUp()
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat::gradeDown()
{
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() 
{
	return ("Grade is too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ("Grade is too low.");
}

std::ostream	&operator<<(std::ostream & out, const Bureaucrat & bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}

void Bureaucrat::signForm(Form & form)
{
	if (form.getSign() == true)
		std::cout << this->name << " can't sign " << form.getName() << " because already signed." << std::endl;
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << this->name << " signs " << form.getName() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << this->name << " can't sign " << form.getName() << " because ";
			std::cout << e.what() << std::endl;
		}
	}
}