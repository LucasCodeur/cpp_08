/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:09:13 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/17 15:39:35 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

#include "MutantStack.hpp"

static int t_exo_mutantStack(void);
static int t_exo_list(void);
static int t_constructor_copy_and_equal(void);

int main( void )
{
	t_exo_mutantStack();
	t_exo_list();
	t_constructor_copy_and_equal();
	return 0;
}

static int	t_constructor_copy_and_equal(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_constructor_copy_and_equal" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Original\n";
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<int> test(mstack);
	it = test.begin();
	ite = test.end();
	++it;
	--it;
	std::cout << "Copy\n";
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int> test2;
	test2.push(564383265);
	test2.push(175428352);
	it = test2.begin();
	ite = test2.end();
	std::cout << "test2 before operator equal\n";
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	test2 = mstack;
	it = test2.begin();
	ite = test2.end();
	std::cout << "test2 after operator equal\n";
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	return (0);
}

static int t_exo_mutantStack(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_exo_mutantStack" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

static int t_exo_list(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_exo_list" << std::endl;

	std::list<int> mstack;

	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << "top: " << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s(mstack);
	return 0;
}
