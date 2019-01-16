//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR4_H
#define HWENGINE_VECTOR4_H

#include <iostream>

namespace TandenEngine {

	struct Vector4 {
		Vector4() {};
		~Vector4() {};
		Vector4(float setX, float setY, float setZ, float setW) { x = setX, y = setY, z = setZ, w = setW; };

		float x = 0.0, y = 0.0, z = 0.0, w = 0.0;

        // Vector Addition
        Vector4& operator+=(const Vector4& other) {
            x += other.x;
            y += other.y;
            z += other.z;
            w += other.w;
            return *this;
        };

        const Vector4 operator+(const Vector4& other) {
            Vector4 toReturn;
            toReturn.x = x + other.x;
            toReturn.y = y + other.y;
            toReturn.z = z + other.z;
            toReturn.w = w + other.w;
            return toReturn;
        };

        Vector4& operator+=(const float& other) {
            x += other;
            y += other;
            z += other;
            w += other;
            return *this;
        };

        const Vector4 operator+(const float& other) {
            Vector4 toReturn;
            toReturn.x = x + other;
            toReturn.y = y + other;
            toReturn.z = z + other;
            toReturn.w = w + other;
            return toReturn;
        };

        // Vector Subtraction
        Vector4& operator-=(const Vector4& other) {
            x -= other.x;
            y -= other.y;
            z -= other.z;
            w -= other.w;
            return *this;
        };

        const Vector4 operator-(const Vector4& other) {
            Vector4 toReturn;
            toReturn.x = x - other.x;
            toReturn.y = y - other.y;
            toReturn.z = z - other.z;
            toReturn.w = w - other.w;
            return toReturn;
        };

        // Scalar Multiplication
        Vector4& operator*=(const float& other) {
            x *= other;
            y *= other;
            z *= other;
            w *= other;
            return *this;
        };

        const Vector4 operator*(const float& other) {
            Vector4 toReturn;
            toReturn.x = x * other;
            toReturn.y = y * other;
            toReturn.z = z * other;
            toReturn.w = w * other;
            return toReturn;
        };


        friend std::ostream & operator << (std::ostream &out, const Vector4 &data);

        float dot(const Vector4& a, const Vector4& b);

        Vector4 hadamard(const Vector4& a, const Vector4& b);

    };

}

#endif HWENGINE_VECTOR4_H
