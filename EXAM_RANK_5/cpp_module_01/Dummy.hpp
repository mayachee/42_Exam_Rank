/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:57:52 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/12 12:32:28 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ATarget.hpp"


// In the same way, create a concrete ATarget called Dummy,
//  the type of which
// is "Target Practice Dummy". 
// You must also implement its clone() method.

class Dummy : public ATarget
{
    public:
        Dummy();
        ~Dummy();
        ATarget * clone() const;
};