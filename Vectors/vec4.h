//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR4_H
#define HWENGINE_VECTOR4_H

#include <iostream>

namespace TandenEngine {

	struct vec4 {
		vec4() {};
		vec4(float setX, float setY, float setZ, float setW) { x = setX, y = setY, z = setZ, w = setW; };

		float x = 0.0, y = 0.0, z = 0.0, w = 0.0;

        // Vector Addition
        vec4& operator+=(const vec4& other) {
            x += other.x;
            y += other.y;
            z += other.z;
            w += other.w;
            return *this;
        };

        vec4 operator+(const vec4& other) const {
            vec4 toReturn;
            toReturn.x = x + other.x;
            toReturn.y = y + other.y;
            toReturn.z = z + other.z;
            toReturn.w = w + other.w;
            return toReturn;
        };

        vec4& operator+=(const float other) {
            x += other;
            y += other;
            z += other;
            w += other;
            return *this;
        };

        vec4 operator+(const float other) const {
            vec4 toReturn;
            toReturn.x = x + other;
            toReturn.y = y + other;
            toReturn.z = z + other;
            toReturn.w = w + other;
            return toReturn;
        };

        // Vector Subtraction
        vec4& operator-=(const vec4& other) {
            x -= other.x;
            y -= other.y;
            z -= other.z;
            w -= other.w;
            return *this;
        };

        vec4 operator-(const vec4& other) const {
            vec4 toReturn;
            toReturn.x = x - other.x;
            toReturn.y = y - other.y;
            toReturn.z = z - other.z;
            toReturn.w = w - other.w;
            return toReturn;
        };

        vec4& operator-=(const float other) {
            x -= other;
            y -= other;
            z -= other;
            w -= other;
            return *this;
        };

        vec4 operator-(const float other) const {
            vec4 toReturn;
            toReturn.x = x - other;
            toReturn.y = y - other;
            toReturn.z = z - other;
            toReturn.w = w - other;
            return toReturn;
        };

        // Scalar Multiplication
        vec4& operator*=(const float other) {
            x *= other;
            y *= other;
            z *= other;
            w *= other;
            return *this;
        };

        vec4 operator*(const float other) const {
            vec4 toReturn;
            toReturn.x = x * other;
            toReturn.y = y * other;
            toReturn.z = z * other;
            toReturn.w = w * other;
            return toReturn;
        };

        // Hadamard Product, multiplication of elements
        vec4& operator*=(const vec4& other) {
            x *= other.x;
            y *= other.y;
            z *= other.z;
            w *= other.w;
            return *this;
        };

        vec4 operator*(const vec4& other) const {
            vec4 toReturn;
            toReturn.x = x * other.x;
            toReturn.y = y * other.y;
            toReturn.z = z * other.z;
            toReturn.w = w * other.w;
            return toReturn;
        };

        // Relational Operators
        bool operator==(const vec4& other) const {
            return ((x == other.x) && (y == other.y) && (z == other.z) && (w == other.w));
        }

        bool operator!=(const vec4& other) const {
            return !(*this == other);
        }

        friend std::ostream & operator << (std::ostream &out, const vec4 &data);

        std::string ToString();

        // TODO: better way of aliasing this
        static float Norm(const vec4& vec);
        static float Magnitude(const vec4& vec) { return Norm(vec); };
        static float Length(const vec4& vec)  { return Norm(vec); };;

        static float Distance(const vec4& pos, const vec4& target);

        static float Dot(const vec4& a, const vec4& b);

        //Static Vec2s
        static const vec4 ZERO;
        static const vec4 ONE;

    };

}

#endif HWENGINE_VECTOR4_H
