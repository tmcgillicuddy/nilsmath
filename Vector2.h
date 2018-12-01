//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR2_H
#define HWENGINE_VECTOR2_H

namespace TandenEngine {

	struct Vector2 {
		Vector2();
		~Vector2();
		Vector2(float setX, float setY) { x = setX; y = setY; };

		float x = 0, y = 0;

		Vector2 xx();

		// Vector + Vector
		Vector2 operator+(const Vector2& other) {
			x += other.x;
			y += other.y;
		};

		// Scalar Multiplication
		Vector2 operator*(const int& other) {
			x *= other;
			y *= other;
		};

	};

}

#endif //HWENGINE_VECTOR2_H
