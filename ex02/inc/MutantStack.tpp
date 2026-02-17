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

class MutantStack : public std::stack<int>
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
		MutantStack(const MutantStack& other)
		{
			std::cout << "MutantStack Copy Constructor called" << std::endl;
			if (this != &other)
			{
				*this = other;
			}
		}
		MutantStack& operator=(const MutantStack& other)
		{
			if (this != &other)
			{
				*this = other;
			}
			return (*this);
		}
		~MutantStack(void)
		{
			std::cout << "MutantStack Copy Destructor called" << std::endl;
		}
	private:
};


