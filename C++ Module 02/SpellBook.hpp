#pragma once

#include "ASpell.hpp"
#include <vector>

class SpellBook {

	public:

	SpellBook();
	~SpellBook();

	void	learnSpell(ASpell  *spell);
	void	forgetSpell(std::string const & name);
	ASpell	*createSpell(std::string const & name);

	private:

	std::vector<ASpell *>	spellbook;

	SpellBook(SpellBook const & src);

	SpellBook &operator=(SpellBook const & rhs);

};
