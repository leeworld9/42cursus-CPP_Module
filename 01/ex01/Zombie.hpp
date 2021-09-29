/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:31:31 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 15:13:42 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <sstream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		void setName(std::string name);
		void announce(void);
		virtual ~Zombie(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif