/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:59:43 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/12 11:00:12 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{
}

Dummy::~Dummy()
{
}

ATarget * Dummy::clone() const
{
    return (new Dummy());
}