#include "Field.h"
#include <stdio.h>
#include <iostream>



void main()
{
	setlocale(LC_ALL, "ru");
	Field f = new (Background);
	f.Draw();
	system("pause");
}