#ifndef ASPELL_HPP
#define ASPELL_HPP
#include <string>
#include <iostream>

class ATarget;
class ASpell
{
	protected:
	std::string name;
	std::string effects;
	public:
	ASpell();
	ASpell(std::string const &newName, std::string const &newEffects);
	ASpell(ASpell const &copy);
	ASpell &operator=(ASpell const &spell);
	virtual ~ASpell();
	std::string const &getName() const;
	std::string const &getEffects() const;
	virtual ASpell *clone() const = 0;
	void launch(ATarget const &target) const;
};

#include "ATarget.hpp"

#endif