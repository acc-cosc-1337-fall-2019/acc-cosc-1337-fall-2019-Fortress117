//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
	if (check_column_win() == true || check_row_win() == true ||
		check_diagonal_win() == true || check_board_full() == true)
	{
		return true;
	}
	return false;
}

void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();
}

string TicTacToe::get_player() const
{
	return next_player;
}

void TicTacToe::display_board() const
{
	cout << pegs[0] << " | " << pegs[1] << " | " << pegs[2] << " \n"
		<<  pegs[3] << " | " << pegs[4] << " | " << pegs[5] << " \n"
		<<  pegs[6] << " | " << pegs[7] << " | " << pegs[8];

}

void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "0";

	}
	else
	{
		next_player = "X";
	}
}

bool TicTacToe::check_column_win()
{
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6]
			&& pegs[i + 6] != " ")
		{
			return true;
		}
	}
	return false;
}

bool TicTacToe::check_row_win()
{
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i + 2] != " ")
		{
			return true;
		}
	}
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	for (std::size_t i = 0; i < 2; i++)
	{
		if (pegs[i] == pegs[i + 4] && pegs[i + 4] == pegs[i + 8] && pegs[i + 8] != " " ||
			pegs[i] == pegs[i + 2] && pegs[i + 4] == pegs[i + 6] && pegs[i + 6] != " ")
		{
			return true;
		}
	}
	return false;
}

void TicTacToe::clear_board()
{
	for (std::size_t i = 0; i < 9; i++)
	{
		pegs[i] = " ";
	}
}

bool TicTacToe::check_board_full()
{
	int size = 9;
	for (std::size_t i = 0; size; i++)
	{ 
		if (pegs[i] == " ")
		{
			int size = 0;
			return false;
		}

	}
	return true;
}
