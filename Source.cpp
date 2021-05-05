//big funny
//teetris by tim

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

using namespace std;

bool isgaming = true;
bool piece = true;
int randpiece = 0;
int rotation = 0;
int counter = 0;
int row = 0;
int score = 0;
int pos1x = 0;
int pos1y = 0;
int pos2x = 0;
int pos2y = 0;
int pos3x = 0;
int pos3y = 0;
int pos4x = 0;
int pos4y = 0;
char uInput;

char bgGrid[21][10] = { {'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'},
{'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'},
{'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'},
{'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'},
{'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'}, {'#','#','#','#','#','#','#','#','#','#'},
{char(254),char(254),char(254),char(254),char(254),char(254),char(254),char(254),char(254),char(254)} };

void drawScreen() {
	system("cls");
	bgGrid[pos1x][pos1y] = char(254);
	bgGrid[pos2x][pos2y] = char(254);
	bgGrid[pos3x][pos3y] = char(254);
	bgGrid[pos4x][pos4y] = char(254);
	cout << "\n";
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++) {
			cout << " " << bgGrid[i][j];
		}
		cout << endl;
	}
	cout << "\n ";
}

void clearlines() {
	for (int i = 19; i >= 0; i--) {
		counter = 0;
		for (int j = 9; j >= 0; j--) {
			if (bgGrid[i][j] == char(254)) {
				row = i;
				counter++;
			}
		}

		if (counter == 10) {
			for (int k = 0; k <= 9; k++)
			{
				bgGrid[row][k] = '#';
			}
			Sleep(100);
			drawScreen();
			for (int l = row; l >= 0; l--) {
				for (int m = 0; m <= 9; m++) {
					if (bgGrid[l][m] == char(254)) {
						bgGrid[l][m] = '#';
						bgGrid[l + 1][m] = char(254);
					}
				}
			}
			score += 40;
		}
		else if (counter == 20) {
			for (int k = 0; k <= 9; k++)
			{
				bgGrid[row][k] = '#';
			}
			Sleep(100);
			drawScreen();
			for (int l = row; l >= 0; l--) {
				for (int m = 0; m <= 9; m++) {
					if (bgGrid[l][m] == char(254)) {
						bgGrid[l][m] = '#';
						bgGrid[l + 1][m] = char(254);
					}
				}
			}
			score += 100;
		}
		else if (counter == 30) {
			for (int k = 0; k <= 9; k++)
			{
				bgGrid[row][k] = '#';
			}
			Sleep(100);
			drawScreen();
			for (int l = row; l >= 0; l--) {
				for (int m = 0; m <= 9; m++) {
					if (bgGrid[l][m] == char(254)) {
						bgGrid[l][m] = '#';
						bgGrid[l + 1][m] = char(254);
					}
				}
			}
			score += 300;
		}
		else if (counter == 40) {
			for (int k = 0; k <= 9; k++)
			{
				bgGrid[row][k] = '#';
			}
			Sleep(100);
			drawScreen();
			for (int l = row; l >= 0; l--) {
				for (int m = 0; m <= 9; m++) {
					if (bgGrid[l][m] == char(254)) {
						bgGrid[l][m] = '#';
						bgGrid[l + 1][m] = char(254);
					}
				}
			}
			score += 1200;
		}
	}
}

