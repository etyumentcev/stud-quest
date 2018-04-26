#include "BasisDraw.h"
#include "Field.h"


Field::Field(BasisDraw* _background, vector<BasisDraw*> _pages):background(_background), pages(_pages)
{
	current = 0;

	
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
		
		pages[current]->Draw();
		current = choose;
	//}
	
}
