/*
 * Piece.h
 *
 *  Created on: Jul 29, 2014
 *      Author: nikolay
 */

#ifndef PIECE_H_
#define PIECE_H_

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define Pos pair<int,int>

class IObserver {

};

class Piece{
	Pos pos;
	bool white;
public:
	void create(int x, int y, bool w){
		pos=make_pair(x,y);
		white=w;
	}
	virtual ~Piece(){};

};

#endif /* PIECE_H_ */
