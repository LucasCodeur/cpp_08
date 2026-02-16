/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:51:53 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/16 17:52:47 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP 

#include <vector>

class Span
{
	public:
		unsigned int 		maxNumbers;
		std::vector<int>	Integers;

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
