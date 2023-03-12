#include"Move.h"

Move::Move() {
	string A[] = { "Zombie","Monkey","Ninjia","Pirate","Robot","Paper","Rock","Scissors" };
	string m_move;

	while (1) {
		cout << "Enter a Move:";
		cin >> m_move;

		bool isIn = false;

		for (int i = 0; i < (sizeof(A) / sizeof(A[0])); i++) {
			if (m_move == A[i]) {
				isIn = true;
			}
		}

		if (isIn) {
			moveName = m_move;
			break;
		}

		else {
			cout << "Please enter the correct move" << endl;
		}
	}

}

string Move::getName() {
	return moveName;
}