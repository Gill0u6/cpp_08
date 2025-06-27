/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:02:08 by agilles           #+#    #+#             */
/*   Updated: 2025/06/27 12:22:26 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span()
{
	std::cout << "Span Default Constructor called" << std::endl;
}

Span::Span(unsigned int N): _N(N)
{
	std::cout << "Span _N Constructor called" << std::endl;
}

Span::Span(const Span &cp)
{
	std::cout << "Span Copy Constructor called" << std::endl;
	*this = cp;
}

Span::~Span()
{
	std::cout << "Span Deconstructor called" << std::endl;
}

Span &Span::operator=(const Span &cp)
{
	if (this == &cp)
		return (*this);
	this->_N = cp._N;
	this->_v = cp._v;
	return (*this);
}

void Span::addNumber(int n)
{
	if (this->_v.size() >= _N)
		throw Span::MaxNumberException();
	_v.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_v.size() + std::distance(begin, end) > _N)
		throw Span::MaxNumberException();
	this->_v.insert(this->_v.end(), begin, end);
}

int		Span::shortestSpan()
{
	if (this->_v.size() <= 1)
		throw Span::NotEnougthNumberException();
	std::vector<int> tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
	int min = tmp[1] - tmp[0];
	for (unsigned int i = 1; i < this->_v.size(); i++)
	{
		if (tmp[i] - tmp [i - 1] < min)
			min = tmp[i] - tmp [i - 1];
	}
	return (min);
}

int		Span::longestSpan()
{
	if (this->_v.size() <= 1)
		throw Span::NotEnougthNumberException();
	int minVal = *std::min_element(_v.begin(), _v.end());
	int maxVal = *std::max_element(_v.begin(), _v.end());
	return (maxVal - minVal);
}

const char *Span::NotEnougthNumberException::what(void) const throw()
{
	return ("Error: Not Enought Number");
}

const char *Span::MaxNumberException::what(void) const throw()
{
	return ("Error: Max Number");
}

std::vector<int>	Span::getVector()
{
	return (this->_v);
}
