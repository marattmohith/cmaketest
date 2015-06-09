// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string>
#include <sstream>
#include "simple/Simple.h"
#include "advanced/Advanced.h"
using namespace std;
int main (int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stdout,"%s\n", "Insufficient input - enter a value.");
		string c;
		getline(cin, c);
        return 1;
    }

    double inputValue = atof(argv[1]);

	double sumValue = mysum(1, 2);
    double sqrtValue = mysqrt(inputValue);

    fprintf(stdout,"The sum of %g and %g is %g\n", inputValue, inputValue, sumValue);
    fprintf(stdout,"The square root of %g is %g\n", inputValue, sqrtValue);

    return 0;
}
