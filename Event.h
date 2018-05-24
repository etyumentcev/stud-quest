#ifndef _EVENT_H_
#define _EVENT_H_

class Event
{
	
public:
	Event(int a);
	int Select;
	
};

bool operator <(Event const & e1, Event const & e2);
//bool operator ==(Event const & e1, Event const & e2);//определить

#endif
