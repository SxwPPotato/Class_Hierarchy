#include "Quadrangle.h"
#include "Figures.h"
#include <iostream>
#include "Parallelogram.h"


Parallelogram :: Parallelogram() {};
Parallelogram :: Parallelogram(int a, int b, int A, int B) {
        this->a = a;
        this->b = b;
        this->A = A;
        this->B = B;
        c = a;
        d = b;
        C = A;
        D = B;
        Name_of_figure = "ֿאנאככוכמדנאלל";
    }
