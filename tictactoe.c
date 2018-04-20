#include <stdlib.h>
#include <stdio.h>

#include "tictactoe.h"

#define POSITIONS 9 

//struct gamespace gameboard[9];
struct	gamespace gameboard[] = {{8,cat},{1,cat},{6,cat},{3,cat},{5,cat},{7,cat},{4,cat},{9,cat},{2,cat}};
char gamemoves[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};

int main(){ 
	/*
	 * This will be an attempt at making
	 * tic tac toe all on my own.
	 */
	printf("Welcom to tic tac toe!\n");

	/* Creating the game board
	 * 1|2|3
	 * 4|5|6
	 * 7|8|9
	 */
//	struct	gamespace gameboard[] = {{8,cat},{1,cat},{6,cat},{3,cat},{5,cat},{7,cat},{4,cat},{9,cat},{2,cat}};
//	gameboard[1] = {8,cat};
//	gameboard[2] = {1,cat};
//	gameboard[3] = {6,cat};
//	gameboard[4] = {3,cat};
//	gameboard[5] = {5,cat};
//	gameboard[6] = {7,cat};
//	gameboard[7] = {4,cat};
//	gameboard[8] = {9,cat};
//	gameboard[9] = {2,cat};
	char playermoves[8];
	playermoves = fgets("Please make a move");

	enum Player game_winner = findWinner();

	fillMoves();
	
	/* Draw the gameboard.
	 * Player1 is always x
	 * Player 2 is always o
	 * Spaces are blank until someone
	 * makes a move there.
	 * x|o|x
	 * ------
	 * o| |o
	 * -----
	 * x|x|
	 */
	printBoard();

	return 0;
}

enum Player findWinner()
{
	return cat;
}

void printBoard()
{
	printf("%c|%c|%c\n",gamemoves[0],gamemoves[1],gamemoves[2]);
	printf("-----\n");
	printf("%c|%c|%c\n",gamemoves[3],gamemoves[4],gamemoves[5]);
	printf("-----\n");
	printf("%c|%c|%c\n",gamemoves[6],gamemoves[7],gamemoves[8]);
}

char *getPlayerStr(int player)
{
	switch ((enum Player)player)
	{
	case cat:
		return " ";
	case player1:
		return "x";
	case player2:
		return "o";
	}
}

void fillMoves(void)
{
	
}
