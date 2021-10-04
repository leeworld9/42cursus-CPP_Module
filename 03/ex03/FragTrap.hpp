/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 22:30:34 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/04 15:27:07 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		virtual ~FragTrap();
		FragTrap(const FragTrap& copy);
		FragTrap& operator=(const FragTrap& op);

		virtual void attack(std::string const & target);
		void highFivesGuys();
};

#endif