/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:51:53 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/16 14:56:55 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP 

#include <list>

class Span
{
	public:
		unsigned int 		maxNumbers;
		std::list<int>		Integers;

		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span(void);

		void addNumber(int toAdd);
		int	shortestSpan();
		int	longestSpan();
	private:
};

# endif
