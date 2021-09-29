/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:32:54 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 22:08:17 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
	Karen k;

	k.complain("DEBUG");
	k.complain("ERROR");
	k.complain("INFO");
	k.complain("WARNING");
}