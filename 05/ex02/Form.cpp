/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:53:49 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/08 18:53:51 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() {}

Form::Form(std::string name, int requiered_sign_grade, int requiered_exec_grade)
{
	if (requiered_sign_grade < 1 || requiered_exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (requiered_sign_grade > 150 || requiered_exec_grade > 150)
		throw Form::GradeTooLowException();
	this->name = name;
	this->sign = false;
	this->requiered_sign_grade = requiered_sign_grade;
	this->requiered_exec_grade = requiered_exec_grade;
}

Form::~Form() {}

Form::Form(const Form& copy)
{
	*this = copy;
}

Form& Form::operator=(const Form& op)
{
	if (this != &op)
	{
		if (requiered_sign_grade < 1 || requiered_exec_grade < 1)
			throw Form::GradeTooHighException();
		else if (requiered_sign_grade > 150 || requiered_exec_grade > 150)
			throw Form::GradeTooLowException();
		this->name = op.name;
		this->sign = op.sign;
		this->requiered_exec_grade = op.requiered_exec_grade;
		this->requiered_sign_grade = op.requiered_sign_grade;
	}
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw() 
{
	return ("Grade is too high.");
}

const char* Form::GradeTooLowException::what() const throw() 
{
	return ("Grade is too low.");
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSign() const
{
	return (this->sign);
}

int Form::getSignGrade() const
{
	return (this->requiered_sign_grade);
}

int Form::getExecGrade() const
{
	return (this->requiered_exec_grade);
}

std::ostream	&operator<<(std::ostream & out, const Form & form)
{
	out << form.getName() << " is ";
	if (form.getSign() == false)
		out << "not signed, ";
	else
		out << "signed, ";
	out << "requiered_sign_grade : " << form.getSignGrade() << ", ";
	out << "requiered_exec_grade : " << form.getExecGrade();
	return (out);
}

void Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->requiered_sign_grade)
		this->sign = true;
	else
		throw Form::GradeTooLowException();
}

void Form::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->requiered_exec_grade)
		throw Form::GradeTooLowException();
	this->action();
}
