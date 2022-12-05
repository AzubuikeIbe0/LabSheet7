#pragma once
#include <iostream>
#include "ListOfSongs.h"
using namespace std;

class NodeOfSongs
{
	friend class ListOfSongs;
private:
	NodeOfSongs* head;
	ListOfSongs Songs;
public:
	NodeOfSongs();
};
