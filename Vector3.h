//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR3_H
#define HWENGINE_VECTOR3_H

namespace TandenEngine {

	struct Vector3 {
		Vector3() {};
		~Vector3() {};
		Vector3(float setX, float setY, float setZ) { x = setX, y = setY, z = setZ; };

		float x = 0.0, y = 0.0, z = 0.0;

        // Vector + Vector
        Vector3& operator+=(const Vector3& other) {
            x += other.x;
            y += other.y;
            z += other.z;
            return *this;
        };

        Vector3 operator+(const Vector3& other) {
            Vector3 toReturn;
            toReturn.x = x + other.x;
            toReturn.y = y + other.y;
            toReturn.z = z + other.z;
            return toReturn;
        };

        // Scalar Multiplication
        Vector3& operator*=(const int& other) {
            x *= other;
            y *= other;
            z *= other;
            return *this;
        };

        Vector3 operator*(const int& other) {
            Vector3 toReturn;
            toReturn.x = x * other;
            toReturn.y = y * other;
            toReturn.z = z * other;
            return toReturn;
        };

	};
}

#endif HWENGINE_VECTOR3_H
