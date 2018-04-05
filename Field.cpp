#include "BasisDraw.h"
#include "Field.h"


Field::Field(BasisDraw* back/*, vector<BasisDraw*>const& pages*/):background(back)
{

	
	
}

void Field :: Draw()
{
	background->Draw();
	//pages[current]->Draw();	
}