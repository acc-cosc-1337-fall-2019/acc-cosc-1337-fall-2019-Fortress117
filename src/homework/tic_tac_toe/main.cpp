#include "tic_tac_toe.h"
#include <iostream>
#include <string>
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::ostream;

int main() 
{
	TicTacToeManager manager;
	int game_type;
	
		string menu_choice = "y";
	
		
		while (menu_choice == "y" || menu_choice == "Y")
		{
			cout << "Welcome to tic tac toe! \n";
			cout << " Play win by 3 or 4?: ";
			cin >> game_type;
			
			TicTacToe* game;

			if (game_type == 3)
			{
				game = new TicTacToe3;
			}
			else
			{
				game = new TicTacToe4;
			}
			

			cout << "\n";
			string player;
			cout << "Player 1 please enter capital 'X' or 'O' : ";
			cin >> player;

			game ->start_game(player);
			while (game->game_over() == false)
			{
				cin >> *game;
				cout << *game;
			}

			cout << "Winner: ";
			cout << game->get_winner()<<"\n";

			manager.save_game(*game);

			cout << "Do you want to play again? press 'y' to repeat";
			cin >> menu_choice;
		}
	
		cout << "History: \n";
		cout << manager;

	return 0;
}