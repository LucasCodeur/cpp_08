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
	int	i = 0;
	int	j = 1;
	int	size = this->Integers.size();
	int	minDist = std::numeric_limits<int>::max();
	while (i < size - 1)
	{
		while (j < size - 1)
		{
			if ((this->Integers[j] - this->Integers[j + 1]) < minDist)
				minDist = std::abs(this->Integers[j] - this->Integers[j + 1]);
			std::cout << "Min dist: " << minDist << std::endl;
			std::cout << "j: " << this->Integers[j] << std::endl;
			std::cout << "j: " << this->Integers[j + 1] << std::endl;
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

int	Span::longestSpan()
{
	if (this->Integers.size() < 2)
		throw std::runtime_error("Longest Span: not enough numbers");
	this->Integers.sort();
	std::list<int>::iterator it_begin = this->Integers.begin();
	std::list<int>::iterator it_end = this->Integers.end();
	return (std::abs(*it_begin - *(--it_end)));
}
