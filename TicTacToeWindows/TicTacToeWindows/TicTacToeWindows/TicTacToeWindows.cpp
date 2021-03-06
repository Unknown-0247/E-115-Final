#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class ticTacToeScoreboard {
public:
	string topTen[10];

	ticTacToeScoreboard() {
		topTen[10] =
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins";
	}

	void printScoreboard() {

	}
};

class hangmanScoreboard {
public:
	string topTen[10];

	hangmanScoreboard() {
		topTen[10] =
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins",
			"000 ... 0 wins";
	}

};

int main() {

	char row;

	int column;

	string play1 = "  X  ";

	string play2 = "  O  ";

	string A[3] = { " A1 "," A2 "," A3 " };

	string B[3] = { " B1 "," B2 "," B3 " };

	string C[3] = { " C1 "," C2 "," C3 " };

	while (true) {//At the start of each session, the board will reprint and be cleared

		//clear the board

		srand(time(0));//THE INTERNET TOLD ME TO DO IT but like it works so thank you internet

		//Alternatively set rand() to int then at do you want to play again set int to int+1%2 so it starts random but is always switching or when one player wins, the other starts

		A[0] = "     ";

		A[1] = "     ";

		A[2] = "     ";

		B[0] = "     ";

		B[1] = "     ";

		B[2] = "     ";

		C[0] = "     ";

		C[1] = "     ";

		C[2] = "     ";

		//print the board with cell designations for user friendliness :)

		cout << "    1     2      3  \n";

		cout << "A  A1  |  A2  |  A3  " << endl;

		cout << "---------------------\n";

		cout << "B  B1  |  B2  |  B3  " << endl;

		cout << "---------------------\n";

		cout << "C  C1  |  C2  |  C3  " << endl;

		if (rand() % 2 + 1 == 1) {

			while (true) {//game

				cout << "Player X, input the cell designation \n";

				while (true) {//This will let the player continue to put in values until it is valid in which case, their turn ends(TURN)

					cin >> row;

					cin >> column;

					if ((row == 'A' || row == 'a') && (column <= 3 && column >= 1)) {

						if (A[column - 1] == "     ") {

							A[column - 1] = play1;

							break;

						}
						else {

							cout << "Already taken, try again\n";

						}

					}
					else if ((row == 'B' || row == 'b') && (column <= 3 && column >= 1)) {

						if (B[column - 1] == "     ") {

							B[column - 1] = play1;

							break;

						}
						else {

							cout << "Already taken, try again\n";

						}

					}
					else if ((row == 'C' || row == 'c') && (column <= 3 && column >= 1)) {

						if (C[column - 1] == "     ") {

							C[column - 1] = play1;

							break;

						}
						else {

							cout << "Already taken, try again\n";

						}

					}
					else {

						cout << "Not valid, Try again\n";

					}//end Cell Designation Choice for Player 1 (X)

				}//end turn

				//This will print out the new board with the new values for the cells

				cout << A[0] << "|" << A[1] << "|" << A[2] << endl;

				cout << "------------------\n";

				cout << B[0] << "|" << B[1] << "|" << B[2] << endl;

				cout << "------------------\n";

				cout << C[0] << "|" << C[1] << "|" << C[2] << endl;

				/**Here are the possibilities on how to win**/

				if ((A[0] == A[1] && A[1] == A[2] && A[1] != "     ") || (B[0] == B[1] && B[1] == B[2] && B[1] != "     ") || (C[0] == C[1] && C[1] == C[2] && C[1] != "     ")) {//if there are three in a row horizontally

					cout << "Congratulations Player X, you won!!\n";

					break;

				}

				if ((A[0] == B[0] && B[0] == C[0] && A[0] != "     ") || (A[1] == B[1] && B[1] == C[1] && B[1] != "     ") || (A[2] == B[2] && B[2] == C[2] && C[2] != "     ")) {//if there are three in a row vertically

					cout << "Congratulations Player X, you won!!\n";

					break;

				}

				if ((A[0] == B[1] && B[1] == C[2] && A[0] != "     ") || (A[2] == B[1] && B[1] == C[0] && B[1] != "     ")) {//if there are three in a row diagonally

					cout << "Congratulations Player X, you won!!\n";

					break;

				}

				//But like sometimes its a tie so this happens

				if (A[0] != "     "&&A[1] != "     "&&A[2] != "     "&&B[0] != "     "&&B[1] != "     "&&B[2] != "     "&&C[0] != "     "&&C[1] != "     "&&C[2] != "     ") {

					cout << "It's a Tie!!\n";

					break;

				}

				while (true) {//This will let the player continue to put in values until it is valid in which case, their turn ends(TURN)

					cout << "Player O, input the cell designation \n";

					cin >> row;

					if ((row == 'A' || row == 'a') && (column <= 3 && column >= 1)) {

						cin >> column;

						if (A[column - 1] == "     ") {

							A[column - 1] = play2;

							break;

						}
						else {

							cout << "Already taken, try again\n";

						}

					}
					else if ((row == 'B' || row == 'b') && (column <= 3 && column >= 1)) {

						cin >> column;

						if (B[column - 1] == "     ") {

							B[column - 1] = play2;

							break;

						}
						else {

							cout << "Already taken, try again\n";

						}

					}
					else if ((row == 'C' || row == 'c') && (column <= 3 && column >= 1)) {

						cin >> column;

						if (C[column - 1] == "     ") {

							C[column - 1] = play2;

							break;

						}
						else {

							cout << "Already taken, try again\n";

						}

					}
					else {

						cout << "Not valid, Try again\n";

					}//end Cell Designation Choice for Player 2 (O)

				}//end turn

				//This will print out the new board with the new values for the cells

				cout << A[0] << "|" << A[1] << "|" << A[2] << endl;

				cout << "------------------\n";

				cout << B[0] << "|" << B[1] << "|" << B[2] << endl;

				cout << "------------------\n";

				cout << C[0] << "|" << C[1] << "|" << C[2] << endl;

				/**Here are the possibilities on how to win**/

				if ((A[0] == A[1] && A[1] == A[2] && A[1] != "     ") || (B[0] == B[1] && B[1] == B[2] && B[1] != "     ") || (C[0] == C[1] && C[1] == C[2] && C[1] != "     ")) {//if there are three in a row horizontally

					cout << "Congratulations Player O, you won!!\n";

					break;

				}//end horizontal win if

				if ((A[0] == B[0] && B[0] == C[0] && A[0] != "     ") || (A[1] == B[1] && B[1] == C[1] && B[1] != "     ") || (A[2] == B[2] && B[2] == C[2] && C[2] != "     ")) {//if there are three in a row vertically

					cout << "Congratulations Player O, you won!!\n";

					break;

				}//end vertical win if

				if ((A[0] == B[1] && B[1] == C[2] && A[0] != "     ") || (A[2] == B[1] && B[1] == C[0] && B[1] != "     ")) {//if there are three in a diagonal

					cout << "Congratulations Player O, you won!!\n";

					break;

				}//end diagonal win if

				//But like sometimes its a tie so this happens

				if (A[0] != "     "&&A[1] != "     "&&A[2] != "     "&&B[0] != "     "&&B[1] != "     "&&B[2] != "     "&&C[0] != "     "&&C[1] != "     "&&C[2] != "     ") {

					cout << "It's a Tie!!\n";

					break;

				}//end tie if

			}//end game

		}//end randomizer

		else {

			///////************************VERSION 2************************************//



			while (true) {//game Version 2 where Player O starts

				while (true) {//This will let the player continue to put in values until it is valid in which case, their turn ends(TURN)

					cout << "Player O, input the cell designation \n";

					cin >> row;

					cin >> column;

					if ((row == 'A' || row == 'a') && (column <= 3 && column >= 1)) {

						if (A[column - 1] == "     ") {

							A[column - 1] = play2;

							break;

						}
						else {

							cout << "Already taken, try again\n";

						}

					}
					else if ((row == 'B' || row == 'b') && (column <= 3 && column >= 1)) {

						if (B[column - 1] == "     ") {

							B[column - 1] = play2;

							break;

						}
						else {

							cout << "Already taken, try again\n";

						}

					}
					else if ((row == 'C' || row == 'c') && (column <= 3 && column >= 1)) {

						if (C[column - 1] == "     ") {

							C[column - 1] = play2;

							break;

						}
						else {

							cout << "Already taken, try again\n";

						}

					}
					else {

						cout << "Not valid, Try again\n";

					}//end Cell Designation Choice for Player 2 (O)

				}//end turn

				//This will print out the new board with the new values for the cells

				cout << A[0] << "|" << A[1] << "|" << A[2] << endl;

				cout << "------------------\n";

				cout << B[0] << "|" << B[1] << "|" << B[2] << endl;

				cout << "------------------\n";

				cout << C[0] << "|" << C[1] << "|" << C[2] << endl;

				/**Here are the possibilities on how to win**/

				if ((A[0] == A[1] && A[1] == A[2] && A[1] != "     ") || (B[0] == B[1] && B[1] == B[2] && B[1] != "     ") || (C[0] == C[1] && C[1] == C[2] && C[1] != "     ")) {//if there are three in a row horizontally

					cout << "Congratulations Player O, you won!!\n";

					break;

				}//end horizontal win if

				if ((A[0] == B[0] && B[0] == C[0] && A[0] != "     ") || (A[1] == B[1] && B[1] == C[1] && B[1] != "     ") || (A[2] == B[2] && B[2] == C[2] && C[2] != "     ")) {//if there are three in a row vertically

					cout << "Congratulations Player O, you won!!\n";

					break;

				}//end vertical win if

				if ((A[0] == B[1] && B[1] == C[2] && A[0] != "     ") || (A[2] == B[1] && B[1] == C[0] && B[1] != "     ")) {//if there are three in a diagonal

					cout << "Congratulations Player O, you won!!\n";

					break;

				}//end diagonal win if

				//But like sometimes its a tie so this happens

				if (A[0] != "     "&&A[1] != "     "&&A[2] != "     "&&B[0] != "     "&&B[1] != "     "&&B[2] != "     "&&C[0] != "     "&&C[1] != "     "&&C[2] != "     ") {

					cout << "It's a Tie!!\n";

					break;

				}//end tie if

				while (true) {//This will let the player continue to put in values until it is valid in which case, their turn ends(TURN)

					cout << "Player X, input the cell designation \n";

					cin >> row;

					cin >> column;

					if ((row == 'A' || row == 'a') && (column <= 3 && column >= 1)) {

						if (A[column - 1] == "     ") {

							A[column - 1] = play1;

							break;

						}
						else {

							cout << "Already taken, try again\n";

						}

					}
					else if ((row == 'B' || row == 'b') && (column <= 3 && column >= 1)) {

						if (B[column - 1] == "     ") {

							B[column - 1] = play1;

							break;

						}
						else {

							cout << "Already taken, try again\n";

						}

					}
					else if ((row == 'C' || row == 'c') && (column <= 3 && column >= 1)) {

						if (C[column - 1] == "     ") {

							C[column - 1] = play1;

							break;

						}
						else {

							cout << "Already taken, try again\n";

						}

					}
					else {

						cout << "Not valid, Try again\n";

					}//end Cell Designation Choice for Player 1 (X)

				}//end turn

				//This will print out the new board with the new values for the cells

				cout << A[0] << "|" << A[1] << "|" << A[2] << endl;

				cout << "------------------\n";

				cout << B[0] << "|" << B[1] << "|" << B[2] << endl;

				cout << "------------------\n";

				cout << C[0] << "|" << C[1] << "|" << C[2] << endl;

				/**Here are the possibilities on how to win**/

				if ((A[0] == A[1] && A[1] == A[2] && A[1] != "     ") || (B[0] == B[1] && B[1] == B[2] && B[1] != "     ") || (C[0] == C[1] && C[1] == C[2] && C[1] != "     ")) {//if there are three in a row horizontally

					cout << "Congratulations Player X, you won!!\n";

					break;

				}//end horizontal win

				if ((A[0] == B[0] && B[0] == C[0] && A[0] != "     ") || (A[1] == B[1] && B[1] == C[1] && B[1] != "     ") || (A[2] == B[2] && B[2] == C[2] && C[2] != "     ")) {//if there are three in a row vertically

					cout << "Congratulations Player X, you won!!\n";

					break;

				}//end vertical win

				if ((A[0] == B[1] && B[1] == C[2] && A[0] != "     ") || (A[2] == B[1] && B[1] == C[0] && B[1] != "     ")) {//if there are three in a row diagonally

					cout << "Congratulations Player X, you won!!\n";

					break;

				}//end diagonal win

				//But like sometimes its a tie so this happens

				if (A[0] != "     "&&A[1] != "     "&&A[2] != "     "&&B[0] != "     "&&B[1] != "     "&&B[2] != "     "&&C[0] != "     "&&C[1] != "     "&&C[2] != "     ") {

					cout << "It's a Tie!!\n";

					break;

				}//end tie if

			}//end game

		}//end random choice

		//---OK SO BOTH GAMES CODE IS OVER AND DONE WITH NOW IM JUST ASKING IF YOU WOULD LIKE TO CONTINUE---------------------//

		cout << "Would you like to play again? [y/n]\n";

		cin >> row;

		if (row != 'y') {

			cout << "Have a Good Day!!\n";

			break;

		}

	}//end session

	return 0;

}//end main

//So I kinda wanna make an AI who like will play against the user or another game cause this is pretty short for the requirements

//or like a way to save the game

//or like different games you can play

//I AM BECOME BRAINBASHER

/**Sudoku

 _________

 1. Requires a set solutions

 2. Requires known starting numbers

 Conclusion: Program runs off user input and is more suited for games that are based on user input

 */

 //CONNECT FOUR WOULD BE V YAY and like it doesnt require too much set code since its mostly user input BUT CHECKING FOR WINS COULD BE DIFFICULT

 //ALSO ROCK PAPER SCISSOR

 //Hangman

 //Battleship

