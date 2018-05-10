#include "Game.h"
#include "Event.h"

Game::Game(Field* fieldd, map<int, map <Event, Handler*>* > act) :field(fieldd), actions(act)
{

}

Event Game::Select()
{
	return Event (0);
}

void Game::action(Event a)
{
	int currentPageId = field->Current();
	map<Event, Handler*> *eventHandlers = actions[currentPageId];
	Handler* handler = (*eventHandlers)[a];
	(*handler)();
}

void Game::Play()
{
	while (true)
	{
		field->Draw();
		Event Step = Select();//для обработки
		action(Step);//сам переход
	}
}