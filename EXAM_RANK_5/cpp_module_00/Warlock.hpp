/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:54:25 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/10 15:22:58 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Warlock {
    private:
        Warlock(Warlock const & obj);
        Warlock & operator=(Warlock const & str);
        Warlock();

        std::string name;
        std::string title;
        
    public:
        std::string const & getName() const;
        std::string const & getTitle() const;
        void setTitle(std::string const & str);
        Warlock(std::string const & name, std::string const & title);
        ~Warlock();
        void introduce() const;
};
