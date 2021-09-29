/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:32:08 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 23:11:13 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		struct	complainType
		{
			std::string name;
			void (Karen::*func)(void);
		};
		complainType complainType[4];
	public:
		Karen(void);
		~Karen(void);
		void complain(std::string level);
};

#endif