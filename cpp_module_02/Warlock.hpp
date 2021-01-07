#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <string>
#include <iostream>
#include "SpellBook.hpp"

class ATarget;
class ASpell;
class Warlock
{
	private:
	std::string name;
	std::string title;
	Warlock();
	Warlock(Warlock const &copy);
	Warlock &operator=(Warlock const &warlock);
	SpellBook spellbook;
	public:
	Warlock(std::string const &newName, std::string const &newTitle);
	virtual ~Warlock();
	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &newTitle);
	void introduce() const;
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spell);
	void launchSpell(std::string const &spell, ATarget &target);
};

#include "ASpell.hpp"
#include "ATarget.hpp"

#endif