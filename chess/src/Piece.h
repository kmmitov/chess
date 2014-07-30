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
#include <list>

using namespace std;

typedef pair<int,int> Pos;

class IObserver;

class IObservable {
protected:
	IObserver* observer;
public:
	IObservable(IObserver* _observer = NULL)
		: observer(_observer)
	{
	}
};

class Piece : IObservable {
protected:
	Pos pos;
	bool white;

	void create(int x, int y, bool w, IObserver* obs = NULL){
		observer = obs;
		pos=make_pair(x,y);
		white=w;
	}
public:
	virtual ~Piece(){};
	virtual list<Pos> availablePositions()=0;
	void print(){
		cout<<pos.first<<' '<<pos.second<<' '<<white<<' ';
	}
};

#endif /* PIECE_H_ */
