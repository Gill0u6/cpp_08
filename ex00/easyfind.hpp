/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:12:45 by agilles           #+#    #+#             */
/*   Updated: 2025/06/26 12:22:13 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>

#include <iostream>
#include <list>
#include <deque>

 template <typename T>
typename T::iterator easyfind(T &container, int to_find)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), to_find);
	if (it ==container.end())
		throw std::runtime_error("Value not find inside the container");
	return (it);
}
