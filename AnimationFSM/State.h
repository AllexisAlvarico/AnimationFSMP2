#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <PlayerFSM.h>
#include <Debug.h>

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	virtual void idle(PlayerFSM* a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void jumping(PlayerFSM* a)
	{
		DEBUG_MSG("State::Jumping");
	}
	virtual void climbing(PlayerFSM* a)
	{
		DEBUG_MSG("State::Climbing");
	}
	virtual void prone(PlayerFSM* a)
	{
		DEBUG_MSG("State::Prone");
	}
	virtual void crouching(PlayerFSM* a)
	{
		DEBUG_MSG("State::Prone");
	}
	virtual void running(PlayerFSM* a)
	{
		DEBUG_MSG("State::Prone");
	}
};

#endif // ! ANIMATION_H

