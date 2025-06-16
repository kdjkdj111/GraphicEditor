#include <iostream>
#include "Oval.h"
#include "Rect.h"
#include "Triangular.h"
using namespace std;

int main() {
	Shape* p[3];
	p[0] = new Oval("ºó´ë¶±", 10, 20);
	p[1] = new Rect("Âû¶±", 30, 40);
	p[2] = new Triangular("Åä½ºÆ®", 30, 40);
	for (int i = 0; i < 3; i++)
		cout << p[i]->getName() << " ³ÐÀÌ´Â " << p[i]->getArea() << endl;
	for (int i = 0; i < 3; i++) delete p[i];
}