#ifndef VECTOR_H__
#define VECTOR_H__
#include <iostream>
#include <sstream>

class Vector2 {
public:
	float X;
	float Y;

	Vector2(float x, float y);
	void Print();

	Vector2 operator + (const Vector2& other) const;
	Vector2 operator - (const Vector2& other) const;
	Vector2 operator / (const float other) const;
	Vector2 operator * (const float other) const;
};


class Vector2Int {
public:
	int X;
	int Y;

	Vector2Int(int x, int y);
	void Print();

	Vector2Int operator + (const Vector2Int& other) const;
	Vector2Int operator - (const Vector2Int& other) const;
	Vector2Int operator / (const int other) const;
	Vector2Int operator * (const int other) const;
};


#endif // !VECTOR_H__