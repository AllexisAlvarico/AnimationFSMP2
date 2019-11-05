#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Prone.h>
#include <Crouching.h>
#include <Running.h>


void Running::idle(PlayerFSM* a)
{
	std::cout << "Running -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Running::jumping(PlayerFSM* a)
{
	std::cout << "Running -> Jumping" << std::endl;
	a->setCurrent(new Crounching());
	delete this;
}
void Running::climbing(PlayerFSM* a)
{
	std::cout << "Running -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Running::prone(PlayerFSM* a)
{
	std::cout << "Running -> Prone" << std::endl;
	a->setCurrent(new Prone());
	delete this;
}

void Running::crouching(PlayerFSM* a)
{
	std::cout << "Running -> Crounhing" << std::endl;
	a->setCurrent(new Crounching());
	delete this;
}
