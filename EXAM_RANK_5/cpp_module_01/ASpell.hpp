/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:28:12 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/12 12:49:05 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;

    public:
        std::string getName() const;
        std::string getEffects() const;

        // Also add a clone pure method that returns 
        // a pointer to ASpell.
        virtual ASpell * clone() const = 0;
    
        ASpell(ASpell &obj);
        ASpell &operator=(ASpell const & str);
        ASpell();
        ASpell(std::string name, std::string effects);
        virtual ~ASpell();

        void launch(ATarget const & target) const;
};