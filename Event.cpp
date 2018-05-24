#include "Event.h"

//Event& Event::operator = ()

Event::Event(int a) :Select(a)
{};

bool operator <(Event const & e1, Event const & e2)
{
	if (e1.Select < e2.Select)
	{
		return true;
	}
	else
	{
		return false;
	}
}

