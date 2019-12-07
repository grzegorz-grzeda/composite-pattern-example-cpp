#ifndef ICOMPONENT_HPP__
#define ICOMPONENT_HPP__

struct IComponent
{
	virtual ~IComponent() {}

	virtual const char *getName(const char* prefix) = 0;

	virtual void execute() = 0;
};

#endif // !ICOMPONENT_HPP__
