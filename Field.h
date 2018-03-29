#ifndef _FIELD_H_
#define _FIELD_H_
#include "BasisDraw.h"
#include "Background.h"

class Field : public BasisDraw
{

	BasisDraw* background;
	

public:

	Field(BasisDraw* background);

	virtual void Draw();
	
};



#endif