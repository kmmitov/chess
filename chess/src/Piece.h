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

typedef pair<int,int> Pos;

class IObserver {

};

class Piece{
	Pos pos;
	bool white;
protected:
	void create(int x, int y, bool w){
		pos=make_pair(x,y);
		white=w;
	}
public:
	virtual ~Piece(){};

};

#endif /* PIECE_H_ */
