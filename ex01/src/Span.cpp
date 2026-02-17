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
	this->maxNumbers = 5;
}

Span::Span(unsigned int maxNumbers)
{
	std::cout << "Span Constructor called" << std::endl;
	if (maxNumbers > this->Integers.max_size())
		throw std::runtime_error("MaxNumbers is to high");
	this->maxNumbers = maxNumbers;
}

Span::Span(const Span& other)
{
	std::cout << "Span Copy Constructor called" << std::endl;
	if (this != &other)
	{
		this->Integers = other.Integers;
		this->maxNumbers = other.maxNumbers;
	}
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->Integers = other.Integers;
		this->maxNumbers = other.maxNumbers;
	}
	return (*this);
}

Span::~Span()
{
	std::cout << "Span Destructor called" << std::endl;
}

void	Span::addNumber(int toAdd)
{
	if (this->maxNumbers == 0)
		throw std::runtime_error("Maximum numbers reach") ;
	this->Integers.push_back(toAdd);
	this->maxNumbers--;
	return ;
}

int	Span::shortestSpan()
{
	if (this->Integers.size() < 2)
		throw std::runtime_error("Smallest Span: not enough numbers");

	int	minDist = std::numeric_limits<int>::max();
	int	compute = 0;

	std::vector<int> temp = this->Integers;
	std::sort(temp.begin(), temp.end());
	int	size = temp.size(); 
	for (int i = 1; i < size; i++)
	{
		compute = temp[i] - temp[i - 1];
		if (compute < minDist)
			minDist = compute;
	}
	return (minDist);
}

int	Span::longestSpan()
{
	if (this->Integers.size() < 2)
		throw std::runtime_error("Longest Span: not enough numbers");
	std::vector<int> temp = this->Integers;
	std::sort(temp.begin(), temp.end());
	std::vector<int>::iterator it_begin = temp.begin();
	std::vector<int>::iterator it_end = temp.end();
	return (*(--it_end) - *it_begin);
}

void Span::addMultipleNumbers(unsigned int numbers, int beginRange)
{
	if (this->maxNumbers == 0)
		throw std::runtime_error("Maximum numbers reach") ;
    std::vector<int> temp;
	for (unsigned int i = 0; i < numbers && this->maxNumbers > 0; i++)
	{
		temp.push_back(beginRange);
		beginRange++;
		this->maxNumbers--;
	}
	this->Integers.insert(this->Integers.begin(), temp.begin(), temp.end());
}

