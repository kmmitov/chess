//============================================================================
// Name        : chess.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iterator>
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
	list<Pos> intList= Pawn(6,2,1).availablePositions();

	std::list<Pos>::const_iterator iterator;
	for (iterator = intList.begin(); iterator != intList.end(); ++iterator) {
	    std::cout << iterator->first<<' '<<iterator->second<<endl;
	}
	//cout<<"alive";

	return 0;
}
