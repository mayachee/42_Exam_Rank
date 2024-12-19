
#pragma once
#include "ASpell.cpp"

// When all this is done, create an implementation of 
// ASpell called Fwoosh. Its
// default constructor will set the name to "Fwoosh" 
// and the effects to
// "fwooshed". You will, of course,
//  implement the clone() method. In the case of
// Fwoosh,
//  it will return a pointer to a new Fwoosh object.

class Polymorph : public ASpell
{
	public :
		Polymorph();
		~Polymorph();
		ASpell* clone() const;
};