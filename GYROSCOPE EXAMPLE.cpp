#include <cmath>

double returnangle(double downforce, double sideforce, double horizontalforce) {
	double anglefromhorizontal = asin(downforce / (sideforce + horizontalforce));
	return anglefromhorizontal;
}