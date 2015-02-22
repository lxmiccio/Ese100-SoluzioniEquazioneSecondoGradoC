#include <stdio.h>
#include <stdlib.h>

#include "complexNumbers.h"
#include "quadraticEquationSolver.h"

int main(int argc, char** argv)
{
    complexNumber x1, x2;
    char *solutionX1, *solutionX2;
    float a = 0, b, c;
    while(a == 0)
    {
        printf("Inserisci il coefficiente di x^2 (diverso da 0): ");
        scanf("%f", &a);
    }
    printf("Inserisci il coefficiente di x: ");
    scanf("%f", &b);
    printf("Inserisci il coefficiente c: ");
    scanf("%f", &c);
    x1 = firstSolution(a, b, c);
    x2 = secondSolution(a, b, c); 
    solutionX1 = formatComplexNumber(x1);
    solutionX2 = formatComplexNumber(x2);
    printf("\nx1: %s\nx2: %s\n", solutionX1, solutionX2);
    free(solutionX1);
    free(solutionX2);
    return (EXIT_SUCCESS);
}