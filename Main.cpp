#include "Field.h"
#include <stdio.h>
#include <iostream>



void main()
{
	setlocale(LC_ALL, "ru");

	vector <BasisDraw*> pages;
	pages.push_back(new PageBegin);
	//Field f = new (Background,pages);
	Field f(new Background, pages);
	
	f.Draw();
	system("pause");
}
