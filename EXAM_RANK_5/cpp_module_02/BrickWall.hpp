/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 01:47:26 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/18 01:52:22 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// In addition to this, just so he won't have only 
// dummy to attack, let's make a
// new target for him, which will be 
//the BrickWall (Type: "Inconspicuous Red-brick Wall").

#include "ATarget.hpp"

class BrickWall : public ATarget
{
    public:
        BrickWall();
        ~BrickWall();

        ATarget* clone() const;
};