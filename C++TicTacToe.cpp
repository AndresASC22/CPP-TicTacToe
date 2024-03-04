#include<iostream>
#include<string>
using namespace std;

int main() {
	char TicTacToe[3][3];
	int UserInputs, i;
	bool winCondition = false;
	for (int i = 0; i < 3; i++) //Giving each array element a value of 0
	{
		for (int j = 0; j < 3; j++)
		{
			TicTacToe[i][j] = 0;
			if(i == 0)
				cout << "| " << j + i + 1;
			else if(i == 1)
				cout << "| " << j + i + 3;
			else
				cout << "| " << j + i + 5;
		}
		cout << "|" << endl;
	}

	cout << "Enter an X and O to play Tic Tac Toe. X moves first, first to have three of their letters in a row wins" << endl;

	for (i = 0; i < 9; i++) //The max amount of moves in tic tac toe is 
	{
		for(int j = 0; j < 1; j++) //This loop ensures that if invalid number is input, we can ask the user to reput the number
		{ //NOTE: If you enter something besides a number, the programs gets fucked up, I have yet to find out why. I think it may be the fact the Array is a char and not an integer
			if (i % 2 == 0)
			{
				cout << "\nX enters a move. This is move " << i + 1 << ": ";
				cin >> UserInputs;
				if (UserInputs == 1 && TicTacToe[0][0] == 0) {
					TicTacToe[0][0] = 88;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << " |" << endl;
					}
				}

				else if (UserInputs == 2 && TicTacToe[0][1] == 0) {
					TicTacToe[0][1] = 88;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 3 && TicTacToe[0][2] == 0) {
					TicTacToe[0][2] = 88;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 4 && TicTacToe[1][0] == 0) {
					TicTacToe[1][0] = 88;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 5 && TicTacToe[1][1] == 0) {
					TicTacToe[1][1] = 88;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 6 && TicTacToe[1][2] == 0) {
					TicTacToe[1][2] = 88;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 7 && TicTacToe[2][0] == 0) {
					TicTacToe[2][0] = 88;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 8 && TicTacToe[2][1] == 0) {
					TicTacToe[2][1] = 88;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 9 && TicTacToe[2][2] == 0) {
					TicTacToe[2][2] = 88;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if(UserInputs)
				{
					cout << "Invalid Input, try again";
					j--;
				}

				// Now we will check for whether x won

				if (TicTacToe[0][0] == 88 && TicTacToe[0][1] == 88 && TicTacToe[0][2] == 88) //Win Condition 1
				{
					cout << "X wins!";
					i = 9;
					bool winCondition = true;
				}
	
				if (TicTacToe[1][0] == 88 && TicTacToe[1][1] == 88 && TicTacToe[1][2] == 88) //Win Condition 2
				{
					cout << "X wins!";
					i = 9;
					bool winCondition = true;
				}

				if (TicTacToe[2][0] == 88 && TicTacToe[2][1] == 88 && TicTacToe[2][2] == 88) //Win Condition 3
				{
					cout << "X wins!";
					i = 9;
					bool winCondition = true;
				}

				if (TicTacToe[0][0] == 88 && TicTacToe[1][1] == 88 && TicTacToe[2][2] == 88) //Win Condition 4
				{
					cout << "X wins!";
					i = 9;
					bool winCondition = true;
				}

				if (TicTacToe[0][2] == 88 && TicTacToe[1][1] == 88 && TicTacToe[2][0] == 88) //Win Condition 5
				{
					cout << "X wins!";
					i = 9;
					bool winCondition = true;
				}

				if (TicTacToe[0][0] == 88 && TicTacToe[1][0] == 88 && TicTacToe[2][0] == 88) //Win condition 6
				{
					cout << "X wins!";
					i = 9;
					bool winCondition = true;
				}

				if (TicTacToe[0][1] == 88 && TicTacToe[1][1] == 88 && TicTacToe[2][1] == 88) // Win condition 7
				{
					cout << "X wins!";
					i = 9;
					bool winCondition = true;
				}

				if (TicTacToe[0][2] == 88 && TicTacToe[1][2] == 88 && TicTacToe[2][2] == 88) // Win condition 8 (the final one)
				{
					cout << "X wins!";
					i = 9;
					bool winCondition = true;
				}
				

			} // END OF X FOR LOOP

			else//Start of checking the move of the O in tic tac toe
			{
				cout << "\nO enters a move. This is move " << i + 1 << ": ";
				cin >> UserInputs;
				if (UserInputs == 1 && TicTacToe[0][0] == 0) {
					TicTacToe[0][0] = 79;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 2 && TicTacToe[0][1] == 0) {
					TicTacToe[0][1] = 79;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 3 && TicTacToe[0][2] == 0) {
					TicTacToe[0][2] = 79;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 4 && TicTacToe[1][0] == 0) {
					TicTacToe[1][0] = 79;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 5 && TicTacToe[1][1] == 0) {
					TicTacToe[1][1] = 79;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 6 && TicTacToe[1][2] == 0) {
					TicTacToe[1][2] = 79;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 7 && TicTacToe[2][0] == 0) {
					TicTacToe[2][0] = 79;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 8 && TicTacToe[2][1] == 0) {
					TicTacToe[2][1] = 79;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else if (UserInputs == 9 && TicTacToe[2][2] == 0) {
					TicTacToe[2][2] = 79;
					for (int k = 0; k < 3; k++)
					{
						for (int n = 0; n < 3; n++) {
							cout << "| " << TicTacToe[k][n];
						}
						cout << "|" << endl;
					}
				}

				else
				{
					cout << "Invalid Input, try again";
					j--;
				}

				//O is 79
				//Checking if O won

				if (TicTacToe[0][0] == 79 && TicTacToe[0][1] == 79 && TicTacToe[0][2] == 79) //Win Condition 1
				{
					cout << "O wins!";
					i = 9;
					bool winCondition = true;
				}
				
				if (TicTacToe[1][0] == 79 && TicTacToe[1][1] == 79 && TicTacToe[1][2] == 79) //Win Condition 2
				{
					cout << "O wins!";
					i = 9;
					bool winCondition = true;
				}

				if (TicTacToe[2][0] == 79 && TicTacToe[2][1] == 79 && TicTacToe[2][2] == 79) //Win Condition 3
				{
					cout << "O wins!";
					i = 9;
					bool winCondition = true;
				}

				if (TicTacToe[0][0] == 79 && TicTacToe[1][1] == 79 && TicTacToe[2][2] == 79) //Win Condition 4
				{
					cout << "O wins!";
					i = 9;
					bool winCondition = true;
				}

				if (TicTacToe[0][2] == 79 && TicTacToe[1][1] == 79 && TicTacToe[2][0] == 79) //Win Condition 5
				{
					cout << "O wins!";
					i = 9;
					bool winCondition = true;
				}

				if (TicTacToe[0][0] == 79 && TicTacToe[1][0] == 79 && TicTacToe[2][0] == 79) //Win condition 6
				{
					cout << "O wins!";
					i = 9;
					bool winCondition = true;
				}

				if (TicTacToe[0][1] == 79 && TicTacToe[1][1] == 79 && TicTacToe[2][1] == 79) // Win condition 7
				{
					cout << "O wins!";
					i = 9;
					bool winCondition = true;
				}

				if (TicTacToe[0][2] == 79 && TicTacToe[1][2] == 79 && TicTacToe[2][2] == 79) // Win condition 8 (the final one)
				{
					cout << "O wins!";
					i = 9;
					bool winCondition = true;
				}


			} // END OF O LOOP!



		}

	}
				if (i == 9 && winCondition == false)
				{
					cout << "Damn you both suck";
				}
}
