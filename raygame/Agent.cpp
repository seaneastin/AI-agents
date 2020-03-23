#include "Agent.h"

void Agent::Update(float deltaTime)
{
	//Set force to zero
	//for each Behavior in the Behavior list
	//call the behavior's update function and 
	//add the returned value to total force 
	//add total force times delta time to velocity
	//add velocity times delta time to position
	//if velocity goes over max set it to max
}

void Agent::Draw()
{
	DrawRectangle(m_Position.x, m_Position.y, 50, 50, MAGENTA);
}

void Agent::AddBehavior(Behavior * behavior)
{
}


