#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {

}

TargetGenerator::~TargetGenerator() {

	std::vector<ATarget *>::iterator itS = ptarget.begin();
	std::vector<ATarget *>::iterator itE = ptarget.end();

	while (itS != itE)
	{
		delete *itS;
		itS++;
	}
	this->ptarget.clear();
}

void	TargetGenerator::learnTargetType(ATarget  *target) {

	std::vector<ATarget *>::iterator itS = ptarget.begin();
	std::vector<ATarget *>::iterator itE = ptarget.end();

	if (target)
	{
		while (itS != itE)
		{
			if ((*itS)->getType() == target->getType())
				return ;
			itS++;			
		}
		this->ptarget.push_back(target->clone());
	}
}

void	TargetGenerator::forgetTargetType(std::string const & name) {

	std::vector<ATarget *>::iterator itS = ptarget.begin();
	std::vector<ATarget *>::iterator itE = ptarget.end();

	while (itS != itE)
	{
		if ((*itS)->getType() == name)
		{
			delete *itS;
			this->ptarget.erase(itS);
			return ;
		}
		itS++;
	}
}

ATarget *TargetGenerator::createTarget(std::string const &name) {

	std::vector<ATarget *>::iterator itS = ptarget.begin();
	std::vector<ATarget *>::iterator itE = ptarget.end();

	while (itS != itE)
	{
		if ((*itS)->getType() == name)
			return (*itS);
		itS++;
	}
	return (NULL);
}

