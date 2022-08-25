#include "ATarget.hpp"

ATarget::ATarget() {

}

ATarget::ATarget(ATarget const & src) {

	*this = src;
}

ATarget &ATarget::operator=(ATarget const & rhs) {

	this->type = rhs.type;
	return *this;
}

ATarget::ATarget(std::string type) {

	this->type = type;
}

ATarget::~ATarget() {


}

std::string ATarget::getType() const {

	return (this->type);
}

void	ATarget::getHitBySpell(ASpell const & spell) const {

	std::cout << this->getType() << " has been " << spell.getEffects() << "!\n";
}

