/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:54:11 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/08 18:54:12 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include "Form.hpp"

class RobotmyRequestForm : public Form
{
	private:
		std::string target;
		virtual void action() const;
	public:
		RobotmyRequestForm();
		RobotmyRequestForm(std::string target);
		virtual ~RobotmyRequestForm();
		RobotmyRequestForm(const RobotmyRequestForm& copy);
		RobotmyRequestForm& operator=(const RobotmyRequestForm& op);
		std::string getTarget();
};

# endif