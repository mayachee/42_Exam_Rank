/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:33:21 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/19 13:44:44 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
        std::string type;
    public:
        std::string getType() const;
        ATarget();
        virtual ~ATarget();
        ATarget(ATarget const & src);
        ATarget(std::string type);
        ATarget & operator=(ATarget const & str);
        virtual ATarget * clone() const = 0;
        void getHitBySpell(ASpell const & spell) const;
};
