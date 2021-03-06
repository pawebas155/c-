#pragma once
#include <iostream>
#include <fstream>
#include "myUsefulStruct.h"

using namespace std;

class Moves
{
private:
	MoveElement *head;

public:
	Moves();

	void AddToList(const MyPoint & tempPointFrom, const MyPoint & tempPointTo, const int & tempColor, int tempPositionDestroyedPawn);

	//konstruktor kopiujący
	Moves (const Moves & right);

	//konstruktor przenoszący
	Moves (Moves && right);

	//operator kopiujący
	Moves & operator=(const Moves &right);

	//operator przenoszący
	Moves & operator=(Moves &&right);

	void showAllMoves();

	void saveMovesToFile();

	LastMove showLastMove();

	LastMove showLastButNotLeastMove();

	bool doResearchForCastling(MyPoint positionToSearch, int color);

	void deleteFirstPossibleMove();

	void RemoveAllList();

	~Moves();
};