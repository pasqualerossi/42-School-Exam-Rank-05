#include "Warlock.hpp"


Warlock::Warlock(std::string name, std::string title) {

	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {

	std::vector<ASpell *>::iterator itS = magic.begin();
	std::vector<ASpell *>::iterator itE = magic.end();

	while (itS != itE)
	{
		delete *itS;
		itS++;
	}
	this->magic.clear();

	std::cout << this->name << ": My job here is done!\n";

}

std::string Warlock::getName() const {

	return (this->name);
}


std::string Warlock::getTitle() const {

	return (this->title);
}

void	Warlock::setTitle(std::string title) {

	this->title = title;
}

void	Warlock::introduce() const {

	
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}


void	Warlock::learnSpell(ASpell  *spell) {

	std::vector<ASpell *>::iterator itS = magic.begin();
	std::vector<ASpell *>::iterator itE = magic.end();

	if (spell)
	{
		while (itS != itE)
		{
			if ((*itS)->getName() == spell->getName())
				return ;
			itS++;
		}
		this->magic.push_back(spell->clone());
	}
}

void	Warlock::forgetSpell(std::string name) {

	std::vector<ASpell *>::iterator itS = magic.begin();
	std::vector<ASpell *>::iterator itE = magic.end();

	while (itS != itE)
	{
		if ((*itS)->getName() == name)
		{
			delete *itS;
			this->magic.erase(itS);
			return ;
		}
		itS++;
	}
}

void	Warlock::launchSpell(std::string name, ATarget const & target) {

	std::vector<ASpell *>::iterator itS = magic.begin();
	std::vector<ASpell *>::iterator itE = magic.end();

	while (itS != itE)
	{
		if ((*itS)->getName() == name)
		{
			(*itS)->launch(target);
			return ;
		}	
		itS++;
	}
}

