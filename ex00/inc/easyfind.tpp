/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:51:44 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/14 13:53:58 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

template <typename T>
int	easyfind(T integers, int toFind)
{
	for (typename T::iterator it = integers.begin(); it != integers.end(); ++it)
	{
		if (*it == toFind)
			return (*it);
	}
	throw std::runtime_error("Int not find");
	return (0);
}

// template <typename T>
// int	easyfind(const T integers, const int toFind)
// {
// 	for (int i = 0; i < integers.size(); i++)
// 	{
// 		int	temp = integers.pop(); 
// 		if (temp == toFind)
// 			return (temp);
// 	}
// 	throw std::runtime_error("Int not find");
// 	return (0);
// }
