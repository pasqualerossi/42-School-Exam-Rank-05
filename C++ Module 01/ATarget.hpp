#pragma once

#include <iostream>

class ASpell;

class ATarget {

	public:
	ATarget();
	ATarget(ATarget const & src);
	ATarget &operator=(ATarget const & rhs);
	ATarget(std::string type);
	virtual ~ATarget();

	std::string getType() const;

	void	getHitBySpell(ASpell const & spell) const;

	virtual ATarget *clone() const = 0;

	private:

	std::string type;

};

#include "ASpell.hpp"
