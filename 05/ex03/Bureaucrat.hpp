/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:27:05 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/08 18:26:21 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
class Form;
# include "Form.hpp"

class Bureaucrat
{
	private:
		std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		virtual ~Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& op);

		std::string getName() const;
		int	getGrade() const;

		void gradeUp();
		void gradeDown();

		// Exception
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};

		void signForm(Form & from);
		void executeForm(Form const & form);

};

std::ostream &operator<<(std::ostream & out, const Bureaucrat & bureaucrat);

# endif