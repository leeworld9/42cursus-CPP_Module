/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 22:28:24 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/10 03:32:29 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cmath>
# include <limits>
# include <string>

class Convert
{
	public:
		Convert();
		virtual ~Convert();
		Convert(const Convert& copy);
		Convert& operator=(const Convert& op);

		float baseFloat(std::string str);
		char toChar(float base);
		int toInt(float base);
		float toFloat(float base);
		double toDouble(float base);
};

# endif