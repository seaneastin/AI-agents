/*******************************************************************************************
*
*   raylib [core] example - basic window
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2013-2016 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include "Agent.h"
#include "behavior.h"
#include "KeyboardBehavior.h"
#include "SeekBehavior.h"
int main()
{
	// Initialization
	//--------------------------------------------------------------------------------------
	int screenWidth = 1600;
	int screenHeight = 900;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60);

	Agent* player = new Agent();
	player->setPostion({ 100.0f, 100.0f });
	KeyboardBehavior* keyboardBehavior = new KeyboardBehavior;
	player->AddBehavior(keyboardBehavior);

	Agent* enemy = new Agent();
	enemy->setPostion({ 500.0f, 500.0f });
	SeekBehavior* seekBehavior = new SeekBehavior();
	seekBehavior->setTarget(player);
	enemy->AddBehavior(seekBehavior);
	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		// TODO: Update your variables here
		//----------------------------------------------------------------------------------
		player->Update(GetFrameTime());
		enemy->Update(GetFrameTime());
		enemy->Update(GetFrameTime());
		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		ClearBackground(BLACK);

		player->Draw();
		enemy->Draw();

		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------   
	CloseWindow();        // Close window and OpenGL context
	//--------------------------------------------------------------------------------------

	return 0;
}