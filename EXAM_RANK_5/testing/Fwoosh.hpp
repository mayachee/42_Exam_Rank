/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:59:35 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/19 12:42:53 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.cpp"

// When all this is done, create an implementation of 
// ASpell called Fwoosh. Its
// default constructor will set the name to "Fwoosh" 
// and the effects to
// "fwooshed". You will, of course,
//  implement the clone() method. In the case of
// Fwoosh,
//  it will return a pointer to a new Fwoosh object.

class Fwoosh : public ASpell
{
	public :
		Fwoosh();
		~Fwoosh();
		ASpell* clone() const;
};