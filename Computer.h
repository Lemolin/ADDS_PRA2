#ifndef COMPUTER_H
#define COMPUTER_H

#include"Player.h"
using namespace std;

class Computer :public Player {
public:

	virtual Move* makeMove();
	virtual string getName();
};


#endif
