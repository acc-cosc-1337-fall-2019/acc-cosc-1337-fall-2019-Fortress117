#include "tic_tac_toe_manager.h"

//cpp

ostream & operator<<(ostream & out, const TicTacToeManager & m)
{
	for (auto game : m.games)
	{
		out << game << "\n"; 

	}

	out << " X wins: " << m.x_wins << "\n";
	out << " O wins: " << m.o_wins << "\n";
	out << " CAT: " << m.ties << "\n";

	return out;
}

void TicTacToeManager::save_game(TicTacToe game)
{
	update_winner_count(game.get_winner());
	games.push_back(game);

}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X")
	{
		x_wins ++;
	}
	else if (winner == "O")
	{
		o_wins ++;
	}
	else
	{
		ties ++;
	}
}
