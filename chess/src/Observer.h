#pragma once
#include <vector>
#include "src\Piece.h"

class IObserver
{
	std::vector<IObservable*> observed;
public:
	IObserver() {}
	virtual ~IObserver() {}
};

