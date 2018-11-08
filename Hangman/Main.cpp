// Hangman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Header.h"
#include "Window.h"

int main()
{
	Window window;
	Hangman hangman;

	do {
		hangman.displayWord();
		hangman.displayMessage();
		hangman.makeGuess();
	} while (hangman.getGuessCount() < hangman.getMaxGuesses());

	hangman.lostGame();
	system("pause");
	return 0;
}
