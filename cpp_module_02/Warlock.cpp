#include "Warlock.hpp"

Warlock::Warlock(std::string const &newName, std::string const &newTitle) :
	name(newName), title(newTitle)
{
	std::cout << name + ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << name + ": My job here is done!\n";
}

std::string const &Warlock::getName() const
{
	return (name);
}

std::string const &Warlock::getTitle() const
{
	return (title);
}

void Warlock::setTitle(std::string const &newTitle)
{
	title = newTitle;
}

void Warlock::introduce() const
{
	std::cout << name + ": I am " + name + ", " + title + "!\n";
}

void Warlock::learnSpell(ASpell *spell)
{
	spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string const &spell)
{
	spellbook.forgetSpell(spell);
}

void Warlock::launchSpell(std::string const &spell, ATarget &target)
{
	ASpell *sp = spellbook.createSpell(spell);
	if (sp)
	{
		sp->launch(target);
		delete (sp);
	}
}