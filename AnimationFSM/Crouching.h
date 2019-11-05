#ifndef CROUNCHING_H
#define CROUNCHING_H

#include <State.h>

class Crounching : public State
{
public:
	Crounching() {};
	~Crounching() {};
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
	void climbing(PlayerFSM* a);
	void prone(PlayerFSM* a);
	void running(PlayerFSM* a);
};

#endif // !IDLE_H