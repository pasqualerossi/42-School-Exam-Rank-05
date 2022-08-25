#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {

	public:
	
	Warlock(std::string name, std::string title);
	~Warlock();

	std::string getName() const;
	std::string getTitle() const;

	void	setTitle(std::string title);

	void	introduce() const;

	void	learnSpell(ASpell  *spell);
	void	forgetSpell(std::string name);
	void	launchSpell(std::string name, ATarget const & target);

	private:

	std::string name;
	std::string title;
	std::vector<ASpell *> magic;

	Warlock();
	Warlock(Warlock const & src);

	Warlock &operator=(Warlock const & rhs);

};
