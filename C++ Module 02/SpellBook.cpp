#include "SpellBook.hpp"

SpellBook::SpellBook() {

}

SpellBook::~SpellBook() {

	std::vector<ASpell *>::iterator itS = spellbook.begin();
	std::vector<ASpell *>::iterator itE = spellbook.end();

	while (itS != itE)
	{
		delete *itS;
		itS++;
	}
	this->spellbook.clear();
}

void	SpellBook::learnSpell(ASpell  *spell) {

	std::vector<ASpell *>::iterator itS = spellbook.begin();
	std::vector<ASpell *>::iterator itE = spellbook.end();

	if (spell)
	{
		while (itS != itE)
		{
			if ((*itS)->getName() == spell->getName())
				return ;
			itS++;			
		}
		this->spellbook.push_back(spell->clone());
	}
}

void	SpellBook::forgetSpell(std::string const & name) {

	std::vector<ASpell *>::iterator itS = spellbook.begin();
	std::vector<ASpell *>::iterator itE = spellbook.end();

	while (itS != itE)
	{
		if ((*itS)->getName() == name)
		{
			delete *itS;
			this->spellbook.erase(itS);
			return ;
		}
		itS++;
	}
}

ASpell	*SpellBook::createSpell(std::string const &name) {

	std::vector<ASpell *>::iterator itS = spellbook.begin();
	std::vector<ASpell *>::iterator itE = spellbook.end();

	while (itS != itE)
	{
		if ((*itS)->getName() == name)
			return (*itS);
		itS++;
	}
	return (NULL);
}

