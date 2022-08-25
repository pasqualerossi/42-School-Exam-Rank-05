#include "ASpell.hpp"

ASpell::ASpell() {

}

ASpell::ASpell(ASpell const & src) {

	*this = src;
}

ASpell &ASpell::operator=(ASpell const & rhs) {

	this->name = rhs.name;
	this->effects = rhs.effects;
	return *this;
}

ASpell::ASpell(std::string name, std::string effects) {

	this->name = name;
	this->effects = effects;
}

ASpell::~ASpell() {


}

std::string ASpell::getName() const {

	return (this->name);
}


std::string ASpell::getEffects() const {

	return (this->effects);
}

void	ASpell::launch(ATarget const & target) const {

	target.getHitBySpell(*this);
}

