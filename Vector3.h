#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

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
	Vector3 operator + (const Vector3& other) const { return Vector3(x + other.x, y + other.y, z + other.z); }
	Vector3 operator - (const Vector3& other) const { return Vector3(x - other.x, y - other.y, z - other.z); }
	Vector3 operator * (const Vector3& other) const { return Vector3(x * other.x, y * other.y, z * other.z); }
	Vector3 operator / (const Vector3& other) const { return Vector3(x / other.x, y / other.y, z / other.z); }

	// for debug purposes
	Vector3 GetPosition() const
	{
		std::cout << "Position X = " << x << ", Position Y = " << y << ", Position Z = " << z << std::endl;

		return Vector3(x, y, z);
	}

	
	double GetMagnitude() const
	{
		return std::sqrt(x * x + y * y + z * z);
	}

	Vector3 Normalize() const
	{
		double magnitude = GetMagnitude();

		if (magnitude == 0.0)
			return Vector3(0.0, 0.0, 0.0);

		Vector3 normal = Vector3(x / magnitude, y / magnitude, z / magnitude);

		return normal;
	}

	double DistanceTo(const Vector3& entity) const
	{
		Vector3 difference = Vector3(entity.x - x, entity.y - y, entity.z - z);

		double distance = std::sqrt(difference.x * difference.x + difference.y * difference.y + difference.z * difference.z);

		std::cout << "Distance is: " << distance << std::endl;

		return distance;
	}

	double DotProduct(const Vector3& entity) const
	{
		return (x * entity.x) + (y * entity.y) + (z * entity.z);
	}


	Vector3 CrossProduct(const Vector3& entity) const 
	{
		return Vector3(y * entity.z - z * entity.y, z * entity.x - x * entity.z, x * entity.y - y * entity.x);
	}

	double AngleBetween(const Vector3& entity) const
	{
	 
		return std::acos(this->DotProduct(entity) / (this->GetMagnitude() * entity.GetMagnitude())) * 180 / M_PI;
	}
};

