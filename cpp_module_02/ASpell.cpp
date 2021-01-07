#include "ASpell.hpp"

ASpell::ASpell() :
	name(), effects()
{
}

ASpell::ASpell(std::string const &newName, std::string const &newEffects) :
	name(newName), effects(newEffects)
{
}

ASpell::ASpell(ASpell const &copy) :
	name(copy.name), effects(copy.effects)
{
}

ASpell &ASpell::operator=(ASpell const &spell)
{
	name = spell.name;
	effects = spell.effects;
	return (*this);
}

ASpell::~ASpell()
{
}

std::string const &ASpell::getName() const
{
	return (name);
}

std::string const &ASpell::getEffects() const
{
	return (effects);
}

void ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}