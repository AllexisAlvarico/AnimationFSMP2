#ifndef RUNNING_H
#define RUNNING_H

#include <State.h>

class Running : public State
{
public:
	Running() {};
	~Running() {};
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
	void climbing(PlayerFSM* a);
	void prone(PlayerFSM* a);
	void crouching(PlayerFSM* a);
};

#endif // !IDLE_H