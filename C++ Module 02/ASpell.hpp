#pragma once

#include <iostream>

class ATarget;

class ASpell {

	public:
	ASpell();
	ASpell(ASpell const & src);
	ASpell &operator=(ASpell const & rhs);
	ASpell(std::string name, std::string effects);
	virtual ~ASpell();

	std::string getName() const;
	std::string getEffects() const;

	void	launch(ATarget const & target) const;

	virtual ASpell *clone() const = 0;

	private:

	std::string name;
	std::string effects;

};

#include "ATarget.hpp"
