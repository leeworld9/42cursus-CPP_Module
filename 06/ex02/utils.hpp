/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:47:04 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/10 23:16:45 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef UTILS_HPP
# define UTILS_HPP

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <cstdlib>
# include <ctime>

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif