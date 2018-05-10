#ifndef _GAME_H_
#define _GAME_H_
#include "Field.h"
#include "Handler.h"
#include <map>
#include <iostream>

using namespace std;

class Game
{
	Field* field;
	map<int, map <Event, Handler*>* > actions;				

public:
	Game(Field* fieldd, map<int, map <Event, Handler*>* > act);
	void Play();
	int Select();
	void action(Event a);
};

#endif
