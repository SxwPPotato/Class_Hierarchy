#include "Quadrangle.h"
#include "Figures.h"
#include <iostream>
#include "Parallelogram.h"
#include "Rectangle.h"

    Rectangle :: Rectangle(int a, int b) {
        this->a = a;
        this->b = b;
        c = a;
        d = b;
        B = C = D = A = 90;
        Name_of_figure = "Прямоугольник";
    }