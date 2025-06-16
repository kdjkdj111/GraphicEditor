#pragma once
#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
	string name; // 도형의 이름
	int width, height; // 도형이 내접하는 사각형의 너비와 높이
public:
	Shape(string n = "", int w = 0, int h = 0) {
		name = n; width = w; height =
			h;
	}
	virtual double getArea() = 0; // dummy 값 리턴
	string getName() { return name; } // 이름 리턴
};

