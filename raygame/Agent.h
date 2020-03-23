#pragma once
#include "raylib.h"
#include <vector>


class Behavior;

class Agent
{
public:
	Agent();
	virtual ~Agent();

	//update the agent and its behaviors
	virtual void Update(float deltaTime);


	//draw the agnet
	virtual void Draw();


	//add a behavior to the agent
	void AddBehavior(Behavior behavior);

	//movement functions

	void setPostion(Vector2 position) { m_Position = position; }
	Vector2 GetPosition() { return m_Position; }
	void SetVelocity(Vector2 velocity) { m_Velocity = velocity; }
	Vector2 GetVelocity() { return m_Velocity; }


protected:
	std::vector<Behavior*> m_BehaviourList;


	Vector2 m_Position;
	Vector2 m_Velocity;
};


