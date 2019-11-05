#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	void idle(PlayerFSM* a);
	void climbing(PlayerFSM* a);
	void prone(PlayerFSM* a);
	void crouching(PlayerFSM* a);
	void running(PlayerFSM* a);
};

#endif // !IDLE_H