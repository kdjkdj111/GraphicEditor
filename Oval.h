#pragma once
#include "Shape.h"
class Oval :
    public Shape
{
public:
    Oval(string n, int w, int h) : Shape(n, w, h) {}
    double getArea() override;
};

