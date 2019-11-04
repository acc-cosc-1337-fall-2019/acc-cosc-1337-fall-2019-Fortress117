//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
	if (check_column_win() == true || check_row_win() == true ||
		check_diagonal_win() == true)
	{
		set_winner();
		return true;
	}
	else if (check_board_full() == true)
	{
		winner = "C";
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

string TicTacToe::get_winner() const
{
	return winner;
	
}


void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";

	}
	else
	{
		next_player = "X";
	}
}

bool TicTacToe::check_column_win()
{
	
	return false;
}

bool TicTacToe::check_row_win()
{
	
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	
	return false;
}

void TicTacToe::clear_board()
{
	for (std::size_t i = 0; i < pegs.size()-1; i++)
	{
		pegs[i] = " ";
	}
}

bool TicTacToe::check_board_full()
{
	
	for (std::size_t i = 0; i < pegs.size()-1; i++)
	{ 
		if (pegs[i] == " ")
		{
			
			return false;
			break;
		}

	}
	return true;
}



std::ostream& operator<<(std::ostream& out, const TicTacToe& A)
{
	if (A.pegs.size() == 9)
	{
		out << A.pegs[0] << " | " << A.pegs[1] << " | " << A.pegs[2] << " \n"
			<< A.pegs[3] << " | " << A.pegs[4] << " | " << A.pegs[5] << " \n"
			<< A.pegs[6] << " | " << A.pegs[7] << " | " << A.pegs[8];
	}
	else if (A.pegs.size() == 16) 
	{
		out << A.pegs[0] << " | " << A.pegs[1] << " | " << A.pegs[2] << A.pegs[3] <<" \n"
			<< A.pegs[4] << " | " << A.pegs[5] << " | " << A.pegs[6] << A.pegs[7] << " \n"
			<< A.pegs[8] << " | " << A.pegs[9] << " | " << A.pegs[10]<< A.pegs[11] <<"\n"
			<< A.pegs[12] << " | " << A.pegs[13] << " | " << A.pegs[14] << A.pegs[15] << "\n";
	}



	return out;
}


std::istream& operator >> (std::istream & in, TicTacToe & B)
{
	int move;
	cout << "Player please choose a position : ";
	in >> move;
	B.mark_board(move);
	
	
	
	return in;
}

void TicTacToe::set_winner()
{
	
	if (next_player == "X")
	{
		winner = "O";
	}
	else
	{
		winner = "X";
	}
	
}