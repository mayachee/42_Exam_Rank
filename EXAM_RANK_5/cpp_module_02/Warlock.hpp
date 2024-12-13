/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:48 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/12 12:33:05 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ASpell.hpp"
#include <map>

class Warlock
{
    private:
        Warlock(Warlock &obj);
        Warlock &operator=(Warlock const & str);
        Warlock();

        std::string name;
        std::string title;

        std::map<std::string, ASpell *> spellbook;
    
    public:
        std::string const & getName() const;
        std::string const & getTitle() const;

        void setTitle(std::string const & title);

        Warlock(std::string const & name, std::string const & title);

        ~Warlock();

        void introduce() const;

        
    // * learnSpell, takes a pointer to ASpell,
    // that makes the Warlock learn a spell

    void learnSpell(ASpell * spell);

//     * forgetSpell, takes a string corresponding a
//  to a spell's name, and makes the
//   Warlock forget it. If it's not a known spell, does nothing.
    void forgetSpell(std::string spellname);

//     * launchSpell, takes a string (a spell name) and 
//      a reference to ATarget, that
//   launches the spell on the selected target.
//  If it's not a known spell, does   nothing.

    void launchSpell(std::string spellname, ATarget const & target);
};