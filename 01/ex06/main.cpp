/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:32:54 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 22:04:15 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen k;
	
	if (argc != 2)
		std::cout << "error: Invalid Number Of Arguments" << std::endl;
	else
	{
		k.karenFilter(argv[1]);
	}
}