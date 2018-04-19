#include "BasisDraw.h"
#include "Field.h"


Field::Field(BasisDraw* _background, vector<BasisDraw*> _pages):background(_background), pages(_pages)
{
	current = 0;
	
	
}

void Field :: Draw()
{
	//background->Draw();
	//for(int i =)
	pages[current]->Draw();	
}
