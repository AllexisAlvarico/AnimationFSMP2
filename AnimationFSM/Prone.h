#ifndef PRONE_H
#define PRONE_H

#include <State.h>

class Prone : public State
{
public:
	Prone() {};
	~Prone() {};
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
	void climbing(PlayerFSM* a);
	void crouching(PlayerFSM* a);
	void running(PlayerFSM* a);
};

#endif // !IDLE_H