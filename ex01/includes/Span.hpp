/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:02:10 by agilles           #+#    #+#             */
/*   Updated: 2025/06/27 12:15:27 by agilles          ###   ########.fr       */
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

		Span	&operator=(const Span &cp);

		void	addNumber(int n);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		int		shortestSpan();
		int		longestSpan();

		std::vector<int>	getVector();

		class NotEnougthNumberException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class MaxNumberException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

