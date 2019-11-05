#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Prone.h>
#include <Crouching.h>
#include <Running.h>


void Crounching::idle(PlayerFSM* a)
{
	std::cout << "Crounching -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Crounching::climbing(PlayerFSM* a)
{
	std::cout << "Crounching -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Crounching::prone(PlayerFSM* a)
{
	std::cout << "Crounching -> Prone" << std::endl;
	a->setCurrent(new Crounching());
	delete this;
}

void Crounching::running(PlayerFSM* a)
{
	std::cout << "Crounching -> Running" << std::endl;
	a->setCurrent(new Prone());
	delete this;
}

void Crounching::jumping(PlayerFSM* a)
{
	std::cout << "Crounching -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

