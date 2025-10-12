#pragma once
#include <iostream>

template <typename T = double>
class Vector3
{
	T x, y, z;

public:

	Vector3() : x(T()), y(T()), z(T()) {}

	Vector3(T x, T y, T z) : x(x), y(y), z(z) {}

	Vector3(const Vector3<T>& entity) : x(entity.x), y(entity.y), z(entity.z) {}

	~Vector3() {}

	// overloading operator
	Vector3 operator + (const Vector3& other) const { return Vector3<T>(x + other.x, y + other.y, z + other.z); }
	Vector3 operator - (const Vector3& other) const { return Vector3<T>(x - other.x, y - other.y, z - other.z); }
	Vector3 operator * (const Vector3& other) const { return Vector3<T>(x * other.x, y * other.y, z * other.z); }
	Vector3 operator / (const Vector3& other) const { return Vector3<T>(x / other.x, y / other.y, z / other.z); }

	void GetPosition() const
	{
		std::cout << "Position X = " << x << ", Position Y = " << y << ", Position Z = " << z << std::endl;
	}

	/*Normalize();
	DistanceTo(Vector3 entity);
	DotProduct(Vector3 entity);
	CrossProduct(Vector3 entity);
	AngleBetween(Vector3 entity);*/
};

