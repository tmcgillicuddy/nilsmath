//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR4_H
#define HWENGINE_VECTOR4_H

#include <iostream>

namespace TandenEngine {

    struct vec4 {
		vec4() {}
		vec4(float setX, float setY, float setZ, float setW) { x = setX, y = setY, z = setZ, w = setW; }
        vec4(float singleArg);
        union {
            struct {
                float x, y, z, w;
            };
            float v[4];
        };

        // Vector Addition
        vec4& operator+=(const vec4& other) {
            x += other.x;
            y += other.y;
            z += other.z;
            w += other.w;
            return *this;
        }

        vec4 operator+(const vec4& other) const {
            vec4 toReturn;
            toReturn.x = x + other.x;
            toReturn.y = y + other.y;
            toReturn.z = z + other.z;
            toReturn.w = w + other.w;
            return toReturn;
        }

        vec4& operator+=(const float other) {
            x += other;
            y += other;
            z += other;
            w += other;
            return *this;
        }

        vec4 operator+(const float other) const {
            vec4 toReturn;
            toReturn.x = x + other;
            toReturn.y = y + other;
            toReturn.z = z + other;
            toReturn.w = w + other;
            return toReturn;
        }

        // Vector Subtraction
        vec4& operator-=(const vec4& other) {
            x -= other.x;
            y -= other.y;
            z -= other.z;
            w -= other.w;
            return *this;
        }

        vec4 operator-(const vec4& other) const {
            vec4 toReturn;
            toReturn.x = x - other.x;
            toReturn.y = y - other.y;
            toReturn.z = z - other.z;
            toReturn.w = w - other.w;
            return toReturn;
        }

        vec4& operator-=(const float other) {
            x -= other;
            y -= other;
            z -= other;
            w -= other;
            return *this;
        }

        vec4 operator-(const float other) const {
            vec4 toReturn;
            toReturn.x = x - other;
            toReturn.y = y - other;
            toReturn.z = z - other;
            toReturn.w = w - other;
            return toReturn;
        }

        // Scalar Multiplication
        vec4& operator*=(const float other) {
            x *= other;
            y *= other;
            z *= other;
            w *= other;
            return *this;
        }

        vec4 operator*(const float other) const {
            vec4 toReturn;
            toReturn.x = x * other;
            toReturn.y = y * other;
            toReturn.z = z * other;
            toReturn.w = w * other;
            return toReturn;
        }

        // Hadamard Product, multiplication of elements
        vec4& operator*=(const vec4& other) {
            x *= other.x;
            y *= other.y;
            z *= other.z;
            w *= other.w;
            return *this;
        }

        vec4 operator*(const vec4& other) const {
            vec4 toReturn;
            toReturn.x = x * other.x;
            toReturn.y = y * other.y;
            toReturn.z = z * other.z;
            toReturn.w = w * other.w;
            return toReturn;
        }

        // Divide by float
        vec4& operator/=(const float other) {
            x /= other;
            y /= other;
            z /= other;
            w /= other;
            return *this;
        }

        vec4 operator/(const float other) const {
            vec4 toReturn;
            toReturn.x = x / other;
            toReturn.y = y / other;
            toReturn.z = z / other;
            toReturn.w = w / other;
            return toReturn;
        }

        // Relational Operators
        bool operator==(const vec4& other) const {
            return ((x == other.x) && (y == other.y) && (z == other.z) && (w == other.w));
        }

        bool operator!=(const vec4& other) const {
            return !(*this == other);
        }

        friend std::ostream & operator << (std::ostream &out, const vec4 &data);

        std::string ToString();

        float Norm() const;
        float Magnitude() const { return Norm(); }
        float Length()  const { return Norm(); }

        vec4 Normalize();
        float Distance(const vec4& other) const;
        float Dot(const vec4& other) const;

        // Static Vec4s
        static const vec4 ZERO;
        static const vec4 ONE;
	};
}  // namespace TandenEngine

#endif  // TANDENENGINE_VECTOR4_H
