/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:34:27 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/17 17:58:52 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>

template < typename T, class container=std::deque<T> >
class MutantStack : public std::stack<T>
{
	public:
		MutantStack()
		{
			std::cout << "MutantStack Constructor called" << std::endl;
		}
		MutantStack(unsigned int)
		{
			std::cout << "MutantStack Parameterized Constructor called" << std::endl;
		}
		MutantStack(const MutantStack& other) : std::stack<T>(other)
		{
			std::cout << "MutantStack Copy Constructor called" << std::endl;
		}
		MutantStack& operator=(const MutantStack& other)
		{
			if (this != &other)
			{
				this->c = other.c;
			}
			return (*this);
		}
		~MutantStack(void)
		{
			std::cout << "MutantStack Destructor called" << std::endl;
		}
		typedef typename container::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
	private:
};
