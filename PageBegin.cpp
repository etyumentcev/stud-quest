#include "PageBegin.h"
#include <windows.h>


PageBegin::PageBegin():choose()
{

}

void PageBegin::Draw()
{
	

	/*COORD coord;
	coord.X = 1;
	coord.Y = 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);*/

	cout << "���� ���?" << endl;
	cin >> Name;
	cout << "���������� �������� �� ������ ����."<<endl<<"��������� ����������� ������, ��� �� �������."<< endl ;
	cout << "� ������ ��, "<< Name<<", ��������� � ������ ������ � ���������� ������������"<<endl<< "� ���� ����� � ������ ����������.";
	
	cout <<endl<<"1)������� ���� ������."<<endl<<"2)���������� �������."<<endl;
	cin >> choose;
	



	
	
	
	
	//current = gr[current][action];
}
