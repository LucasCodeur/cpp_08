/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:00:42 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/16 17:24:18 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>
#include <limits>
#include <stdexcept>
#include <algorithm>

Span::Span()
{
	std::cout << "Span Constructor called" << std::endl;
	this->N = 5;
}

Span::Span(unsigned int N)
{
	std::cout << "Span Parameterized Constructor called" << std::endl;

	if (N > this->Integers.max_size())
		throw std::runtime_error("Max size");

	this->N = N;
}

Span::Span(const Span& other)
{
	std::cout << "Span Copy Constructor called" << std::endl;

	if (this != &other)
	{
		this->Integers = other.Integers;
		this->N = other.N;
	}
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->Integers = other.Integers;
		this->N = other.N;
	}

	return (*this);
}

Span::~Span()
{
	std::cout << "Span Destructor called" << std::endl;
}

void	Span::addNumber(int toAdd)
{
	if (this->N == 0)
		throw std::runtime_error("Maximum numbers reach") ;

	this->Integers.push_back(toAdd);
	this->N--;
}

unsigned int	Span::shortestSpan()
{
	if (this->Integers.size() < 2)
		throw std::runtime_error("Smallest Span: not enough numbers");

	unsigned int		minDist = std::numeric_limits<int>::max();
	unsigned int		compute = 0;
	std::vector<int>	temp = this->Integers;

	std::sort(temp.begin(), temp.end());

	int	size = temp.size(); 

	for (int i = 1; i < size; i++)
	{
		compute = static_cast<unsigned int>(temp[i]) - static_cast<unsigned int>(temp[i - 1]);
		if (compute < minDist)
			minDist = compute;
	}
	return (minDist);
}

unsigned int	Span:: longestSpan()
{
	if (this->Integers.size() < 2)
		throw std::runtime_error("unsigned intest Span: not enough numbers");

	std::vector<int> temp = this->Integers;

	std::sort(temp.begin(), temp.end());

	std::vector<int>::iterator it_begin = temp.begin();
	std::vector<int>::iterator it_end = temp.end();

	unsigned int	result =  static_cast<unsigned int>(*(--it_end)) - static_cast<unsigned int>(*it_begin);
	return (result);
}

void Span::addMultipleNumbers(unsigned int numbers, int beginRange)
{
	std::vector<int> temp;

	if (numbers == 0)
		throw std::runtime_error("numbers have to be at least 1");
	else if (numbers > 20000)
		throw std::runtime_error("numbers is too high");
	for (unsigned int i = 0; i < numbers; i++)
	{
		if (this->N == 0)
			throw std::runtime_error("Maximum numbers reach") ;
		temp.push_back(beginRange);
		beginRange++;
		this->N--;
	}

	this->Integers.insert(this->Integers.begin(), temp.begin(), temp.end());
}

