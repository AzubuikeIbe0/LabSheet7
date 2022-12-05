#include "ListOfSongs.h"
#include "NodeOfSongs.h"

ListOfSongs::ListOfSongs()
{
	NodeOfSongs* head = nullptr;
}

void ListOfSongs::setTitle()
{
	songTitle = "New Dawn";
}

string ListOfSongs::getTitle()
{
	return songTitle;
}

void ListOfSongs::setDuration()
{
	songDuration = 25;
}

int ListOfSongs::getDuration()
{
	return songDuration;
}

ListOfSongs::~ListOfSongs()
{

}