/*
 * Piece.h
 *
 *  Created on: Jul 29, 2014
 *      Author: nikolay
 */

#ifndef PIECE_H_
#define PIECE_H_

#include <vector>
#include <algorithm>

using namespace std;

#define Pos pair<int,int>

class IObserver {

};

class Piece{
public:
	virtual ~Piece(){};

};

#endif /* PIECE_H_ */
