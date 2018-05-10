#ifndef _MOVE_H_
#define _MOVE_H_
#include "Field.h"
#include "Handler.h"
#include <iostream>

using namespace std;

class Move:public Handler
{
	int pageNumber;
	Field* field;

public:
	virtual void operator () ();
};

#endif
