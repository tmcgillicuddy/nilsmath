//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR2_H
#define HWENGINE_VECTOR2_H

#include <iostream>

namespace TandenEngine {

	struct vec2 {
		vec2() {x = y = 0;}
		vec2(float setX, float setY) { x = setX, y = setY; }

		union {
			struct {
				float x, y;
			};
			float v[2];
		};

		// Vector Addition
		vec2& operator+=(const vec2& other) {
			x += other.x;
			y += other.y;
			return *this;
		}

		vec2 operator+(const vec2& other) const {
			vec2 toReturn;
			toReturn.x = x + other.x;
			toReturn.y = y + other.y;
			return toReturn;
		}

		vec2& operator+=(const float other) {
			x += other;
			y += other;
			return *this;
		}

		vec2 operator+(const float other) const {
			vec2 toReturn;
			toReturn.x = x + other;
			toReturn.y = y + other;
			return toReturn;
		}

		// Vector Subtraction
		vec2& operator-=(const vec2& other) {
			x -= other.x;
			y -= other.y;
			return *this;
		}

		vec2 operator-(const vec2& other) const {
			vec2 toReturn;
			toReturn.x = x - other.x;
			toReturn.y = y - other.y;
			return toReturn;
		}

		vec2& operator-=(const float other) {
			x -= other;
			y -= other;
			return *this;
		}

		vec2 operator-(const float other) const {
			vec2 toReturn;
			toReturn.x = x - other;
			toReturn.y = y - other;
			return toReturn;
		}

		// Scalar Multiplication
		vec2& operator*=(const float other) {
			x *= other;
			y *= other;
			return *this;
		}

		vec2 operator*(const float other) const {
			vec2 toReturn;
			toReturn.x = x * other;
			toReturn.y = y * other;
			return toReturn;
		}

		// Hadamard Product, multiplication of elements
		vec2& operator*=(const vec2& other) {
			x *= other.x;
			y *= other.y;
			return *this;
		}

		vec2 operator*(const vec2& other) const {
			vec2 toReturn;
			toReturn.x = x * other.x;
			toReturn.y = y * other.y;
			return toReturn;
		}

		// Divide by float
		vec2& operator/=(const float other) {
			x /= other;
			y /= other;
			return *this;
		}

		vec2 operator/(const float other) const {
			vec2 toReturn;
			toReturn.x = x / other;
			toReturn.y = y / other;
			return toReturn;
		}

        // Relational Operators
        bool operator==(const vec2& other) const {
            return ((x == other.x) && (y == other.y));
        }

        bool operator!=(const vec2& other) const {
            return !(*this == other);
        }

		std::string ToString();

		friend std::ostream & operator << (std::ostream &out, const vec2 &data);

		float Norm() const;
		float Magnitude() const { return Norm(); }
		float Length() const { return Norm(); }

		vec2 Normalize();
		float Distance(const vec2& other) const;
		float Dot(const vec2& other) const;

		// Static Vec2s
		static const vec2 ZERO;
		static const vec2 ONE;
		static const vec2 UP;
		static const vec2 DOWN;
		static const vec2 LEFT;
		static const vec2 RIGHT;
	};
}  // namespace TandenEngine

#endif  // TANDENENGINE_VECTOR2_H
