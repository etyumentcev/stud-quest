#include "Field.h"
#include "Game.h"
#include "Move.h"
#include <stdio.h>
#include <iostream>
#include <map>

void main()
{
	setlocale(LC_ALL, "ru");

	vector <BasisDraw*> pages;
	pages.push_back(new PageBegin);
	pages.push_back(new PageGameOver);
	pages.push_back(new Page1);

	//Field f(new Background, pages);
	Field*  fp = new Field(new Background, pages);

	map <Event, Handler*> handlers;
		handlers[Event(1)]=new Move(1,fp);
		handlers[Event(2)] = new Move(2, fp);

		map <Event, Handler*>* p = &handlers;

		map < int, map <Event, Handler*>*>actions;
		actions[0] = p;
		





		Game* g = new Game( fp,  actions);
		g->Play();

	
	system("pause");
}