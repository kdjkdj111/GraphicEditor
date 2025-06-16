#pragma once
#include "Shape.h"
class Triangular :
    public Shape
{
public:
    Triangular(string n, int w, int h) : Shape(n, w, h) {}
    double getArea() override;
};

