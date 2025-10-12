#include "Vector3.h"

int main() 
{
	Vector3 a;
	Vector3 b(10, 10, 10);
	Vector3 c(b);
	Vector3 d = b + c;

	a.GetPosition();
	b.GetPosition();
	c.GetPosition();
	d.GetPosition();

}