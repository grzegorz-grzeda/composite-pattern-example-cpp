#ifndef COMMENTER_HPP__
#define COMMENTER_HPP__

#include "IComponent.hpp"
#include <iostream>

struct Commenter : IComponent
{
	Commenter(std::string name)
		: name("COMMENTER_" + name)
	{
	}
	const char *getName(const char *prefix)
	{
		resultName = prefix + name;
		return resultName.c_str();
	}
	void execute()
	{
		std::cout << "[" << name << "] I don't know what I'm doing..." << std::endl;
	}

private:
	std::string resultName;
	std::string name;
};

#endif // !COMMENTER_HPP__
