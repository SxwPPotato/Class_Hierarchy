#include <iostream>
#include "Figures.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rhomb.h"
#include "Rectangle.h"
#include "Quadrate.h"



    int main()
    {
        setlocale(LC_ALL, "russian");

        Triangle triangle(15, 25, 30, 60, 40, 80);
        Quadrangle quadrangle(10, 20, 30, 40, 80, 90, 50, 60);
        Right_triangle right_triangle(10, 20, 30, 30, 50);
        Isosceles_triangle isosceles_triangle(20, 30, 50, 60);
        Equilateral_triangle equilateral_triangle(10);
        Parallelogram parallelogram(10, 20, 30, 40);
        Rectangle rectangle(20, 30);
        Rhomb rhomb(30, 20, 30);
        Quadrate quadrate(20);

        triangle.Show_name();
        print_info(&triangle);
        right_triangle.Show_name();
        print_info(&right_triangle);
        isosceles_triangle.Show_name();;
        print_info(&isosceles_triangle);
        equilateral_triangle.Show_name();
        print_info(&equilateral_triangle);

        quadrangle.Show_name();
        print_info(&quadrangle);
        rectangle.Show_name();
        print_info(&rectangle);
        quadrate.Show_name();
        print_info(&quadrate);
        parallelogram.Show_name();
        print_info(&parallelogram);
        rhomb.Show_name();
        print_info(&rhomb);
        std::cout << "\n";
        return 0;

    }

