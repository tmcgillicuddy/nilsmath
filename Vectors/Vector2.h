//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR2_H
#define HWENGINE_VECTOR2_H

#include <iostream>

namespace TandenEngine {

	struct Vector2 {
		Vector2() {};
		~Vector2() {};
		Vector2(float setX, float setY) { x = setX, y = setY; };

		float x = 0.0, y = 0.0;

		// Vector + Vector
		Vector2& operator+=(const Vector2& other) {
			x += other.x;
			y += other.y;
			return *this;
		};

		Vector2 operator+(const Vector2& other) {
			Vector2 toReturn;
			toReturn.x = x + other.x;
			toReturn.y = y + other.y;
			return toReturn;
		};

		// Scalar Multiplication
		Vector2& operator*=(const int& other) {
			x *= other;
			y *= other;
			return *this;
		};

		Vector2 operator*(const int& other) {
			Vector2 toReturn;
			toReturn.x = x * other;
			toReturn.y = y * other;
			return toReturn;
		};

		friend std::ostream & operator << (std::ostream &out, const Vector2 &data);

	};

}

#endif HWENGINE_VECTOR2_H
