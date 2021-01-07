#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP
#include "ATarget.hpp"
#include <vector>

class TargetGenerator
{
	private:
	std::vector<ATarget *> spells;
	TargetGenerator(TargetGenerator const &copy);
	TargetGenerator &operator=(TargetGenerator const &spellbook);
	public:
	TargetGenerator();
	virtual ~TargetGenerator();
	void learnTargetType(ATarget *spell);
	void forgetTargetType(std::string const &spell);
	ATarget *createTarget(std::string const &spell);
};

#endif