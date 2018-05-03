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
	map <Event, Handler*> actions;				

public:
	Game(Field* field,map <Event, Handler*> actions);
	void Play();
};

#endif
