#ifndef CLIMBING_H
#define CLIMBING_H

#include <State.h>

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
	void prone(PlayerFSM* a);
	void crouching(PlayerFSM* a);
	void running(PlayerFSM* a);
};

#endif // !IDLE_H