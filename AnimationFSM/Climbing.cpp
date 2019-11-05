#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Prone.h>
#include <Crouching.h>
#include <Running.h>


#include <string>

void Climbing::idle(PlayerFSM* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Climbing::jumping(PlayerFSM* a)
{
	std::cout << "Climbing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Climbing::prone(PlayerFSM* a)
{
	std::cout << "Climbing -> Prone" << std::endl;
	a->setCurrent(new Prone());
	delete this;
}

void Climbing::crouching(PlayerFSM* a)
{
	std::cout << "Climbing -> Crouching" << std::endl;
	a->setCurrent(new Crounching());
	delete this;
}

void Climbing::running(PlayerFSM* a)
{
	std::cout << "Climbing -> Running" << std::endl;
	a->setCurrent(new Running());
	delete this;
}
