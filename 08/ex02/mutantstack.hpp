/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:51:41 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/12 02:07:23 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTAK_HPP
# define MUTANTSTAK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <algorithm>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		/*
			아래 56, 62 라인에서 볼 수 있듯이 std::stack<T>::container_type은 'deque'를 나타낸다.
			즉 std::stack<T>::container_type::iterator는 deque의 iterator를 의미한다.
			그리고 아래처럼 iterator 타입 멤버를 사용할 수 있게 선언하자.
		*/
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	
		MutantStack() : std::stack<T>() {};
		virtual ~MutantStack() {};
		MutantStack(const MutantStack& copy)
		{
			*this = copy;
		};
		
		MutantStack& operator=(const MutantStack& op)
		{
			if (this != &op)
			{
				std::stack<T>::operator=(op);
			}
			return (*this);
		};

		iterator begin()
		{
			/*
				- 'stl_stack.h'에 정의된 헤더를 보면, 아래와 같이 스택이 'deque'로 구현된 것을 확인 할 수 있다.
				또한 접근 제한자가 protected로 설정되어 있어 std::stack<T>을 상속하면 deque(=c)의 iterator 관련 함수를 그대로 이용할 수 있다.
				template<typename _Tp, typename _Sequence = deque<_Tp> >
				class stack
				{
					...
					public:
						...
						typedef	 _Sequence	container_type;
						...

					protected:
						//  See queue::c for notes on this name.
						_Sequence c;
					...
				};
			*/
			return (std::stack<T>::c.begin());
		};

		iterator end()
		{
			return (std::stack<T>::c.end());
		};

		const_iterator begin() const
		{
			return (std::stack<T>::c.begin());
		};

		const_iterator end() const
		{
			return (std::stack<T>::c.end());
		};

		reverse_iterator rbegin()
		{
			return (std::stack<T>::c.rbegin());
		};

		reverse_iterator rend()
		{
			return (std::stack<T>::c.rend());
		};

		const_reverse_iterator rbegin() const
      	{
			return (std::stack<T>::c.rbegin());
		}

		const_reverse_iterator rend() const
      	{
			return (std::stack<T>::c.rend());
		}

};

# endif