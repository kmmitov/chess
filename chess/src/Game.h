/*
 * Game.h
 *
 *  Created on: Jul 29, 2014
 *      Author: nikolay
 */

#ifndef GAME_H_
#define GAME_H_
#include "Piece.h"
#include "Pieces.h"

class Game {
private:
	Piece* board[8][8];

public:
	Game();
	~Game();


};
#endif /* GAME_H_ */
