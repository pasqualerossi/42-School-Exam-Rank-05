#include "Warlock.hpp"
		
Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title) 
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}

std::string const & Warlock::getName() const {return name;}
std::string const & Warlock::getTitle() const {return title;}
void Warlock::setTitle(std::string const &title){this->title = title;}
void Warlock::introduce() const 
{
	std::cout << name << ": I am " << name << ", "<< title << "!" << std::endl;
}

Warlock::Warlock(Warlock const & src) {*this = src;}
Warlock & Warlock::operator=(Warlock const & src){this->name = src.name; this-> title=src.title; return *this;}
