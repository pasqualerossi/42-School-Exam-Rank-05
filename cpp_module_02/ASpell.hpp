#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell 
{
	protected :
		std::string _name;
		std::string _effects;
	
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