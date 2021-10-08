/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 01:07:31 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/08 18:53:41 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string name;
		bool sign;
		int requiered_sign_grade;
		int requiered_exec_grade;
	public:
		Form();
		Form(std::string name, int requiered_sign_grade, int requiered_exec_grade);
		virtual ~Form();
		Form(const Form& copy);
		Form& operator=(const Form& op);

		std::string getName() const;
        bool getSign() const;
        int getSignGrade() const;
        int getExecGrade() const;

		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};

		void beSigned(const Bureaucrat & bureaucrat);
};

std::ostream &operator<<(std::ostream & out, const Form & form);

# endif