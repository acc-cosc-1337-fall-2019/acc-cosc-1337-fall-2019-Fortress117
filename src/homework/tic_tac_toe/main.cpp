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
			cout << "Player 1 please enter either '0' or 'X' : ";
			cin >> player;
			A.start_game(player);
			bool gaming = false;
			while (gaming == false)
			{
				int move;
				cout << " Player 1 Please chose a position 1-9 : ";
				cin >> move;
				A.mark_board(move);
				A.display_board();
				cout << "\n";
				cout << "player 2 Please chose a position 1-9 : ";
				cin >> move;
				A.mark_board(move);
				A.display_board();
				cout << "\n";
				bool over = A.game_over();
				if (over == true)
				{
					cout << "Winner" << "\n" << " " ;
					gaming = true;
				}
			}







			cout << "Do you want to play again? press 'y' to repeat";
			cin >> menu_choice;
		}
	

	return 0;
}