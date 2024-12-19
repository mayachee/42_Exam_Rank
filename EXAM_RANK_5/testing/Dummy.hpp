/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:44:58 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/19 12:45:47 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ATarget.cpp"

class Dummy : public ATarget
{
    public:
        Dummy();
        ~Dummy();
        ATarget *clone() const;
};
