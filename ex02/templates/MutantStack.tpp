/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:30:30 by agilles           #+#    #+#             */
/*   Updated: 2025/06/27 13:52:09 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

 template <typename T>
MutantStack<T>::MutantStack()
{

}

 template <typename T>
MutantStack<T>::MutantStack(MutantStack const &other)
{

}

 template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &other)
{

}

 template <typename T>
MutantStack<T>::~MutantStack()
{

}

 template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{

}

 template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{

}

 template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{

}

 template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{

}

 template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{

}

 template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return (std::stack<T>::c.rend());
}

 template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{

}

 template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{

}

