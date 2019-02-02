//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR2_H
#define HWENGINE_VECTOR2_H

#include <iostream>

namespace TandenEngine {

	struct vec2 {

		vec2() {};
		vec2(float setX, float setY) { x = setX, y = setY; };

		float x = 0.0, y = 0.0;

		// Vector Addition
		vec2& operator+=(const vec2& other) {
			x += other.x;
			y += other.y;
			return *this;
		};

		vec2 operator+(const vec2& other) const {
			vec2 toReturn;
			toReturn.x = x + other.x;
			toReturn.y = y + other.y;
			return toReturn;
		};

		vec2& operator+=(const float other) {
			x += other;
			y += other;
			return *this;
		};

		vec2 operator+(const float other) const {
			vec2 toReturn;
			toReturn.x = x + other;
			toReturn.y = y + other;
			return toReturn;
		};

		// Vector Subtraction
		vec2& operator-=(const vec2& other) {
			x -= other.x;
			y -= other.y;
			return *this;
		};

		vec2 operator-(const vec2& other) const {
			vec2 toReturn;
			toReturn.x = x - other.x;
			toReturn.y = y - other.y;
			return toReturn;
		};

		vec2& operator-=(const float other) {
			x -= other;
			y -= other;
			return *this;
		};

		vec2 operator-(const float other) const {
			vec2 toReturn;
			toReturn.x = x - other;
			toReturn.y = y - other;
			return toReturn;
		};

		// Scalar Multiplication
		vec2& operator*=(const float other) {
			x *= other;
			y *= other;
			return *this;
		};

		vec2 operator*(const float other) const {
			vec2 toReturn;
			toReturn.x = x * other;
			toReturn.y = y * other;
			return toReturn;
		};

		// Hadamard Product, multiplication of elements
		vec2& operator*=(const vec2& other) {
			x *= other.x;
			y *= other.y;
			return *this;
		};

		vec2 operator*(const vec2& other) const {
			vec2 toReturn;
			toReturn.x = x * other.x;
			toReturn.y = y * other.y;
			return toReturn;
		};

        // Relational Operators
        bool operator==(const vec2& other) const {
            return ((x == other.x) && (y == other.y));
        }

        bool operator!=(const vec2& other) const {
            return !(*this == other);
        }

		std::string ToString();

		friend std::ostream & operator << (std::ostream &out, const vec2 &data);

		// TODO: better way of aliasing this
		static float Norm(const vec2& vec);
		static float Magnitude(const vec2& vec) { return Norm(vec); };
		static float Length(const vec2& vec)  { return Norm(vec); };;

        static float Distance(const vec2& pos, const vec2& target);

		static float Dot(const vec2& a, const vec2& b);

		//Static Vec2s
		static const vec2 ZERO;
		static const vec2 ONE;
		static const vec2 UP;
		static const vec2 DOWN;
		static const vec2 LEFT;
		static const vec2 RIGHT;
	};

}

#endif HWENGINE_VECTOR2_H
