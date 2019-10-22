//h
#ifndef TIC_TAC_MANAGER_H
#define TIC_TAC_MANAGER_H

#include <vector>
#include "tic_tac_toe.h"


using std::vector;

class TicTacToeManager
{
public:
	void save_game(const TicTacToe game);
	friend ostream& operator<< (ostream& out, const TicTacToeManager& m);


private:
	vector<TicTacToe>games;
	int x_wins{ 0 };
	int o_wins{ 0 };
	int ties{ 0 };
	void update_winner_count(string winner);

};





#endif // !TIC_TAC_MANAGER_H
