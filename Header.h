#ifndef _CHARACTER_H_
#define _CHARACTER_H_
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;


class Character
{

	int health;
	int damage;

public:
	Character()
	{
		health=1000;
		damage=100;
	}

};


class Monster :public Character
{

public:
	Monster():Character() {}
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
	virtual void End(){}
};

class GoodGame :public GameOver
{

public:
	
};

class  BadGame:public GameOver
{

public:

};



#endif