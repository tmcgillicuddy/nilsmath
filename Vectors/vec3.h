//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR3_H
#define HWENGINE_VECTOR3_H

#include <iostream>

namespace TandenEngine {

    struct vec3 {
        vec3() {x = y = z = 0;}

        vec3(float setX, float setY, float setZ) { x = setX, y = setY, z = setZ; }

        union {
            struct {
                float x, y, z;
            };
            float v[3];
        };

        // Vector Addition
        vec3 &operator+=(const vec3 &other) {
            x += other.x;
            y += other.y;
            z += other.z;
            return *this;
        }

        vec3 operator+(const vec3 &other) const {
            vec3 toReturn;
            toReturn.x = x + other.x;
            toReturn.y = y + other.y;
            toReturn.z = z + other.z;
            return toReturn;
        }

        vec3 &operator+=(const float other) {
            x += other;
            y += other;
            z += other;
            return *this;
        }

        vec3 operator+(const float other) const {
            vec3 toReturn;
            toReturn.x = x + other;
            toReturn.y = y + other;
            toReturn.z = z + other;
            return toReturn;
        }

        // Vector Subtraction
        vec3 &operator-=(const vec3 &other) {
            x -= other.x;
            y -= other.y;
            z -= other.z;
            return *this;
        }

        vec3 &operator-(const vec3 &other) const {
            vec3 toReturn;
            toReturn.x = x - other.x;
            toReturn.y = y - other.y;
            toReturn.z = z - other.z;
            return toReturn;
        }

        vec3 &operator-=(const float other) {
            x -= other;
            y -= other;
            z -= other;
            return *this;
        }

        vec3 operator-(const float other) const {
            vec3 toReturn;
            toReturn.x = x - other;
            toReturn.y = y - other;
            toReturn.z = z - other;
            return toReturn;
        }

        // Scalar Multiplication
        vec3 &operator*=(const float other) {
            x *= other;
            y *= other;
            z *= other;
            return *this;
        }

        vec3 operator*(const float other) const {
            vec3 toReturn;
            toReturn.x = x * other;
            toReturn.y = y * other;
            toReturn.z = z * other;
            return toReturn;
        }

        // Hadamard Product, multiplication of elements
        vec3 &operator*=(const vec3 &other) {
            x *= other.x;
            y *= other.y;
            z *= other.z;
            return *this;
        }

        vec3 operator*(const vec3 &other) const {
            vec3 toReturn;
            toReturn.x = x * other.x;
            toReturn.y = y * other.y;
            toReturn.z = z * other.z;
            return toReturn;
        }

        // Divide by float
        vec3& operator/=(const float other) {
            x /= other;
            y /= other;
            z /= other;
            return *this;
        }

        vec3 operator/(const float other) const {
            vec3 toReturn;
            toReturn.x = x / other;
            toReturn.y = y / other;
            toReturn.z = z / other;
            return toReturn;
        }

        // Relational Operators
        bool operator==(const vec3 &other) const {
            return ((x == other.x) && (y == other.y) && (z == other.z));
        }

        bool operator!=(const vec3 &other) const {
            return !(*this == other);
        }

        friend std::ostream &operator<<(::std::ostream &out, const vec3 &data);

        std::string ToString();

        float Norm() const;
        float Magnitude() const { return Norm(); }
        float Length() const { return Norm(); }

        vec3 Normalize();
        float Distance(const vec3& other) const;
        float Dot(const vec3& other) const;
        vec3 Cross(const vec3& other) const;

        // Static Vec3s
        static const vec3 ZERO;
        static const vec3 ONE;
        static const vec3 UP;
        static const vec3 DOWN;
        static const vec3 LEFT;
        static const vec3 RIGHT;
        static const vec3 FORWARD;
        static const vec3 BACKWARD;
    };
}  // namespace TandenEngine

#endif  // TANDENENGINE_VECTOR3_H
