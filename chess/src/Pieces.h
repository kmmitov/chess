/*
 * Pawn.h
 *
 *  Created on: Jul 29, 2014
 *      Author: nikolay
 */

#ifndef PAWN_H_
#define PAWN_H_

#include "Piece.h"

class Pawn: public Piece {
public:
	Pawn(int x, int y, bool w){
		create(x,y,w);
	}
	list<Pos> availablePositions();
	//~Pawn();
};
class Knight: public Piece {
public:
	Knight(int x, int y, bool w){
		create(x,y,w);
	}
	list<Pos> availablePositions();
	//~Knight();
};

class Bishop: public Piece {
public:
	Bishop(int x, int y, bool w){
		create(x,y,w);
	}
	list<Pos> availablePositions();
	//~Bishop();
};

class Rook: public Piece {
public:
	Rook(int x, int y, bool w){
		create(x,y,w);
	}
	list<Pos> availablePositions();
	//~Rook();
};

class Queen: public Piece {
public:
	Queen(int x, int y, bool w){
		create(x,y,w);
	}
	list<Pos> availablePositions();
	//~Queen();
};

class King: public Piece {
	//bool moved;
public:
	King(int x, int y, bool w){
		create(x,y,w);
	}
	list<Pos> availablePositions();
	//~King();
};
#endif /* PAWN_H_ */
