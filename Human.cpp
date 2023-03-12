
#include"Human.h"



Human::Human(string name):m_name(name){
}
Move* Human::makeMove() {
	Move* move = new Move();

	return move;
}
string Human::getName() {
	return m_name;
}