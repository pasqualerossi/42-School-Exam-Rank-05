#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects)
{

}

ASpell & ASpell::operator=(ASpell const & rhs)
{
	_name = rhs.getName();
	_effects = rhs.getEffects();
	return *this;
}

ASpell::ASpell(ASpell const & obj)
{
	*this = obj;
}

ASpell::~ASpell()
{

}

std::string ASpell::getName() const
{
	return (_name);
}

std::string ASpell::getEffects() const
{
	return (_effects);
}

void ASpell::launch(ATarget const & target) const
{
	const ATarget *tmp = &target; // checking this prevents SegFault 
	if (tmp)                      // check if target is not unkown/NULL 
		target.getHitBySpell(*this);
}
