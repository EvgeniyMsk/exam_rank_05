#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
	for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end();)
	{
		delete (*it);
		it = spells.erase(it);
	}
}

void SpellBook::learnSpell(ASpell *spell)
{
	for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return;
	}
	spells.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string const &spell)
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

ASpell *SpellBook::createSpell(std::string const &spell)
{
	for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
	{
		if ((*it)->getName() == spell)
			return ((*it)->clone());
	}
	return (NULL);
}