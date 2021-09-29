/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:01:48 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 16:14:09 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		const Weapon& weapon;
		// const 사용 이유 : 참조를 하고 있기 때문에 해당 클래스에서 직접적으로 변경이 이뤄지면 안되는걸 명시
		// 원본(Weapon 클래스)에서 바뀌면 여기도 저절로 바뀌니까 여길 손댈 필요는 없음

	public:
		HumanA(std::string name, const Weapon &weapon);
		virtual ~HumanA();
		void attack();
};

#endif