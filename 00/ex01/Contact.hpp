/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:46:22 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/27 08:14:30 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	private:
		std::string cData[5];
		bool running;

	public:
		void setData(int index, std::string data);
		void getDetailData();
		void getSearchData(int index);
		void setRunning(bool running);
		bool getRunning();
		Contact();
};

#endif