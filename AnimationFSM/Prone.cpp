#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Prone.h>
#include <Crouching.h>
#include <Running.h>

#include <string>

void Prone::idle(PlayerFSM* a)
{
	std::cout << "Prone -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Prone::jumping(PlayerFSM* a)
{
	std::cout << "Prone -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Prone::climbing(PlayerFSM* a)
{
	std::cout << "Prone -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Prone::crouching(PlayerFSM* a)
{
	std::cout << "Prone -> Crounching" << std::endl;
	a->setCurrent(new Crounching());
	delete this;
}

void Prone::running(PlayerFSM* a)
{
	std::cout << "Prone -> Running" << std::endl;
	a->setCurrent(new Running());
	delete this;
}
