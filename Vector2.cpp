#include "Vector2.h"

//Vec2 FLOAT ========================================
Vector2::Vector2(float x, float y) : X(x), Y(y) {};

void Vector2::Print() {
	std::stringstream stringvec;
	stringvec << "(" << X << ", " << Y << ")" << "\n" << std::endl;

	std::string str = stringvec.str();

	std::cout << str;
}

Vector2 Vector2::operator + (const Vector2& other) const {
	return Vector2(this->X + other.X, this->Y + other.Y);
}

Vector2 Vector2::operator - (const Vector2& other) const {
	return Vector2(this->X - other.X, this->Y - other.Y);
}

Vector2 Vector2::operator / (const float other) const {
	return Vector2(this->X / other, this->Y / other);
}

Vector2 Vector2::operator * (const float other) const {
	return Vector2(this->X * other, this->Y * other);
}
//Vector FLOAT ========================================


//Vector INT ========================================
Vector2Int::Vector2Int(int x, int y) : X(x), Y(y) {};

void Vector2Int::Print() {
	std::stringstream stringvec;
	stringvec << "(" << X << ", " << Y << ")" << "\n" << std::endl;

	std::string str = stringvec.str();

	std::cout << str;
}

Vector2Int Vector2Int::operator + (const Vector2Int& other) const {
	return Vector2Int(this->X + other.X, this->Y + other.Y);
}

Vector2Int Vector2Int::operator - (const Vector2Int& other) const {
	return Vector2Int(this->X - other.X, this->Y - other.Y);
}

Vector2Int Vector2Int::operator / (const int other) const {
	return Vector2Int(this->X / other, this->Y / other);
}

Vector2Int Vector2Int::operator * (const int other) const {
	return Vector2Int(this->X * other, this->Y * other);
}
//Vector INT ========================================