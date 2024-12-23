
// #pragma once
// #include "ASpell.hpp"

// class ASpell;

// class ATarget
// {
// //Now you will create an ATarget abstract class, 
// // in Coplien's form. It has a type
// // attribute, which is a string, and its associated getter,
// //  getType, that return a
// // reference to constant string.

//     protected:
//         std::string type;
    
//     public:
//     std::string getType() const;

//     // Also add a clone pure method that returns a pointer to ATarget.
//     virtual ATarget * clone() const = 0;
//     // All these functions can be called on a constant object.
//     virtual ~ATarget();
//     ATarget(ATarget & obj);
//     ATarget(std::string type);
//     ATarget & operator=(ATarget const & obj);



    
// // Now, add to your ATarget a getHitBySpell
// // function that takes a reference to
// // constant ASpell.

// // It will display :

// // <TYPE> has been <EFFECTS>!
//     void getHitBySpell(ASpell const & spell) const;
// };


#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget 
{
	protected :
		std::string type;
	
	public :
		ATarget(std::string type);
		ATarget & operator=(ATarget const & rhs);
		ATarget(ATarget const & obj);
		virtual ~ATarget();
		std::string getType() const;
		virtual ATarget* clone() const = 0;
		void	getHitBySpell(ASpell const & spell) const;
};