//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR3_H
#define HWENGINE_VECTOR3_H

namespace TandenEngine {

	struct Vector4 {
		Vector4();
		~Vector4();
		Vector4(float setX, float setY, float setZ, float setW) { x = setX, y = setY, z = setZ, w = setW; };

		float x = 0.0, y = 0.0, z = 0.0, w = 0.0;

		// Vector + Vector
		Vector4 operator+(const Vector4& other) {
			x += other.x;
			y += other.y;
			z += other.z;
			w += other.w;
		};

		// Scalar Multiplication
		Vector4 operator*(const int& other) {
			x *= other;
			y *= other;
			z *= other;
			w *= other;
		};

	};

}

#endif //HWENGINE_VECTOR3_H
