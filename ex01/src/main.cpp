/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:09:13 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/16 17:22:35 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>

#include "Span.hpp"

static void	t_add_number(void);
// static void	t_smallest_number(void);
// static void	t_iterators(void);
static void	t_longest_number(void);

int main( void )
{
	// t_add_number();
	// t_smallest_number();
	// t_iterators();
	t_longest_number();

	return 0;
}

static void	t_longest_number(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_longest_number " << std::endl;
	try 
	{
		Span	test(8);

		test.addNumber(-1);
		test.addNumber(2);
		// test.addNumber(3);

		std::cout << "PRINT BEFORE" << std::endl;
		for (std::list<int>::iterator it = test.Integers.begin(); it != test.Integers.end(); ++it)
		{
		  std::cout << *it << std::endl;
		}
		std::cout << "The longest span: \n" << test.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}

static void	t_iterators(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_iterators" << std::endl;
	try 
	{
		Span	test(5);

		test.addNumber(1);
		test.addNumber(10);
		test.addNumber(-20);
		test.addNumber(200);
		test.addNumber(5);

		for (std::list<int>::iterator it = test.Integers.begin(); it != test.Integers.end(); ++it)
		{
		  std::cout << *it << std::endl;
		}
		std::cout << "WITH DO WHILE" << std::endl;
		std::list<int>::iterator it = test.Integers.begin();
		std::list<int>::iterator* ptr;
		ptr = &it;
		std::cout << *it << std::endl;
		do 
		{
			++it;
			std::cout << *it << std::endl;
			// std::cout << &it << std::endl;
		}
		while (it != ptr);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

}

static void	t_smallest_number(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_add_number " << std::endl;
	try 
	{
		Span	test(5);

		test.addNumber(1);
		test.addNumber(10);
		test.addNumber(-20);
		test.addNumber(200);
		test.addNumber(5);
		for (std::list<int>::iterator it = test.Integers.begin(); it != test.Integers.end(); ++it)
		{
		  std::cout << *it << std::endl;
		}
		// std::cout << "The smallest span: " << test.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}

static void	t_add_number(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_add_number " << std::endl;
	try 
	{
		Span	test(5);
		test.addNumber(1);
		test.addNumber(-1);
		test.addNumber(2147483647);
		test.addNumber(-2147483648);
		test.addNumber(-2147483648);
		for (std::list<int>::iterator it = test.Integers.begin(); it != test.Integers.end(); ++it)
		{
		  std::cout << *it << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
