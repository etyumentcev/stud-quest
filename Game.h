#ifndef _GAME_H_
#define _GAME_H_
#include "Field.h"
#include "Handler.h"
#include <map>
#include <iostream>
#include "Event.h"

using namespace std;

class Game
{
	Field* field;
	map<int, map <Event, Handler*>* > actions;				
	int choose;
public:
	Game(Field* field, map<int, map <Event, Handler*>* > actions);
	void Play();
	Event Select();
	void action(Event a);
};

#endif
