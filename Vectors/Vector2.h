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

		// Vector Addition
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

		Vector2& operator+=(const float other) {
			x += other;
			y += other;
			return *this;
		};

		Vector2 operator+(const float other) {
			Vector2 toReturn;
			toReturn.x = x + other;
			toReturn.y = y + other;
			return toReturn;
		};

		// Vector Subtraction
		Vector2& operator-=(const Vector2& other) {
			x -= other.x;
			y -= other.y;
			return *this;
		};

		Vector2 operator-(const Vector2& other) {
			Vector2 toReturn;
			toReturn.x = x - other.x;
			toReturn.y = y - other.y;
			return toReturn;
		};

		Vector2& operator-=(const float other) {
			x -= other;
			y -= other;
			return *this;
		};

		Vector2 operator-(const float other) {
			Vector2 toReturn;
			toReturn.x = x - other;
			toReturn.y = y - other;
			return toReturn;
		};

		// Scalar Multiplication
		Vector2& operator*=(const float other) {
			x *= other;
			y *= other;
			return *this;
		};

		Vector2 operator*(const float other) {
			Vector2 toReturn;
			toReturn.x = x * other;
			toReturn.y = y * other;
			return toReturn;
		};

		// Hadamard Product, multiplication of elements
		Vector2& operator*=(const Vector2& other) {
			x *= other.x;
			y *= other.y;
			return *this;
		};

		Vector2 operator*(const Vector2& other) {
			Vector2 toReturn;
			toReturn.x = x * other.x;
			toReturn.y = y * other.y;
			return toReturn;
		};


		// TODO: better way of aliasing this
		static float Norm(const Vector2& vec);
		static float Magnitude(const Vector2& vec) { return Norm(vec); };
		static float Length(const Vector2& vec)  { return Norm(vec); };;

		friend std::ostream & operator << (std::ostream &out, const Vector2 &data);

		static float Dot(const Vector2& a, const Vector2& b);

		//Static Vec2s
		static const Vector2 ZERO;
		static const Vector2 ONE;
		static const Vector2 UP;
		static const Vector2 DOWN;
		static const Vector2 LEFT;
		static const Vector2 RIGHT;
	};

}

#endif HWENGINE_VECTOR2_H
