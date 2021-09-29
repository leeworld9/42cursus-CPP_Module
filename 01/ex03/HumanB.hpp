/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:01:28 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 16:07:10 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		const Weapon* weapon;

	public:
		HumanB(std::string name);
		virtual ~HumanB();
		void setWeapon(const Weapon &weapon);
		void attack();
};

#endif