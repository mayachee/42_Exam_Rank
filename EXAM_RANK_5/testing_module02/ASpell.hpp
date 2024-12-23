

// #pragma once
// #include <iostream>
// #include "ATarget.hpp"

// class ATarget;

// class ASpell
// {
//     protected:
//         std::string name;
//         std::string effects;
    
//     public:
//     // (getName and getEffects)
//     std::string getName() const;
//     std::string getEffects() const;

//     // Also add a clone pure method that returns a pointer to ASpell.
//     virtual ASpell * clone() const = 0;
//     // All these functions can be called on a constant object.
//     virtual ~ASpell();
//     ASpell();
//     ASpell(ASpell & obj);
//     ASpell(std::string name, std::string effcets);
//     ASpell & operator=(ASpell const & obj);

// // add to your ASpell class a launch function that takes a reference to
// // constant ATarget.
// // This one will simply call the getHitBySpell of the passed object, passing the
// // current instance as parameter.
//     void launch(ATarget const & target) const;
// };


#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell 
{
	protected :
		std::string name;
		std::string effects;
	
	public :
		ASpell(std::string name, std::string effects);
		ASpell & operator=(ASpell const & rhs);
		ASpell(ASpell const & obj);
		virtual ~ASpell();
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(ATarget const & target) const;
};