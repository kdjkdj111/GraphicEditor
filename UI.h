#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class UI
{
public:
	static void start();
	static int getMainMenu(); //getMainMenu()
	static int getShape(); //getShapeType()
	//static int getShapeIndex();
	static void println(string msg);
	static void print(string msg);
	static void print(int msg);
	static int getRemove();

};

