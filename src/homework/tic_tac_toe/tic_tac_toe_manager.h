//h
#ifndef TIC_TAC_MANAGER_H
#define TIC_TAC_MANAGER_H
#include <memory>
#include <vector>
#include "tic_tac_toe.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_3.h"


using std::vector;
using std::unique_ptr;
class TicTacToeManager
{
public:
	void save_game(unique_ptr<TicTacToe>& game);
	friend ostream& operator<< (ostream& out, const TicTacToeManager& m);
	void get_winner_totals(int& x, int& o, int& c);
	std::unique_ptr<TicTacToe> get_game(int game_type);
	const std::vector<std::unique_ptr<TicTacToe>>& get_games();

private:
	vector<unique_ptr<TicTacToe>>games;
	int x_wins{ 0 };
	int o_wins{ 0 };
	int ties{ 0 };
	void update_winner_count(string winner);

};





#endif // !TIC_TAC_MANAGER_H
