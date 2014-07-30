//============================================================================
// Name        : main.cpp
// Author      : Nikolay Georgiev
// Version     : 0.1
// Description : the game of chess
//============================================================================

#include <iostream>
#include <iterator>
#include <typeinfo>
using namespace std;

#include "Game.h"

int main() {
	Game game;
	/*
	std::list<int> intList;
	for (int i = 0; i < 10; ++i) {
	    intList.push_back( 1 << i );
	}
	*/
	Piece* rook=new  Rook(3,3,1);
	cout<<(typeid(*rook)==typeid(Rook))<<endl;
	list<Pos> intList= Pawn(6,2,1).availablePositions();

	std::list<Pos>::const_iterator iterator;
	for (iterator = intList.begin(); iterator != intList.end(); ++iterator) {
	    //std::cout << iterator->first<<' '<<iterator->second<<endl;
	}
	cout<<"alive";

	return 0;
}
