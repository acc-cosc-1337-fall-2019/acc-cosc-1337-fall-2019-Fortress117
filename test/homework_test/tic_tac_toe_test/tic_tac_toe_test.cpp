#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over")
{
	TicTacToe3 board;
	REQUIRE(board.game_over() == false);
}
TEST_CASE("set first player to X")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
}
TEST_CASE("set first player to O")
{
	TicTacToe3 board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
}

TEST_CASE("Test win by first column", "[X wins first column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second column", "[X wins second column]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by third column", "[X wins third column]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by first row", "[X wins first row]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by second row", "[X wins second row]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by third row", "[X wins third row]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by first angle", "[X wins first angle]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   */
	TicTacToe3 board;
	board.start_game("O");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//o         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//x          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//o          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//x         
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//o 
	//O wins 
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "O");
}
TEST_CASE("Test win by second angle", "[X wins second angle]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");
}


TEST_CASE("Test No win")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//0         
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//0          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X          
	// board full
	REQUIRE(board.game_over() == true);
	
	REQUIRE(board.get_winner() == "C");
}







TEST_CASE("Test win by first column 4", "[X wins first column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//O   
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second column 4 ", "[X wins second column]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//O   
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by third column4 ", "[X wins third column]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X 
	//X wins 
	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win by fourth column4 ", "[X wins third column]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by first row4 ", "[X wins first row]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by second row 4", "[X wins second row]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by third row 4", "[X wins third row]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by fouth row 4", "[X wins third row]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by first angle 4", "[X wins first angle]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   */
	TicTacToe4 board;
	board.start_game("O");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//o         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//x          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//o          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//x         
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//o 
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//o 
	//O wins 
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "O");
}
TEST_CASE("Test win by second angle 4", "[X wins second angle]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O  
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X 
	//X wins 
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");
}


TEST_CASE("Test No win    4")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//0         
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//0          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//0 
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//0 
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//0
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//0
	// board full
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "C");
}