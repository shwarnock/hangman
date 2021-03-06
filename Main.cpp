// Hangman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Managers/GameManager.h";

int main(int argc, char* argv[])
{
	GameManager* game = GameManager::Instance();

	game->Run();
	GameManager::Release();
	game = NULL;

	return 0;
}

