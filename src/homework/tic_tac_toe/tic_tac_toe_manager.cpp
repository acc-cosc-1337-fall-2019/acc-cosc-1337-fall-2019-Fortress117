#include "tic_tac_toe_manager.h"

//cpp

ostream & operator<<(ostream & out, const TicTacToeManager & m)
{
	for (auto& game : m.games)
	{
		out << game << "\n"; 

	}

	out << " X wins: " << m.x_wins << "\n";
	out << " O wins: " << m.o_wins << "\n";
	out << " CAT: " << m.ties << "\n";

	return out;
}

void TicTacToeManager::save_game(unique_ptr < TicTacToe>& game)
{
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));

}

void TicTacToeManager::get_winner_totals(int & x, int & o, int & c)
{
	x = x_wins;
	o = o_wins;
	c = ties;
}

std::unique_ptr<TicTacToe> TicTacToeManager::get_game(int game_type)
{
	if (game_type == 3)
	{
		return std::make_unique<TicTacToe3>();
	}
	else
	{
		return std::make_unique<TicTacToe4>();
	}
	
}

const std::vector<std::unique_ptr<TicTacToe>>& TicTacToeManager::get_games()
{
	return games;
	// TODO: insert return statement here
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
