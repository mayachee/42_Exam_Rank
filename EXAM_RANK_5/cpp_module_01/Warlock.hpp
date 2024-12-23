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
        void learnSpell(ASpell * spell);
        void forgetSpell(std::string spellname);

        void launchSpell(std::string spellname, ATarget const & target);
};