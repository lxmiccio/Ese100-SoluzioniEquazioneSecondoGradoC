#include "quadraticEquationSolver.h"

#include <math.h>

float equationDeterminant(float a, float b, float c)
{
    return ((float)pow(b,2)-4*a*c);
}

complexNumber firstSolution(float a, float b, float c)
{
    complexNumber solution;
    float delta = equationDeterminant(a, b, c);
    if(delta < 0)
    {
        solution.re = -b;
        solution.im = -(sqrt(-delta))/(2*a);
    }
    else
    {
        solution.re = -b-sqrt(delta);
        solution.im = 0;
    }
    solution.re /= (2*a);
    return solution;
}

complexNumber secondSolution(float a, float b, float c)
{
    complexNumber solution;
    float delta  = equationDeterminant(a, b, c);
    if(delta < 0)
    {
        solution.re = -b;
        solution.im = sqrt(-delta)/(2*a);
    }
    else
    {
        solution.re = -b+sqrt(delta);
        solution.im = 0;
    }
    solution.re /= (2*a);
    return solution;
}
