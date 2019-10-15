#include "tic_tac_toe.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::ostream;

int main() 
{
	TicTacToe A;
	
		string menu_choice = "y";
	
		
		while (menu_choice == "y" || menu_choice == "Y")
		{
			string player = " ";
			cout << "Welcome to tic tac toe! \n";
			cout << " 1 | 2 | 3 " << "\n" << " 4 | 5 | 6 " << "\n" << " 7 | 8 | 9 ";
			cout << "\n";
			cout << "Player 1 please enter capital 'X' or 'O' : ";
			cin >> player;
			A.start_game(player);
			bool gaming = false;
			while (gaming == false)
			{
				
				string player1 = " ";
				if (player == "X" || player == "x")
				{
					player1 = "0";
				}
				else
					player1 = "X";
					

				
				bool finished = A.game_over();
				
				
				bool over = A.game_over();
				if (over == true)
				int winner = 0; 
				
				if (winner != 1)
				{
					cout << "Winner" << "\n" << " ";
					winner = 1;
				}
				gaming = true;
				
			}







			cout << "Do you want to play again? press 'y' to repeat";
			cin >> menu_choice;
		}
	

	return 0;
}