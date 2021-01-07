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