#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Prone.h>
#include <Crouching.h>
#include <Running.h>

#include <string>

void Idle::handleInput() {}
void Idle::update() {}

void Idle::jumping(PlayerFSM* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::climbing(PlayerFSM* a)
{
	std::cout << "Idle -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Idle::prone(PlayerFSM* a)
{
	std::cout << "Idle -> Prone" << std::endl;
	a->setCurrent(new Prone());
	delete this;
}

void Idle::crouching(PlayerFSM* a)
{
	std::cout << "Idle -> Crouching" << std::endl;
	a->setCurrent(new Crounching());
	delete this;
}

void Idle::running(PlayerFSM* a)
{
	std::cout << "Idle -> Running" << std::endl;
	a->setCurrent(new Running());
	delete this;
}
