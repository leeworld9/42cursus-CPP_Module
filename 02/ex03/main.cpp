/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:41:45 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/02 19:50:38 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

int main()
{
	Point a(1 , 3);
	Point b(-4 , -3);
	Point c(3 , -1);

	Point point1(2, 0); // 삼각형 내부
	if (bsp(a, b, c, point1)) 
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	Point point2(3, -1); // 꼭지점
	if (bsp(a, b, c, point2))
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	
	Point point3(3.5, -1); // 삼각형 외부
	if (bsp(a, b, c, point3))
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
}