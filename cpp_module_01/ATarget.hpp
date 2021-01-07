#ifndef ATARGET_HPP
#define ATARGET_HPP
#include <string>
#include <iostream>

class ASpell;
class ATarget
{
	protected:
	std::string type;
	public:
	ATarget();
	ATarget(std::string const &newType);
	ATarget(ATarget const &copy);
	ATarget &operator=(ATarget const &target);
	virtual ~ATarget();
	std::string const &getType() const;
	virtual ATarget *clone() const = 0;
	void getHitBySpell(ASpell const &spell) const;
};

#include "ASpell.hpp"

#endif