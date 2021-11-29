/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nicholas Rubio
 */

#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

/*
We can declare a non-reference function argument. In getCircumference and getArea,
they use a const double called 'pi' as an argument. They need pi in order to compute
their respective result, and pi is a constant, unchanging value. We would want to use
a const as an argument when we know a value will never change (i.e. pi). People don't
do this often because usually values and references are always changing, so this wouldn't
work in those cases.
*/

double getCircumference(const double pi, double radius)
{
    double result;
    result = 2 * pi * radius;
    return result;
}

double getArea(const double pi, double radius)
{
    double result;
    result =  pi * (radius * radius);
    return result;
}

int main() 
{
    const double pi = 3.14159265;
    double radius, circumference, area;

    cout <<  "Enter the radius of a circle: ";
    cin >> radius;

    circumference = getCircumference(pi, radius);
    area = getArea(pi, radius);

    cout << "Circumferece: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}