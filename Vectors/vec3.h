//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR3_H
#define HWENGINE_VECTOR3_H

#include <iostream>

namespace TandenEngine {

	struct vec3 {
		vec3() {};
		vec3(float setX, float setY, float setZ) { x = setX, y = setY, z = setZ; };

		float x = 0.0, y = 0.0, z = 0.0;

        // Vector Addition
        vec3& operator+=(const vec3& other) {
            x += other.x;
            y += other.y;
            z += other.z;
            return *this;
        };

        vec3 operator+(const vec3& other) const {
            vec3 toReturn;
            toReturn.x = x + other.x;
            toReturn.y = y + other.y;
            toReturn.z = z + other.z;
            return toReturn;
        };

        vec3& operator+=(const float other) {
            x += other;
            y += other;
            z += other;
            return *this;
        };

        vec3 operator+(const float other) const {
            vec3 toReturn;
            toReturn.x = x + other;
            toReturn.y = y + other;
            toReturn.z = z + other;
            return toReturn;
        };

        // Vector Subtraction
        vec3& operator-=(const vec3& other) {
            x -= other.x;
            y -= other.y;
            z -= other.z;
            return *this;
        };

        vec3& operator-(const vec3& other) const {
            vec3 toReturn;
            toReturn.x = x - other.x;
            toReturn.y = y - other.y;
            toReturn.z = z - other.z;
            return toReturn;
        };

        vec3& operator-=(const float other) {
            x -= other;
            y -= other;
            z -= other;
            return *this;
        };

        vec3 operator-(const float other) const {
            vec3 toReturn;
            toReturn.x = x - other;
            toReturn.y = y - other;
            toReturn.z = z - other;
            return toReturn;
        };

        // Scalar Multiplication
        vec3& operator*=(const float other) {
            x *= other;
            y *= other;
            z *= other;
            return *this;
        };

        vec3 operator*(const float other) const {
            vec3 toReturn;
            toReturn.x = x * other;
            toReturn.y = y * other;
            toReturn.z = z * other;
            return toReturn;
        };

        // Hadamard Product, multiplication of elements
        vec3& operator*=(const vec3& other) {
            x *= other.x;
            y *= other.y;
            z *= other.z;
            return *this;
        };

        vec3 operator*(const vec3& other) const {
            vec3 toReturn;
            toReturn.x = x * other.x;
            toReturn.y = y * other.y;
            toReturn.z = z * other.z;
            return toReturn;
        };

        // Relational Operators
        bool operator==(const vec3& other) const {
            return ((x == other.x) && (y == other.y) && (z == other.z));
        }

        bool operator!=(const vec3& other) const {
            return !(*this == other);
        }

        friend std::ostream & operator << (std::ostream &out, const vec3 &data);

        std::string ToString();

        // TODO: better way of aliasing this
        static float Norm(const vec3& vec);
        static float Magnitude(const vec3& vec) { return Norm(vec); };
        static float Length(const vec3& vec)  { return Norm(vec); };;

        static float Distance(const vec3& pos, const vec3& target);

        static float Dot(const vec3& a, const vec3& b);

        // TODO: Cross Product

        //Static Vec3s
        static const vec3 ZERO;
        static const vec3 ONE;
        static const vec3 UP;
        static const vec3 DOWN;
        static const vec3 LEFT;
        static const vec3 RIGHT;
        static const vec3 FORWARD;
        static const vec3 BACKWARD;

    };
}

#endif HWENGINE_VECTOR3_H
