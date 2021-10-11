/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:34:58 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/10 23:43:39 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
int main()
{
	Base *base = generate();

	identify(base);
	identify(*base);
	
	delete base;
}