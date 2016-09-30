#include "QuadraticEquation.h"
#include <cmath>
using namespace std;

QuadraticEquation::QuadraticEquation(double newA, double newB, double newC)
{

	if (newA == 0) a = 1;
	else a = newA;

	b = newB;
	c = newC;

}

double QuadraticEquation::getA()
{
	return a;
}

double QuadraticEquation::getB()
{
	return b;
}

double QuadraticEquation::getC()
{
	return c;
}

double QuadraticEquation::getDiscriminant()
{
	return (b*b-4*a*c);
}

double QuadraticEquation::getRoot1()
{
	if (getDiscriminant() < 0) return 0;
	else return ((-b + sqrt(getDiscriminant())) / 2);
}

double QuadraticEquation::getRoot2()
{
	if (getDiscriminant() < 0) return 0;
	else return ((-b - sqrt(getDiscriminant())) / 2);
}
