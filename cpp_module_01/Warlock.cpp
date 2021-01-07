#include "Warlock.hpp"

Warlock::Warlock(std::string const &newName, std::string const &newTitle) :
	name(newName), title(newTitle)
{
	std::cout << name + ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end();)
	{
		delete (*it);
		it = spells.erase(it);
	}
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
	for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return;
	}
	spells.push_back(spell->clone());
}

void Warlock::forgetSpell(std::string spell)
{
	for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end();)
	{
		if ((*it)->getName() == spell)
		{
			delete (*it);
			it = spells.erase(it);
		}
		else
		it++;
	}
}

void Warlock::launchSpell(std::string spell, ATarget &target)
{
	for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
	{
		if ((*it)->getName() == spell)
		{
			(*it)->launch(target);
			return;
		}
	}
}