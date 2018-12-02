//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR2_H
#define HWENGINE_VECTOR2_H

namespace TandenEngine {

	struct Vector2 {
		Vector2();
		~Vector2();
		Vector2(float setX, float setY) { x = setX, y = setY; };

		float x = 0.0, y = 0.0;

		// Vector + Vector
		Vector2 operator+=(const Vector2& other) {
			x += other.x;
			y += other.y;
		};

		Vector2 operator+(const Vector2& other) {
			Vector2 toReturn;
			toReturn.x = x + other.x;
			toReturn.y = y + other.y;
			return toReturn;
		};

		// Scalar Multiplication
		Vector2 operator*=(const int& other) {
			x *= other;
			y *= other;
		};

		Vector2 operator*(const int& other) {
			Vector2 toReturn;
			toReturn.x = x * toReturn.x;
			toReturn.y = y * toReturn.y;
			return toReturn;
		};

	};

}

#endif //HWENGINE_VECTOR2_H
