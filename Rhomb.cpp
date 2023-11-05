#include "Quadrangle.h"
#include "Rhomb.h"
#include "Figures.h"
#include <iostream>
#include "Parallelogram.h"

Rhomb :: Rhomb() {};
Rhomb :: Rhomb(int a, int A, int B) {
        this->a = a;
        this->A = A;
        this->B = B;
        b = c = d = a;
        C = A;
        D = B;
        Name_of_figure = "Ромб";
    }