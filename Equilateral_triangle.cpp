#include "Triangle.h"
#include "Figures.h"
#include "Equilateral_triangle.h"

    Equilateral_triangle :: Equilateral_triangle(int a) {
        this->a = a;
        b = c = a;
        A = B = C = 60;
        Name_of_figure = "Равносторонний треугольник";

    }