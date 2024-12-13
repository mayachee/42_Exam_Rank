/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:30:51 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/12 12:48:18 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"

class ASpell;

class ATarget{
    protected:
        std::string type;
    public:
        std::string getType() const;

        virtual ATarget * clone() const = 0;

        ATarget(ATarget &obj);
        ATarget &operator=(ATarget const & str);
        ATarget(std::string type);
        virtual ~ATarget();

        void getHitBySpell(ASpell const & as) const;
};