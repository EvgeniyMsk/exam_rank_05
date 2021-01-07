#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
	for (std::vector<ATarget *>::iterator it = spells.begin(); it != spells.end();)
	{
		delete (*it);
		it = spells.erase(it);
	}
}

void TargetGenerator::learnTargetType(ATarget *spell)
{
	for (std::vector<ATarget *>::iterator it = spells.begin(); it != spells.end(); it++)
	{
		if ((*it)->getType() == spell->getType())
			return;
	}
	spells.push_back(spell->clone());
}

void TargetGenerator::forgetTargetType(std::string const &spell)
{
	for (std::vector<ATarget *>::iterator it = spells.begin(); it != spells.end();)
	{
		if ((*it)->getType() == spell)
		{
			delete (*it);
			it = spells.erase(it);
		}
		else
		it++;
	}
}

ATarget *TargetGenerator::createTarget(std::string const &spell)
{
	for (std::vector<ATarget *>::iterator it = spells.begin(); it != spells.end(); it++)
	{
		if ((*it)->getType() == spell)
			return ((*it)->clone());
	}
	return (NULL);
}