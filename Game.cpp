#include "Game.h"
#include "Event.h"

Game::Game(Field* fieldd, map <Event, Handler*> act):field(fieldd),actions(act)
{

}

void Game::Play()
{
	while (true)
	{
		field->Draw();
		Event step = select();
		action(step);
	}
}