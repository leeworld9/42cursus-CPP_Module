/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:22:55 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 19:29:30 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 4)
		std::cout << "error: Invalid Number Of Arguments" << std::endl;
	else
	{
		try
		{
			replace(argv[1], argv[2], argv[3]);
		}
		catch(char const *e)
		{
			std::cerr << "replace: error: " << e << std::endl;
		}
	}
	return (0);
}