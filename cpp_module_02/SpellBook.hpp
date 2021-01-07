#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include "ASpell.hpp"
#include <vector>

class SpellBook
{
	private:
	std::vector<ASpell *> spells;
	SpellBook(SpellBook const &copy);
	SpellBook &operator=(SpellBook const &spellbook);
	public:
	SpellBook();
	virtual ~SpellBook();
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spell);
	ASpell *createSpell(std::string const &spell);
};

#endif