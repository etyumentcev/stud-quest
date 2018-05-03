#ifndef _FIELD_H_
#define _FIELD_H_
#include "BasisDraw.h"
#include "Background.h"
#include "PageBegin.h"
#include "PageGameOver.h"
#include "Page1.h"
class Field : public BasisDraw
{

	BasisDraw* background;

	vector<BasisDraw*>pages;

	int pageID;
	string Name;
	int choose;
	
	

public:

	Field(BasisDraw* background,vector<BasisDraw*> pages);

	virtual void Draw();
	void Current(int pnumb);
	
};



#endif