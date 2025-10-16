#include "Vector3.h"

int main() 
{
	Vector3 a;
	Vector3 b(10.0, 10.0, 10.0);
	Vector3 c(b);
	Vector3 d = b + c;

	d.Normalize();
	d.DistanceTo(b);
	d.DotProduct(b);
	d.CrossProduct(b);
	d.AngleBetween(b);


}