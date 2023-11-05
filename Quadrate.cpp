#include "Quadrangle.h"
#include "Rhomb.h"
#include "Figures.h"
#include <iostream>
#include "Parallelogram.h"
#include "Quadrate.h"

 Quadrate :: Quadrate(int a) {
        this->a = a;
        b = c = d = a;
        B = C = D = A = 90;
        Name_of_figure = " вадрат";
    }