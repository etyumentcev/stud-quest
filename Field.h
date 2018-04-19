#ifndef _FIELD_H_
#define _FIELD_H_
#include "BasisDraw.h"
#include "Background.h"
#include "PageBegin.h"

class Field : public BasisDraw
{

	BasisDraw* background;

	vector<BasisDraw*>pages;

	int current;
	
	

public:

	Field(BasisDraw* background,vector<BasisDraw*> pages);

	virtual void Draw();
	
};



#endif
