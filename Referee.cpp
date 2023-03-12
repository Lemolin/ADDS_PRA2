#include"Referee.h"
#include"Player.h"
#include"Computer.h"
#include"Human.h"


Referee::Referee() {

}
Player* Referee::refGame(Player* p1, Player* p2) {
	string move1 = p1->makeMove()->getName();
	string move2 = p2->makeMove()->getName();

	if (move1 == move2) {

		return nullptr;
	}

	else if ((move1 == "Rock" || move1 == "Scissors" || move1 == "Paper") &&
		(move2 == "Rock" || move2 == "Scissors" || move2 == "Paper")) {

		if ((move1 == "Rock" && move2 == "Scissors") || (move1 == "Scissors" && move2 == "Paper") ||
			(move1 == "Paper" && move2 == "Rock")) {
			return p1;
		}
		else {
			return p2;
		}

	}


	else if ((move1 == "Zombie" || move1 == "Monkey" || move1 == "Ninjia"
		|| move1 == "Pirate" || move1 == "Robot") &&
		(move2 == "Zombie" || move2 == "Monkey" || move2 == "Ninjia"
			|| move2 == "Pirate" || move2 == "Robot")) {

		if ((move1 == "Zombie" && move2 == "Monkey") || (move1 == "Zombie" && move2 == "Pirate") ||
			(move1 == "Monkey" && move2 == "Ninjia") || (move1 == "Monkey" && move2 == "Robot") ||
			(move1 == "Ninjia" && move2 == "Pirate") || (move1 == "Ninjia" && move2 == "Zombie") ||
			(move1 == "Pirate" && move2 == "Monkey") || (move1 == "Pirate" && move2 == "Robot") ||
			(move1 == "Robot" && move2 == "Zombie") || (move1 == "Robot" && move2 == "Ninjia"))
		{

			return p1;


		}

		else {
			return p2;
		}



	}


}