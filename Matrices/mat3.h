//
// Created by nils.steinbuegl on 12/2/2018.
//

#ifndef TANDENENGINE_MATRIX3_H
#define TANDENENGINE_MATRIX3_H

#include "Vectors/vec3.h"

namespace TandenEngine {

    struct mat3 {
        mat3() {};
        ~mat3() {};
        mat3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);

        // Matrix + Matrix
        mat3& operator+=(const mat3& other) {
            r1 += other.r1;
            r2 += other.r2;
            r3 += other.r3;

            return *this;
        }

        mat3 operator+(const mat3& other) const {
            mat3 toReturn;

            toReturn.r1 = r1 + other.r1;
            toReturn.r2 = r2 + other.r2;
            toReturn.r3 = r3 + other.r3;

            return toReturn;
        }

        // Matrix + Scalar
        mat3& operator+=(const float other) {
            r1 += other;
            r2 += other;
            r3 += other;

            return *this;
        }

        mat3 operator+(const float other) const {
            mat3 toReturn;

            toReturn.r1 = r1 + other;
            toReturn.r2 = r2 + other;
            toReturn.r3 = r3 + other;

            return toReturn;
        }

        // Matrix - Matrix
        mat3& operator-=(const mat3& other) {
            r1 -= other.r1;
            r2 -= other.r2;
            r3 -= other.r3;

            return *this;
        }

        mat3 operator-(const mat3& other) const {
            mat3 toReturn;

            toReturn.r1 = r1 - other.r1;
            toReturn.r2 = r2 - other.r2;
            toReturn.r3 = r3 - other.r3;

            return toReturn;
        }

        // Matrix - Scalar
        mat3& operator-=(const float other) {
            r1 -= other;
            r2 -= other;
            r3 -= other;

            return *this;
        }

        mat3 operator-(const float other) const {
            mat3 toReturn;

            toReturn.r1 = r1 - other;
            toReturn.r2 = r2 - other;
            toReturn.r3 = r3 - other;

            return toReturn;
        }

        // Matrix * Scalar
        mat3& operator*=(const float other) {
            r1 *= other;
            r2 *= other;
            r3 *= other;

            return *this;
        }

        mat3 operator*(const float other) const {
            mat3 toReturn;

            toReturn.r1 = r1 * other;
            toReturn.r2 = r2 * other;
            toReturn.r3 = r3 * other;

            return toReturn;
        }

        // Matrix * Matrix
        mat3& operator*=(const mat3 other) {
            mat3 temp;

            temp.r1.x = ((r1.x * other.r1.x) + (r1.y * other.r2.x) + (r1.z * other.r3.x));
            temp.r1.y = ((r1.x * other.r1.y) + (r1.y * other.r2.y) + (r1.z * other.r3.y));
            temp.r1.z = ((r1.x * other.r1.z) + (r1.y * other.r2.z) + (r1.z * other.r3.z));
            temp.r2.x = ((r2.x * other.r1.x) + (r2.y * other.r2.x) + (r2.z * other.r3.x));
            temp.r2.y = ((r2.x * other.r1.y) + (r2.y * other.r2.y) + (r2.z * other.r3.y));
            temp.r2.z = ((r2.x * other.r1.z) + (r2.y * other.r2.z) + (r2.z * other.r3.z));
            temp.r3.x = ((r3.x * other.r1.x) + (r3.y * other.r2.x) + (r3.z * other.r3.x));
            temp.r3.y = ((r3.x * other.r1.y) + (r3.y * other.r2.y) + (r3.z * other.r3.y));
            temp.r3.z = ((r3.x * other.r1.z) + (r3.y * other.r2.z) + (r3.z * other.r3.z));

            *this = temp;
            return* this;
        }

        mat3 operator*(const mat3 other) const {
            mat3 toReturn;

            toReturn.r1.x = ((r1.x * other.r1.x) + (r1.y * other.r2.x) + (r1.z * other.r3.x));
            toReturn.r1.y = ((r1.x * other.r1.y) + (r1.y * other.r2.y) + (r1.z * other.r3.y));
            toReturn.r1.z = ((r1.x * other.r1.z) + (r1.y * other.r2.z) + (r1.z * other.r3.z));
            toReturn.r2.x = ((r2.x * other.r1.x) + (r2.y * other.r2.x) + (r2.z * other.r3.x));
            toReturn.r2.y = ((r2.x * other.r1.y) + (r2.y * other.r2.y) + (r2.z * other.r3.y));
            toReturn.r2.z = ((r2.x * other.r1.z) + (r2.y * other.r2.z) + (r2.z * other.r3.z));
            toReturn.r3.x = ((r3.x * other.r1.x) + (r3.y * other.r2.x) + (r3.z * other.r3.x));
            toReturn.r3.y = ((r3.x * other.r1.y) + (r3.y * other.r2.y) + (r3.z * other.r3.y));
            toReturn.r3.z = ((r3.x * other.r1.z) + (r3.y * other.r2.z) + (r3.z * other.r3.z));

            return toReturn;
        }

        // Relational Operators
        bool operator==(const mat3& other) const {
            return ((r1 == other.r1) && (r2 == other.r2) && (r3 == other.r3));
        }

        bool operator!=(const mat3& other) const {
            return !(*this == other);
        }

        static mat3 Transpose(const mat3& mat);

        std::string ToString();

        vec3 r1;
        vec3 r2;
        vec3 r3;


        static const mat3 ZERO;
        static const mat3 ONE;
        static const mat3 IDENTITY;
    };
}

#endif //TANDENENGINE_MATRIX3_H
