/*
 * Pieces.cpp
 *
 *  Created on: Jul 30, 2014
 *      Author: nikolay
 */

#include "Pieces.h"

list<Pos> Pawn::availablePositions(){
	//todo
	list<Pos> positions;
	if(white){
		if(pos.first==1)
			positions.push_back(make_pair(pos.first+2,pos.second));
		if(pos.first!=7)
			positions.push_back(make_pair(pos.first+1,pos.second));
	} else {
		if(pos.first==6)
			positions.push_back(make_pair(pos.first-2,pos.second));
		if(pos.first!=0)
			positions.push_back(make_pair(pos.first-1,pos.second));

	}
	return positions;
}


list<Pos> Rook::availablePositions(){
	list<Pos> positions;
	for(int i=0;i<8;i++){
		if(i!= pos.first)
			positions.push_back(make_pair(i,pos.second));
		if(i!=pos.second)
			positions.push_back(make_pair(pos.first,i));
	}
	return positions;
}

list<Pos> Bishop::availablePositions(){
	list<Pos> positions;
	//get positions on main diagonal
	int sum = pos.first+pos.second;
	for(int i=0;i<8;i++){
		if(i!=pos.first && sum-i>=0)
			positions.push_back(make_pair(i,sum-i));
	}

	//get positions on secondary diagonal
	int f=pos.first-1, s=pos.second-1;
	while(f>=0 && s>=0)
		positions.push_back(make_pair(f--,s--));
	f=pos.first+1, s=pos.second+1;
	while(f<=7 && s<=7)
		positions.push_back(make_pair(f++,s++));

	return positions;
}


list<Pos> Queen::availablePositions(){
	//todo
	list<Pos> positions;
	//find Rook positions
	for(int i=0;i<8;i++){
		if(i!= pos.first)
			positions.push_back(make_pair(i,pos.second));
		if(i!=pos.second)
			positions.push_back(make_pair(pos.first,i));
	}

	//find Bishop positions

	//get positions on main diagonal
	int sum = pos.first+pos.second;
	for(int i=0;i<8;i++){
		if(i!=pos.first && sum-i>=0)
			positions.push_back(make_pair(i,sum-i));
	}

	//get positions on secondary diagonal
	int f=pos.first-1, s=pos.second-1;
	while(f>=0 && s>=0)
		positions.push_back(make_pair(f--,s--));
	f=pos.first+1, s=pos.second+1;
	while(f<=7 && s<=7)
		positions.push_back(make_pair(f++,s++));

	return positions;


}

list<Pos> King::availablePositions(){
	list<Pos> positions;
	int f=pos.first, s=pos.second;
	for(int i=f-1;i<=f+1;i++){
		for(int j=s-1;j<=s+1;j++)
			if((i!= pos.first || j!=pos.second) && i>=0 && j>=0 && i<=7 && j<=7)
				positions.push_back(make_pair(i,j));
	}
	return positions;
}

list<Pos> Knight::availablePositions(){

}
