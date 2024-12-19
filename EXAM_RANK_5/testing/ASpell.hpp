/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:20:53 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/19 13:44:00 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    private:
        std::string name;
        std::string effects;
    public:

    std::string getName() const;
    std::string getEffects() const;
        virtual ~ASpell();
        ASpell & operator=(ASpell const & str);
        ASpell(ASpell const & src);
        ASpell(std::string name, std::string effects);
        virtual ASpell* clone() const = 0;
        void launch(ATarget const & target) const;
};
