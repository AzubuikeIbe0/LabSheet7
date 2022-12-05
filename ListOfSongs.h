#pragma once
#include <iostream>
#include "NodeOfSongs.h"
using namespace std;

class ListOfSongs
{
	friend class NodeOfSongs;

private:
	string songTitle;
	int songDuration;

public:
	ListOfSongs();
	void setTitle();
	string getTitle();
	void setDuration();
	int getDuration();
	~ListOfSongs();
};

