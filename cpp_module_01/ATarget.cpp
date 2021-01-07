#include "ATarget.hpp"

ATarget::ATarget() :
	type()
{
}

ATarget::ATarget(std::string const &newType) :
	type(newType)
{
}

ATarget::ATarget(ATarget const &copy) :
	type(copy.type)
{
}

ATarget &ATarget::operator=(ATarget const &target)
{
	type = target.type;
	return (*this);
}

ATarget::~ATarget()
{
}

std::string const &ATarget::getType() const
{
	return (type);
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << type + " has been " + spell.getEffects() + "!\n";
}