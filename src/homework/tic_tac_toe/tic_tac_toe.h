#include<string>
#include<iostream>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H


using std::cout;
using std::cin;
using std::string;  
using std::vector;
using std::ostream;


//h

class TicTacToe
{
public:
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner() const;

	friend std::ostream& operator << (std::ostream& out,const TicTacToe& A);
	friend std::istream& operator >> (std::istream& in, TicTacToe& B);

private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	vector<string> pegs{9, " "}; // 
	string next_player;
	void set_winner();
	string winner;
};

#endif // !TIC_TAC_TOE_H