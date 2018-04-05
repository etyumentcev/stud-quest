#ifndef _FIELD_H_
#define _FIELD_H_
#include "BasisDraw.h"
#include "Background.h"
#include "PageBegin.h"

class Field : public BasisDraw
{

	BasisDraw* background;

	//vector<BasisDraw*>pages;
	
	

public:

	Field(BasisDraw* background/*,vector<BasisDraw*>const& pages*/);

	virtual void Draw();
	
};



#endif