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
static void	t_smallest_number(void);
static void	t_longest_number(void);
static void t_add_multiple_numbers(void);

int main( void )
{
	// t_add_number();
	// t_smallest_number();
	// t_iterators();
	// t_longest_number();
	// t_insert();
	t_add_multiple_numbers();

	return 0;
}

static void t_add_multiple_numbers(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_add_multiple_numbers " << std::endl;
	try 
	{
		Span	test(20000);
		test.addMultipleNumbers(20000, 1);

		std::cout << "PRINT BEFORE" << std::endl;
		for (std::vector<int>::iterator it = test.Integers.begin(); it != test.Integers.end(); ++it)
		{
		  std::cout << *it << std::endl;
		}
		std::cout << "The longest span: \n" << test.longestSpan() << std::endl;
		std::cout << "The shortest span: \n" << test.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
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
		test.addNumber(3);
		test.addNumber(-1000);
		test.addNumber(-3000);

		std::cout << "PRINT BEFORE" << std::endl;
		for (std::vector<int>::iterator it = test.Integers.begin(); it != test.Integers.end(); ++it)
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

static void	t_smallest_number(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_add_number " << std::endl;
	try 
	{
		Span	test(5);

		test.addNumber(10);
		test.addNumber(-5);
		test.addNumber(20);
		// test.addNumber(200);
		test.addNumber(-1);
		for (std::vector<int>::iterator it = test.Integers.begin(); it != test.Integers.end(); ++it)
		{
		  std::cout << *it << std::endl;
		}
		std::cout << "The smallest span: " << test.shortestSpan() << std::endl;
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
		for (std::vector<int>::iterator it = test.Integers.begin(); it != test.Integers.end(); ++it)
		{
		  std::cout << *it << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
