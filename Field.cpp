//#include "BasisDraw.h"
#include "Field.h"


Field::Field(BasisDraw* back)
{

	back = new Background;
	background = back;
	
}

void Field :: Draw()
{
	background->Draw();
}