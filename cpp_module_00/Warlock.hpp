#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <string>
#include <iostream>

class Warlock
{
	private:
	std::string name;
	std::string title;
	Warlock();
	Warlock(Warlock const &copy);
	Warlock &operator=(Warlock const &warlock);
	public:
	Warlock(std::string const &newName, std::string const &newTitle);
	virtual ~Warlock();
	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &newTitle);
	void introduce() const;
};

#endif