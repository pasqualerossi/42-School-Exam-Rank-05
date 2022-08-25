#pragma once

#include <iostream>

class Warlock {

	public:
	
	Warlock(std::string name, std::string title);
	~Warlock();

	std::string getName() const;
	std::string getTitle() const;

	void	setTitle(std::string title);

	void	introduce() const;

	private:

	std::string name;
	std::string title;

	Warlock();
	Warlock(Warlock const & src);

	Warlock &operator=(Warlock const & rhs);

};
