#include "PageBegin.h"
#include <windows.h>



void PageBegin::Draw()
{
	string Name;
	int choose;

	/*COORD coord;
	coord.X = 1;
	coord.Y = 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);*/

	cout << "Ваше имя?" << endl;
	cin >> Name;
	cout << "Состоялось слушанье по вашему делу. Присяжные единогласно решили, что вы виновны."<< endl ;
	cout << "И теперь вы, "<< Name<<", прибывете в тюрьму вместе с остальными заключенными и ваши будни в неволе начинаются.";
	
	cout <<"1)Принять свою участь."<<endl<<"2)Попытаться сбежать."<<endl;
	cin >> choose;
	



	
	
	
	
	//current = gr[current][action];
}
