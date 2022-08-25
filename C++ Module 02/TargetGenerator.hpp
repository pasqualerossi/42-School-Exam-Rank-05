#pragma once

#include "ATarget.hpp"
#include <vector>

class TargetGenerator {

	public:

	TargetGenerator();
	~TargetGenerator();

	void	learnTargetType(ATarget  *target);
	void	forgetTargetType(std::string const & name);
	ATarget *createTarget(std::string const & name);

	private:

	std::vector<ATarget *>	ptarget;

	TargetGenerator(TargetGenerator const & src);

	TargetGenerator &operator=(TargetGenerator const & rhs);

};
