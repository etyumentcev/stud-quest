#include "BasisDraw.h"
#include "Field.h"


Field::Field(BasisDraw* _background, vector<BasisDraw*> _pages):background(_background), pages(_pages)
{
	pageID = 0;

	
}

void Field :: Draw()
{
	//background->Draw();

	//for (current; current < pages.size; ++current)
	//{
	//	pages[current]->Draw();
	//}

	//for (vector<BasisDraw*>::iterator it=pages.begin(); it != pages.end(); ++it)
	//{
		
		pages[pageID]->Draw();
		
	//}
	
}

void Field::Current(int pageNumber)
{
	pageID = pageNumber;
}

int Field::Current() const
{
	return pageID;
}