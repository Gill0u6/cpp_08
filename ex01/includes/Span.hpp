/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:02:10 by agilles           #+#    #+#             */
/*   Updated: 2025/06/26 13:15:44 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_v;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &cp);

		~Span();

		Span operator=(const Span &cp);
};
