/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 18:51:23 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 19:25:24 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <fstream>
# include <iostream>

std::string replaceLine(std::string line, std::string str1, std::string str2);
void replace(std::string filePath, std::string str1, std::string str2);

#endif