/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:13:40 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/19 14:07:35 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock
{
    private:
        Warlock & operator=(Warlock const & str);
        Warlock(Warlock const & obj);
        Warlock();
        std::string name;
        std::string title;

        std::map<std::string, ASpell *> spellbook;
        
    public:
        std::string const & getName() const;
        std::string const & getTitle() const;

        ~Warlock();
        Warlock(std::string const & name, std::string const & title);
        void setTitle(std::string const & title);
        void introduce() const;

//         * learnSpell, takes a pointer to ASpell,
//  that makes the Warlock learn a spell
void learnSpell(ASpell * spell);
// * forgetSpell, takes a string corresponding a
//  to a spell's name, and makes the
//   Warlock forget it. If it's not a known spell,
//  does nothing.
void forgetSpell(std::string namespell);
// * launchSpell, takes a string (a spell name) 
// and a reference to ATarget, that
//   launches the spell on the selected target.
//  If it's not a known spell, does  nothing.
void launchSpell(std::string namespell, ATarget const & target);
};

