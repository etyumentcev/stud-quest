#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>


using namespace std;

class BasisDraw
{
public:
	virtual void Draw() = 0;
};

class Field : public BasisDraw
{
	BasisDraw* background;
public:
	Field()
	{
		Draw();
	}

	virtual void Draw()
	{

		char arr[200][150];
		int x = 200, y = 150;

		for (int i = 0; i <= x - 1; i = i++)
		{
			for (int j = 0; j <= y - 1; j++)
			{
				arr[i][j] = ' ';

			}
		}
		for (int i = 0; i <= x - 1; i = i + x - 1) {
			for (int j = 0; j <= y - 1; j++) {
				arr[i][j] = '*';
			}
		}
		for (int i = 0; i <= y - 1; i = i + y - 1) {
			for (int j = 0; j <= x - 1; j++) {
				arr[j][i] = '*';
			}
		}
		for (int i = 0; i <= x - 1; i = i++) {
			for (int j = 0; j <= y - 1; j++) {
				cout << arr[i][j] << " ";

			}
			cout << endl;
		}
	}
};




class Character
{

	int health;
	int damage;

public:
	Character()
	{
		health = 1000;
		damage = 100;
	}

};

class Monster :public Character
{
public:
	Monster() :Character() {}
};


class Hero :public Character
{
	vector<int> scores;
public:
	Hero() :Character() {}
};

class GameOver
{

public:

};

class GoodGame :public GameOver
{

public:

};

class  BadGame :public GameOver
{

public:

};


int main()
{

	system("pause");
	return 0;

}

