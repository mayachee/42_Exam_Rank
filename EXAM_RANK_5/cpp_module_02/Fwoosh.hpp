/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:23:18 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/17 14:56:06 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"

// When all this is done, create an implementation 
// of ASpell called Fwoosh. Its
// default constructor will set the name to
//  "Fwoosh" and the effects to
// "fwooshed". You will, of course,
//  implement the clone() method. In the case of
// Fwoosh, it will return a pointer to a 
//new Fwoosh object.

class Fwoosh : public ASpell
{
    public:
        Fwoosh();
        ~Fwoosh();
        ASpell * clone() const;
        
};
