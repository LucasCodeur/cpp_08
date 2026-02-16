/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:09:13 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/12 11:16:28 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <deque>
#include <list>
#include <stack>

#include <iostream>
#include <algorithm>

static void	t_vector(void);
static void	t_deque(void);
static void	t_list(void);
static void	t_list_const(void);

int main( void )
{
	// t_vector();
	// t_deque();
	// t_list();
	t_list_const();
	return 0;
}

static void t_list_const(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_list_const" << std::endl;
	std::list<int> test;
 
	test.push_front(25);
	test.push_back(13);
	test.push_back(2147483647);
	test.push_back(2147483647);
	test.push_back(-2147483648);
	
 
	const std::list<int> test2;
	for (std::list<int>::const_iterator it = test2.begin(); it != test2.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	try 
	{
		std::cout << "easyfind : " << easyfind(test, 2147483647) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

// static void t_stack(void)
// {
//     std::stack<int> test;
//
//     test.push(13);
// 	test.push(2147483647);
// 	test.push(2147483647);
// 	test.push(-2147483648);
//
// 	// for (std::list<int>::iterator it = test.begin(); it != test.end(); ++it)
// 	// {
// 	// 	std::cout << *it << std::endl;
// 	// }
// 	try 
// 	{
// 		std::cout << "easyfind : " << easyfind(test, 2147483647) << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// }

static void t_list(void)
{
	std::list<int> test;
 
	test.push_front(25);
	test.push_back(13);
	test.push_back(2147483647);
	test.push_back(2147483647);
	test.push_back(-2147483648);
	
 
	for (std::list<int>::iterator it = test.begin(); it != test.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	try 
	{
		std::cout << "easyfind : " << easyfind(test, 2147483647) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

static void	t_deque(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_deque " << std::endl;
	std::deque<int> test;
	test.push_back(1);
	test.push_back(-1);
	test.push_back(2147483647);
	test.push_back(-2147483648);
	for (std::deque<int>::iterator it = test.begin(); it != test.end(); ++it)
	{
	  std::cout << *it << std::endl;
	}
	try 
	{
		std::cout << "easyfind : " << easyfind(test, 2147483647) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

static void	t_vector(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_vector " << std::endl;
	std::vector<int> v1(1);
	v1.push_back(1);
	v1.push_back(-1);
	v1.push_back(2147483647);
	v1.push_back(-2147483648);
	for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
	{
	  std::cout << *it << std::endl;
	}
	try 
	{
		std::cout << "easyfind : " << easyfind(v1, 2147483647) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
