/*
 * Name: Maximiliano Neaves
 * Project: TicTacToe
 * This is a simple game of Tic Tac Toe.
 * Source: http://www.cppforschool.com/project/tic-tac-toe-project.html
 */

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

char charSquare[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int intCheckWin();
void voidBoard();

int main()
{
	int intPlayer = 1;
	int intI;
	int intChoice = 1;

	char charMark;

	do
	{
		voidBoard();
		intPlayer = (intPlayer % 2) ? 1 : 2;

		cout << "Player " << intPlayer << ", enter a number: ";
		cin >> intChoice;

		charMark = (1 == intPlayer) ? 'X' : 'O';

		if (1 == intChoice && '1' == charSquare[1])
		{
			charSquare[1] = charMark;
		}

		else if (2 == intChoice && '2' == charSquare[2])
		{
			charSquare[2] = charMark;
		}

		else if (3 == intChoice && '3' == charSquare[3])
		{
			charSquare[3] = charMark;
		}

		else if (4 == intChoice && '4' == charSquare[4])
		{
			charSquare[4] = charMark;
		}

		else if (5 == intChoice && '5' == charSquare[5])
		{
			charSquare[5] = charMark;
		}

		else if (6 == intChoice && '6' == charSquare[6])
		{
			charSquare[6] = charMark;
		}

		else if (7 == intChoice && '7' == charSquare[7])
		{
			charSquare[7] = charMark;
		}

		else if (8 == intChoice && '8' == charSquare[8])
		{
			charSquare[8] = charMark;
		}

		else if (9 == intChoice && '9' == charSquare[9])
		{
			charSquare[9] = charMark;
		}

		else
		{
			cout << "Invalid move ";

			intPlayer--;
			cin.ignore();
			cin.get();
		}

		intI = intCheckWin();

		intPlayer++;
	}

	while (-1 == intI);
	{
		voidBoard();

		if (1 == intI)
		{
			cout << "==>\aPlayer " << --intPlayer << " wins ";
		}

		else
		{
			cout << "==>\aGame draw";
		}
	}

	cin.ignore();
	cin.get();

    return 0;
}

/*
 * FUNCTION TO RETURN GAME STATUS
 * 1 FOR GAME IS OVER WITH RESULT
 * -1 FOR GAME IS IN PROGRESS
 * 0 FOR GAME IS OVER WITHOUT RESULT
 */
int intCheckWin()
{
	if (charSquare[2] == charSquare[1] && charSquare[3] == charSquare[2])
	{
		return 1;
	}

	else if (charSquare[5] == charSquare[4] && charSquare[6] == charSquare[5])
	{
		return 1;
	}

	else if (charSquare[8] == charSquare[7] && charSquare[9] == charSquare[8])
	{
		return 1;
	}

	else if (charSquare[4] == charSquare[1] && charSquare[7] == charSquare[4])
	{
		return 1;
	}

	else if (charSquare[5] == charSquare[2] && charSquare[8] == charSquare[5])
	{
		return 1;
	}

	else if (charSquare[6] == charSquare[3] && charSquare[9] == charSquare[6])
	{
		return 1;
	}

	else if (charSquare[5] == charSquare[1] && charSquare[9] == charSquare[5])
	{
		return 1;
	}

	else if (charSquare[5] == charSquare[3] && charSquare[7] == charSquare[5])
	{
		return 1;
	}

	else if (charSquare[1] != '1' && charSquare[2] != '2'
		&& charSquare[3] != '3' && charSquare[4] != '4'
		&& charSquare[5] != '5' && charSquare[6] != '6'
		&& charSquare[7] != '7' && charSquare[8] != '8'
		&& charSquare[9] != '9')
	{
		return 0;
	}

	else
	{
		return -1;
	}
}

/*
 * FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
 */
void voidBoard()
{
	system("cls");

	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X) - Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << charSquare[1] << "  |  " << charSquare[2] << "  |  " << charSquare[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << charSquare[4] << "  |  " << charSquare[5] << "  |  " << charSquare[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << charSquare[7] << "  |  " << charSquare[8] << "  |  " << charSquare[9] << endl;
	cout << "     |     |     " << endl;
}

