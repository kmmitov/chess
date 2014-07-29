/*
 * Pawn.h
 *
 *  Created on: Jul 29, 2014
 *      Author: nikolay
 */

#ifndef PAWN_H_
#define PAWN_H_

#include "Piece.h"

class Pawn: Piece {
	Pos pos;
	bool white;
public:
	Pawn(int x, int y, bool w):
		white(w) {
		pos=make_pair(x,y);
	}
	~Pawn();
};
class Knight: Piece {
	Pos pos;
	bool white;
public:
	Knight(int x, int y, bool w):
		white(w) {
		pos=make_pair(x,y);
	}
	~Knight();
};

class Bishop: Piece {
	Pos pos;
	bool white;
public:
	Bishop(int x, int y, bool w):
		white(w) {
		pos=make_pair(x,y);
	}
	~Bishop();
};

class Rook: Piece {
	Pos pos;
	bool white;
public:
	Rook(int x, int y, bool w):
		white(w) {
		pos=make_pair(x,y);
	}
	~Rook();
};

class Queen: Piece {
	Pos pos;
	bool white;
public:
	Queen(int x, int y, bool w):
		white(w) {
		pos=make_pair(x,y);
	}
	~Queen();
};

class King: Piece {
	Pos pos;
	bool white;
public:
	King(int x, int y, bool w):
		white(w) {
		pos=make_pair(x,y);
	}
	~King();
};
#endif /* PAWN_H_ */
