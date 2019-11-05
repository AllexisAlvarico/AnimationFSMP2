#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Prone.h>
#include <Crouching.h>
#include <Running.h>


#include <string>

void Jumping::idle(PlayerFSM* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Jumping::climbing(PlayerFSM* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Jumping::prone(PlayerFSM* a)
{
	std::cout << "Jumping -> Prone" << std::endl;
	a->setCurrent(new Prone());
	delete this;
}

void Jumping::crouching(PlayerFSM* a)
{
	std::cout << "Jumping -> Crouching" << std::endl;
	a->setCurrent(new Crounching());
	delete this;
}

void Jumping::running(PlayerFSM* a)
{
	std::cout << "Jumping -> Running" << std::endl;
	a->setCurrent(new Running());
	delete this;
}
