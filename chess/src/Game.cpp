/*
 * Game.cpp
 *
 *  Created on: Jul 29, 2014
 *      Author: nikolay
 */

#include "Game.h"

Game::Game(){

	//black pieces
	board[0][0]=new Rook(0,0,0); board[0][7]=new Rook(0,7,0);
	board[0][1]=new Knight(0,1,0); board[0][6]= new Knight(0,6,0);
	board[0][2]=new Bishop(0,2,0); board[0][5]= new Bishop(0,5,0);
	board[0][3]=new Queen(0,3,0); board[0][4]= new King(0,4,0);
	for(int i=0;i<8;i++)
		board[1][i]=new Pawn(1,i,0);

	//white pieces
	board[7][0]=new Rook(7,0,1); board[7][7]=new Rook(7,7,1);
	board[7][1]=new Knight(7,1,1); board[7][6]= new Knight(7,6,1);
	board[7][2]=new Bishop(7,2,1); board[7][5]= new Bishop(7,5,1);
	board[7][3]=new Queen(7,3,1); board[7][4]= new King(7,4,1);
	for(int i=0;i<8;i++)
		board[6][i]=new Pawn(6,i,0);

	//free squares
	for(int i=2;i<6;i++){
		for(int j=0;j<8;j++)
			board[i][j]=NULL;
	}

}

Game::~Game(){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(board[i][j]!=NULL)
				delete board[i][j];
		}
	}
}
