#include "Triangle.h"
#include "Figures.h"
#include "Isosceles_triangle.h"

    Isosceles_triangle :: Isosceles_triangle(int a, int b, int A, int B) {
        this->a = a;
        this->b = b;
        this->A = A;
        this->B = B;
        c = a;
        C = A;
        Name_of_figure = "Равнобедренный треугольник";
    }