void randPiece() {
	rotation = 0;
	randpiece = (rand() % 6) + 1;
	//start piece upon random choice
	switch (randpiece) {
	case 1:
	{
		//TeeWee 2 3 4
		pos1x = 0;
		pos1y = 6;
		pos2x = 1;
		pos2y = 5;
		pos3x = 1;
		pos3y = 6;
		pos4x = 1;
		pos4y = 7;

		bgGrid[pos1x][pos1y] = char(254);
		bgGrid[pos2x][pos2y] = char(254);
		bgGrid[pos3x][pos3y] = char(254);
		bgGrid[pos4x][pos4y] = char(254);
		break;
	}
	case 2:
	{
		//Orange Ricky 2 3 4
		pos1x = 0;
		pos1y = 5;
		pos2x = 1;
		pos2y = 3;
		pos3x = 1;
		pos3y = 4;
		pos4x = 1;
		pos4y = 5;

		bgGrid[pos1x][pos1y] = char(254);
		bgGrid[pos2x][pos2y] = char(254);
		bgGrid[pos3x][pos3y] = char(254);
		bgGrid[pos4x][pos4y] = char(254);
		break;
	}
	case 3:
	{
		//Blue Ricky 2 3 4
		pos1x = 0;
		pos1y = 3;
		pos2x = 1;
		pos2y = 3;
		pos3x = 1;
		pos3y = 4;
		pos4x = 1;
		pos4y = 5;

		bgGrid[pos1x][pos1y] = char(254);
		bgGrid[pos2x][pos2y] = char(254);
		bgGrid[pos3x][pos3y] = char(254);
		bgGrid[pos4x][pos4y] = char(254);
		break;
	}
	case 4:
	{
		//Hero 1 2 3 4
		pos1x = 0;
		pos1y = 4;
		pos2x = 0;
		pos2y = 5;
		pos3x = 0;
		pos3y = 6;
		pos4x = 0;
		pos4y = 7;

		bgGrid[pos1x][pos1y] = char(254);
		bgGrid[pos2x][pos2y] = char(254);
		bgGrid[pos3x][pos3y] = char(254);
		bgGrid[pos4x][pos4y] = char(254);
		break;
	}
	case 5:
	{
		//Cleveland Z 3 4
		pos1x = 0;
		pos1y = 3;
		pos2x = 0;
		pos2y = 4;
		pos3x = 1;
		pos3y = 4;
		pos4x = 1;
		pos4y = 5;

		bgGrid[pos1x][pos1y] = char(254);
		bgGrid[pos2x][pos2y] = char(254);
		bgGrid[pos3x][pos3y] = char(254);
		bgGrid[pos4x][pos4y] = char(254);
		break;
	}
	case 6:
	{
		//Rhode Island Z 3 4
		pos1x = 0;
		pos1y = 4;
		pos2x = 0;
		pos2y = 5;
		pos3x = 1;
		pos3y = 3;
		pos4x = 1;
		pos4y = 4;

		bgGrid[pos1x][pos1y] = char(254);
		bgGrid[pos2x][pos2y] = char(254);
		bgGrid[pos3x][pos3y] = char(254);
		bgGrid[pos4x][pos4y] = char(254);
		break;
	}
	case 7:
	{
		//Smashboy 3 4
		pos1x = 0;
		pos1y = 4;
		pos2x = 0;
		pos2y = 5;
		pos3x = 1;
		pos3y = 4;
		pos4x = 1;
		pos4y = 5;

		bgGrid[pos1x][pos1y] = char(254);
		bgGrid[pos2x][pos2y] = char(254);
		bgGrid[pos3x][pos3y] = char(254);
		bgGrid[pos4x][pos4y] = char(254);
		break;
	}
	}

}
int GAMEPLAY() {

	randPiece();

	while (isgaming) {
		piece = true;
		drawScreen();
		cin >> uInput;

		switch (rotation) {
		case 0: { //BASE PIECES
			if (uInput == 'q') {
				switch (randpiece) {
				case 1: //TeeWee
				{
					if (pos2x <= 18 && bgGrid[pos3x + 1][pos3y] == '#') {
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						pos4y--;
						rotation = 1;
					}
					break;
				}
				case 2: //Orange Ricky 
				{
					if (pos2x <= 18 && bgGrid[pos2x - 1][pos2y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos3x - 1][pos3y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y -= 2;
						bgGrid[pos2x][pos2y] = '#';
						pos2x--;
						pos2y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						pos4y--;
						rotation = 1;
					}
					break;
				}
				case 3: //Blue Ricky
				{
					if (pos2x <= 18 && bgGrid[pos3x - 1][pos3y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x - 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						pos4y--;
						rotation = 1;
					}
					break;
				}
				case 4: //Hero
				{
					if (pos2x <= 17 && bgGrid[pos2x - 1][pos2y] == '#' && bgGrid[pos2x + 1][pos2y] == '#' && bgGrid[pos2x - 2][pos2y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x--;
						pos1y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4x += 2;
						pos4y -= 2;
						rotation = 1;
					}
					break;
				}
				case 5: //Cleveland Z
				{
					if (pos3x <= 19 && bgGrid[pos1x - 1][pos1y] == '#') {
						pos1x--;
						pos2y--;
						pos3x--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
						rotation = 1;
					}
					break;
				}
				case 6: //Rhode Island Z
				{
					if (pos3x <= 19 && bgGrid[pos2x - 1][pos2y] == '#') {
						pos1x--;
						pos1y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x--;
						pos3y += 2;
						rotation = 1;
					}
					break;
				}
				case 7: //Smashboy
				{
					break;
				}

				}
			}

			else if (uInput == 'e') {
				switch (randpiece) {
				case 1: //TeeWee
				{
					if (pos2x <= 18 && bgGrid[pos2x + 1][pos2y] == '#') {
						pos1x--;
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						pos3y++;
						pos4x++;
						pos4y--;
						rotation = 3;
					}
					break;
				}
				case 2: //Orange Ricky 
				{
					if (pos2x <= 18 && bgGrid[pos2x - 1][pos2y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos3x - 1][pos3y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y -= 2;
						bgGrid[pos2x][pos2y] = '#';
						pos2x--;
						pos2y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						pos4y--;
						rotation = 3;
					}
					break;
				}
				case 3: //Blue Ricky
				{
					if (pos2x <= 18 && bgGrid[pos3x - 1][pos3y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x - 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y += 2;
						bgGrid[pos2x][pos2y] = '#';
						pos2x--;
						pos2y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						pos4y--;
						rotation = 3;
					}
					break;
				}
				case 4: //Hero
				{
					if (pos2x <= 17 && bgGrid[pos3x - 1][pos3y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos3x - 2][pos3y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x--;
						pos1y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4x += 2;
						pos4y -= 2;
						rotation = 3;
					}
					break;
				}
				case 5: //Cleveland Z
				{
					if (pos3x <= 19 && bgGrid[pos4x - 2][pos4y] == '#' && bgGrid[pos4x - 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x--;
						pos1y += 2;
						pos2x--;
						pos2y++;
						pos3x--;
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
						rotation = 3;
					}
					break;
				}
				case 6: //Rhode Island Z
				{
					if (pos3x <= 19 && bgGrid[pos3x - 2][pos3y] == '#' && bgGrid[pos3x - 1][pos3y] == '#') {
						pos1x--;
						bgGrid[pos2x][pos2y] = '#';
						pos1y -= 2;
						pos2y -= 2;
						bgGrid[pos3x][pos3y] = '#';
						pos3x--;
						pos3y++;
						rotation = 3;
					}
					break;
				}
				case 7: //Smashboy
				{
					break;
				}

				}
			}

			else if (uInput == 's') {
				switch (randpiece) {
				case 1: //TeeWee 2 3 4
				{
					if (bgGrid[pos2x + 1][pos2y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x + 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x++;
						bgGrid[pos2x][pos2y] = '#';
						pos2x++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						break;
					}
					else if (bgGrid[pos2x + 1][pos2y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos3x + 1][pos3y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos4x + 1][pos4y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}

					break;
				}
				case 2: //Orange Ricky 2 3 4
				{
					if (bgGrid[pos2x + 1][pos2y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x + 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x++;
						bgGrid[pos2x][pos2y] = '#';
						pos2x++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						break;
					}
					else if (bgGrid[pos2x + 1][pos2y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos3x + 1][pos3y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos4x + 1][pos4y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}

					break;
				}
				case 3: //Blue Ricky 2 3 4
				{
					if (bgGrid[pos2x + 1][pos2y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x + 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x++;
						bgGrid[pos2x][pos2y] = '#';
						pos2x++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						break;
					}
					else if (bgGrid[pos2x + 1][pos2y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos3x + 1][pos3y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos4x + 1][pos4y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					break;
				}
				case 4: //Hero 1 2 3 4
				{
					if (bgGrid[pos1x + 1][pos1y] == '#' && bgGrid[pos2x + 1][pos2y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x + 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x++;
						bgGrid[pos2x][pos2y] = '#';
						pos2x++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						break;
					}
					else if (bgGrid[pos1x + 1][pos1y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos2x + 1][pos2y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos3x + 1][pos3y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos4x + 1][pos4y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					break;
				}
				case 5: //Cleveland Z 3 4
				{
					if (bgGrid[pos1x + 1][pos1y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x + 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x++;
						bgGrid[pos2x][pos2y] = '#';
						pos2x++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						break;
					}
					else if (bgGrid[pos1x + 1][pos1y] == char(254)) {
						clearlines();
						randPiece();
					}
					else if (bgGrid[pos3x + 1][pos3y] == char(254)) {
						clearlines();
						randPiece();
					}
					else if (bgGrid[pos4x + 1][pos4y] == char(254)) {
						clearlines();
						randPiece();
					}

					break;
				}
				case 6: //Rhode Island Z 3 4
				{
					if (bgGrid[pos2x + 1][pos2y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x + 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x++;
						bgGrid[pos2x][pos2y] = '#';
						pos2x++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						break;
					}
					else if (bgGrid[pos2x + 1][pos2y] == char(254)) {
						clearlines();
						randPiece();
					}
					else if (bgGrid[pos3x + 1][pos3y] == char(254)) {
						clearlines();
						randPiece();
					}
					else if (bgGrid[pos4x + 1][pos4y] == char(254)) {
						clearlines();
						randPiece();
					}
					break;
				}
				case 7: //Smashboy 3 4
				{
					if (bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x + 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x++;
						bgGrid[pos2x][pos2y] = '#';
						pos2x++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						break;
					}
					else if (bgGrid[pos3x + 1][pos3y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos4x + 1][pos4y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					break;
				}
				}

			}

			else if (uInput == 'a') {

				switch (randpiece) {
				case 1: //TeeWee 1 2
				{
					if (bgGrid[pos1x][pos1y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos2x][pos2y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y - 1] == '#' && bgGrid[pos2x][pos2y - 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y--;
						bgGrid[pos2x][pos2y] = '#';
						pos2y--;
						bgGrid[pos3x][pos3y] = '#';
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
					}
					break;
				}
				case 2: //Orange Ricky 1 2
				{
					if (bgGrid[pos1x][pos1y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos2x][pos2y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y - 1] == '#' && bgGrid[pos2x][pos2y - 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y--;
						bgGrid[pos2x][pos2y] = '#';
						pos2y--;
						bgGrid[pos3x][pos3y] = '#';
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
					}
					break;
				}
				case 3: //Blue Ricky 1 2
				{
					if (bgGrid[pos1x][pos1y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos2x][pos2y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y - 1] == '#' && bgGrid[pos2x][pos2y - 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y--;
						bgGrid[pos2x][pos2y] = '#';
						pos2y--;
						bgGrid[pos3x][pos3y] = '#';
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
					}
					break;
				}
				case 4: //Hero 1
				{
					if (bgGrid[pos1x][pos1y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y - 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y--;
						bgGrid[pos2x][pos2y] = '#';
						pos2y--;
						bgGrid[pos3x][pos3y] = '#';
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
					}
					break;
				}
				case 5: //Cleveland Z 1 3
				{
					if (bgGrid[pos1x][pos1y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos3x][pos3y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y - 1] == '#' && bgGrid[pos3x][pos3y - 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y--;
						bgGrid[pos2x][pos2y] = '#';
						pos2y--;
						bgGrid[pos3x][pos3y] = '#';
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
					}
					break;
				}
				case 6: //Rhode Island Z 1 3
				{
					if (bgGrid[pos1x][pos1y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos3x][pos3y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y - 1] == '#' && bgGrid[pos3x][pos3y - 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y--;
						bgGrid[pos2x][pos2y] = '#';
						pos2y--;
						bgGrid[pos3x][pos3y] = '#';
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
					}
					break;
				}
				case 7: //Smashboy 1 3
				{
					if (bgGrid[pos1x][pos1y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos3x][pos3y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y - 1] == '#' && bgGrid[pos3x][pos3y - 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y--;
						bgGrid[pos2x][pos2y] = '#';
						pos2y--;
						bgGrid[pos3x][pos3y] = '#';
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
					}
					break;
				}
				}
			}

			else if (uInput == 'd')
			{
				switch (randpiece) {
				case 1: //TeeWee 1 4
				{
					if (bgGrid[pos1x][pos1y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos4x][pos4y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y + 1] == '#' && bgGrid[pos4x][pos4y + 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y++;
					}
					break;
				}
				case 2: //Orange Ricky 1 4
				{
					if (bgGrid[pos1x][pos1y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos4x][pos4y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y + 1] == '#' && bgGrid[pos4x][pos4y + 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y++;
					}
					break;
				}
				case 3: //Blue Ricky 1 4
				{
					if (bgGrid[pos1x][pos1y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos4x][pos4y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y + 1] == '#' && bgGrid[pos4x][pos4y + 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y++;
					}
					break;
				}
				case 4: //Hero 4
				{
					if (bgGrid[pos4x][pos4y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos4x][pos4y + 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y++;
					}
					break;
				}
				case 5: //Cleveland Z 2 4
				{
					if (bgGrid[pos2x][pos2y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos4x][pos4y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos2x][pos2y + 1] == '#' && bgGrid[pos4x][pos4y + 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y++;
					}
					break;
				}
				case 6: //Rhode Island Z 2 4
				{
					if (bgGrid[pos2x][pos2y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos4x][pos4y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos2x][pos2y + 1] == '#' && bgGrid[pos4x][pos4y + 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y++;
					}
					break;
				}
				case 7: //Smashboy 2 4
				{
					if (bgGrid[pos2x][pos2y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos4x][pos4y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos2x][pos2y + 1] == '#' && bgGrid[pos4x][pos4y + 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y++;
					}
					break;
				}
				}
			}

			else if (uInput == 'p')
			{
				isgaming = false;
			}
			break;
		}
		case 1: //BASE PIECES ROTATED LEFT
		{
			if (uInput == 'q') {
				switch (randpiece) {
				case 1: //TeeWee
				{
					if (pos2x <= 18 && bgGrid[pos2x + 1][pos2y] == '#') {
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						pos4y--;
						rotation = 2;
					}
					break;
				}
				case 2: //Orange Ricky 
				{
					if (pos2x <= 18 && bgGrid[pos2x - 1][pos2y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos3x - 1][pos3y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y -= 2;
						bgGrid[pos2x][pos2y] = '#';
						pos2x--;
						pos2y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						pos4y--;
						rotation = 2;
					}
					break;
				}
				case 3: //Blue Ricky
				{
					if (pos2x <= 18 && bgGrid[pos3x - 1][pos3y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x - 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						pos4y--;
						rotation = 2;
					}
					break;
				}
				case 4: //Hero
				{
					if (pos2x <= 17 && bgGrid[pos2x - 1][pos2y] == '#' && bgGrid[pos2x + 1][pos2y] == '#' && bgGrid[pos2x - 2][pos2y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x--;
						pos1y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4x += 2;
						pos4y -= 2;
						rotation = 2;
					}
					break;
				}
				case 5: //Cleveland Z
				{
					if (pos3x <= 19 && bgGrid[pos1x - 1][pos1y] == '#') {
						pos1x--;
						pos2y--;
						pos3x--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
						rotation = 2;
					}
					break;
				}
				case 6: //Rhode Island Z
				{
					if (pos3x <= 19 && bgGrid[pos2x - 1][pos2y] == '#') {
						pos1x--;
						pos1y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x--;
						pos3y += 2;
						rotation = 2;
					}
					break;
				}
				case 7: //Smashboy
				{
					break;
				}

				}
			}

			else if (uInput == 's') {
				switch (randpiece) {
				case 1: //TeeWee 2 3 4
				{
					if (bgGrid[pos2x + 1][pos2y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x + 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x++;
						bgGrid[pos2x][pos2y] = '#';
						pos2x++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						break;
					}
					else if (bgGrid[pos2x + 1][pos2y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos3x + 1][pos3y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos4x + 1][pos4y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}

					break;
				}
				case 2: //Orange Ricky 2 3 4
				{
					if (bgGrid[pos2x + 1][pos2y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x + 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x++;
						bgGrid[pos2x][pos2y] = '#';
						pos2x++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						break;
					}
					else if (bgGrid[pos2x + 1][pos2y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos3x + 1][pos3y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos4x + 1][pos4y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}

					break;
				}
				case 3: //Blue Ricky 2 3 4
				{
					if (bgGrid[pos2x + 1][pos2y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x + 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x++;
						bgGrid[pos2x][pos2y] = '#';
						pos2x++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						break;
					}
					else if (bgGrid[pos2x + 1][pos2y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos3x + 1][pos3y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos4x + 1][pos4y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					break;
				}
				case 4: //Hero 1 2 3 4
				{
					if (bgGrid[pos4x + 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x++;
						bgGrid[pos2x][pos2y] = '#';
						pos2x++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						break;
					}
					else if (bgGrid[pos4x + 1][pos4y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					break;
				}
				case 5: //Cleveland Z 3 4
				{
					if (bgGrid[pos1x + 1][pos1y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x + 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x++;
						bgGrid[pos2x][pos2y] = '#';
						pos2x++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						break;
					}
					else if (bgGrid[pos1x + 1][pos1y] == char(254)) {
						clearlines();
						randPiece();
					}
					else if (bgGrid[pos3x + 1][pos3y] == char(254)) {
						clearlines();
						randPiece();
					}
					else if (bgGrid[pos4x + 1][pos4y] == char(254)) {
						clearlines();
						randPiece();
					}

					break;
				}
				case 6: //Rhode Island Z 3 4
				{
					if (bgGrid[pos2x + 1][pos2y] == '#' && bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x + 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x++;
						bgGrid[pos2x][pos2y] = '#';
						pos2x++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						break;
					}
					else if (bgGrid[pos2x + 1][pos2y] == char(254)) {
						clearlines();
						randPiece();
					}
					else if (bgGrid[pos3x + 1][pos3y] == char(254)) {
						clearlines();
						randPiece();
					}
					else if (bgGrid[pos4x + 1][pos4y] == char(254)) {
						clearlines();
						randPiece();
					}
					break;
				}
				case 7: //Smashboy 3 4
				{
					if (bgGrid[pos3x + 1][pos3y] == '#' && bgGrid[pos4x + 1][pos4y] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1x++;
						bgGrid[pos2x][pos2y] = '#';
						pos2x++;
						bgGrid[pos3x][pos3y] = '#';
						pos3x++;
						bgGrid[pos4x][pos4y] = '#';
						pos4x++;
						break;
					}
					else if (bgGrid[pos3x + 1][pos3y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					else if (bgGrid[pos4x + 1][pos4y] == char(254)) {
						clearlines();
						randPiece();
						break;
					}
					break;
				}
				}

			}

			else if (uInput == 'a') {

				switch (randpiece) {
				case 1: //TeeWee 1 2
				{
					if (bgGrid[pos1x][pos1y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos2x][pos2y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y - 1] == '#' && bgGrid[pos2x][pos2y - 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y--;
						bgGrid[pos2x][pos2y] = '#';
						pos2y--;
						bgGrid[pos3x][pos3y] = '#';
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
					}
					break;
				}
				case 2: //Orange Ricky 1 2
				{
					if (bgGrid[pos1x][pos1y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos2x][pos2y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y - 1] == '#' && bgGrid[pos2x][pos2y - 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y--;
						bgGrid[pos2x][pos2y] = '#';
						pos2y--;
						bgGrid[pos3x][pos3y] = '#';
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
					}
					break;
				}
				case 3: //Blue Ricky 1 2
				{
					if (bgGrid[pos1x][pos1y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos2x][pos2y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y - 1] == '#' && bgGrid[pos2x][pos2y - 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y--;
						bgGrid[pos2x][pos2y] = '#';
						pos2y--;
						bgGrid[pos3x][pos3y] = '#';
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
					}
					break;
				}
				case 4: //Hero 1
				{
					if (bgGrid[pos1x][pos1y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y - 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y--;
						bgGrid[pos2x][pos2y] = '#';
						pos2y--;
						bgGrid[pos3x][pos3y] = '#';
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
					}
					break;
				}
				case 5: //Cleveland Z 1 3
				{
					if (bgGrid[pos1x][pos1y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos3x][pos3y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y - 1] == '#' && bgGrid[pos3x][pos3y - 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y--;
						bgGrid[pos2x][pos2y] = '#';
						pos2y--;
						bgGrid[pos3x][pos3y] = '#';
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
					}
					break;
				}
				case 6: //Rhode Island Z 1 3
				{
					if (bgGrid[pos1x][pos1y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos3x][pos3y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y - 1] == '#' && bgGrid[pos3x][pos3y - 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y--;
						bgGrid[pos2x][pos2y] = '#';
						pos2y--;
						bgGrid[pos3x][pos3y] = '#';
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
					}
					break;
				}
				case 7: //Smashboy 1 3
				{
					if (bgGrid[pos1x][pos1y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos3x][pos3y - 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y - 1] == '#' && bgGrid[pos3x][pos3y - 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y--;
						bgGrid[pos2x][pos2y] = '#';
						pos2y--;
						bgGrid[pos3x][pos3y] = '#';
						pos3y--;
						bgGrid[pos4x][pos4y] = '#';
						pos4y--;
					}
					break;
				}
				}
			}

			else if (uInput == 'd')
			{
				switch (randpiece) {
				case 1: //TeeWee 1 4
				{
					if (bgGrid[pos1x][pos1y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos4x][pos4y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y + 1] == '#' && bgGrid[pos4x][pos4y + 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y++;
					}
					break;
				}
				case 2: //Orange Ricky 1 4
				{
					if (bgGrid[pos1x][pos1y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos4x][pos4y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y + 1] == '#' && bgGrid[pos4x][pos4y + 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y++;
					}
					break;
				}
				case 3: //Blue Ricky 1 4
				{
					if (bgGrid[pos1x][pos1y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos4x][pos4y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos1x][pos1y + 1] == '#' && bgGrid[pos4x][pos4y + 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y++;
					}
					break;
				}
				case 4: //Hero 4
				{
					if (bgGrid[pos4x][pos4y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos4x][pos4y + 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y++;
					}
					break;
				}
				case 5: //Cleveland Z 2 4
				{
					if (bgGrid[pos2x][pos2y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos4x][pos4y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos2x][pos2y + 1] == '#' && bgGrid[pos4x][pos4y + 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y++;
					}
					break;
				}
				case 6: //Rhode Island Z 2 4
				{
					if (bgGrid[pos2x][pos2y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos4x][pos4y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos2x][pos2y + 1] == '#' && bgGrid[pos4x][pos4y + 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y++;
					}
					break;
				}
				case 7: //Smashboy 2 4
				{
					if (bgGrid[pos2x][pos2y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos4x][pos4y + 1] == char(254)) {
						break;
					}
					else if (bgGrid[pos2x][pos2y + 1] == '#' && bgGrid[pos4x][pos4y + 1] == '#') {
						bgGrid[pos1x][pos1y] = '#';
						pos1y++;
						bgGrid[pos2x][pos2y] = '#';
						pos2y++;
						bgGrid[pos3x][pos3y] = '#';
						pos3y++;
						bgGrid[pos4x][pos4y] = '#';
						pos4y++;
					}
					break;
				}
				}
			}

			else if (uInput == 'p')
			{
				isgaming = false;
			}

		}



		}

	}
	return score;
}

int main() {

	srand(time(NULL));

	cout << "\n Welcome to Tetris knockoff in consolas\n\n 1.] Let's a go\n 2.] Quit\n 3.] Testing\n\n ";
	cin >> uInput;
	if (uInput == '1') {
		//drawScreen();
		cout << "Your high score is: " << GAMEPLAY() << "\n";
	}
	else if (uInput == '3')
	{
		randPiece();
		drawScreen();
	}

	//char(254);
	system("pause");
	return -0;
}
