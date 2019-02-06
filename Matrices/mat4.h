//
// Created by nils.steinbuegl on 12/2/2018.
//

#ifndef TANDENENGINE_MATRIX4_H
#define TANDENENGINE_MATRIX4_H

#include "Vectors/vec4.h"

namespace TandenEngine {

    struct mat4 {
        mat4() {}
        ~mat4() {}
        mat4(float x1, float y1, float z1, float w1,
                float x2, float y2, float z2, float w2,
                float x3, float y3, float z3, float w3,
                float x4, float y4, float z4, float w4);

        // Matrix + Matrix
        mat4& operator+=(const mat4& other) {
            r1 += other.r1;
            r2 += other.r2;
            r3 += other.r3;
            r4 += other.r4;

            return *this;
        }

        mat4 operator+(const mat4& other) const {
            mat4 toReturn;

            toReturn.r1 = r1 + other.r1;
            toReturn.r2 = r2 + other.r2;
            toReturn.r3 = r3 + other.r3;
            toReturn.r4 = r4 + other.r4;

            return toReturn;
        }

        // Matrix + Scalar
        mat4& operator+=(const float other) {
            r1 += other;
            r2 += other;
            r3 += other;
            r4 += other;

            return *this;
        }

        mat4 operator+(const float other) const {
            mat4 toReturn;

            toReturn.r1 = r1 + other;
            toReturn.r2 = r2 + other;
            toReturn.r3 = r3 + other;
            toReturn.r4 = r4 + other;

            return toReturn;
        }

        // Matrix - Matrix
        mat4& operator-=(const mat4& other) {
            r1 -= other.r1;
            r2 -= other.r2;
            r3 -= other.r3;
            r4 -= other.r4;

            return *this;
        }

        mat4 operator-(const mat4& other) const {
            mat4 toReturn;

            toReturn.r1 = r1 - other.r1;
            toReturn.r2 = r2 - other.r2;
            toReturn.r3 = r3 - other.r3;
            toReturn.r4 = r4 - other.r4;

            return toReturn;
        }

        // Matrix - Scalar
        mat4& operator-=(const float other) {
            r1 -= other;
            r2 -= other;
            r3 -= other;
            r4 -= other;

            return *this;
        }

        mat4 operator-(const float other) const {
            mat4 toReturn;

            toReturn.r1 = r1 - other;
            toReturn.r2 = r2 - other;
            toReturn.r3 = r3 - other;
            toReturn.r4 = r4 - other;

            return toReturn;
        }

        // Matrix * Scalar
        mat4& operator*=(const float other) {
            r1 *= other;
            r2 *= other;
            r3 *= other;
            r4 *= other;

            return *this;
        }

        mat4 operator*(const float other) const {
            mat4 toReturn;

            toReturn.r1 = r1 * other;
            toReturn.r2 = r2 * other;
            toReturn.r3 = r3 * other;
            toReturn.r4 = r4 * other;

            return toReturn;
        }

        // Matrix * Matrix
        mat4& operator*=(const mat4 other) {
            mat4 temp;

            temp.r1.x = ((r1.x * other.r1.x) + (r1.y * other.r2.x)
                    + (r1.z * other.r3.x) + (r1.w * other.r4.x));
            temp.r1.y = ((r1.x * other.r1.y) + (r1.y * other.r2.y)
                    + (r1.z * other.r3.y) + (r1.w * other.r4.y));
            temp.r1.z = ((r1.x * other.r1.z) + (r1.y * other.r2.z)
                    + (r1.z * other.r3.z) + (r1.w * other.r4.z));
            temp.r1.w = ((r1.x * other.r1.w) + (r1.y * other.r2.w)
                    + (r1.z * other.r3.w) + (r1.w * other.r4.w));
            temp.r2.x = ((r2.x * other.r1.x) + (r2.y * other.r2.x)
                    + (r2.z * other.r3.x) + (r2.w * other.r4.x));
            temp.r2.y = ((r2.x * other.r1.y) + (r2.y * other.r2.y)
                    + (r2.z * other.r3.y) + (r2.w * other.r4.y));
            temp.r2.z = ((r2.x * other.r1.z) + (r2.y * other.r2.z)
                    + (r2.z * other.r3.z) + (r2.w * other.r4.z));
            temp.r2.w = ((r2.x * other.r1.w) + (r2.y * other.r2.w)
                    + (r2.z * other.r3.w) + (r2.w * other.r4.w));
            temp.r3.x = ((r3.x * other.r1.x) + (r3.y * other.r2.x)
                    + (r3.z * other.r3.x) + (r3.w * other.r4.x));
            temp.r3.y = ((r3.x * other.r1.y) + (r3.y * other.r2.y)
                    + (r3.z * other.r3.y) + (r3.w * other.r4.y));
            temp.r3.z = ((r3.x * other.r1.z) + (r3.y * other.r2.z)
                    + (r3.z * other.r3.z) + (r3.w * other.r4.z));
            temp.r3.w = ((r3.x * other.r1.w) + (r3.y * other.r2.w)
                    + (r3.z * other.r3.w) + (r3.w * other.r4.w));
            temp.r4.x = ((r4.x * other.r1.x) + (r4.y * other.r2.x)
                    + (r4.z * other.r3.x) + (r4.w * other.r4.x));
            temp.r4.y = ((r4.x * other.r1.y) + (r4.y * other.r2.y)
                    + (r4.z * other.r3.y) + (r4.w * other.r4.y));
            temp.r4.z = ((r4.x * other.r1.z) + (r4.y * other.r2.z)
                    + (r4.z * other.r3.z) + (r4.w * other.r4.z));
            temp.r4.w = ((r4.x * other.r1.w) + (r4.y * other.r2.w)
                    + (r4.z * other.r3.w) + (r4.w * other.r4.w));

            *this = temp;
            return* this;
        }

        mat4 operator*(const mat4 other) const {
            mat4 toReturn;

            toReturn.r1.x = ((r1.x * other.r1.x) + (r1.y * other.r2.x)
                    + (r1.z * other.r3.x) + (r1.w * other.r4.x));
            toReturn.r1.y = ((r1.x * other.r1.y) + (r1.y * other.r2.y)
                    + (r1.z * other.r3.y) + (r1.w * other.r4.y));
            toReturn.r1.z = ((r1.x * other.r1.z) + (r1.y * other.r2.z)
                    + (r1.z * other.r3.z) + (r1.w * other.r4.z));
            toReturn.r1.w = ((r1.x * other.r1.w) + (r1.y * other.r2.w)
                    + (r1.z * other.r3.w) + (r1.w * other.r4.w));
            toReturn.r2.x = ((r2.x * other.r1.x) + (r2.y * other.r2.x)
                    + (r2.z * other.r3.x) + (r2.w * other.r4.x));
            toReturn.r2.y = ((r2.x * other.r1.y) + (r2.y * other.r2.y)
                    + (r2.z * other.r3.y) + (r2.w * other.r4.y));
            toReturn.r2.z = ((r2.x * other.r1.z) + (r2.y * other.r2.z)
                    + (r2.z * other.r3.z) + (r2.w * other.r4.z));
            toReturn.r2.w = ((r2.x * other.r1.w) + (r2.y * other.r2.w)
                    + (r2.z * other.r3.w) + (r2.w * other.r4.w));
            toReturn.r3.x = ((r3.x * other.r1.x) + (r3.y * other.r2.x)
                    + (r3.z * other.r3.x) + (r3.w * other.r4.x));
            toReturn.r3.y = ((r3.x * other.r1.y) + (r3.y * other.r2.y)
                    + (r3.z * other.r3.y) + (r3.w * other.r4.y));
            toReturn.r3.z = ((r3.x * other.r1.z) + (r3.y * other.r2.z)
                    + (r3.z * other.r3.z) + (r3.w * other.r4.z));
            toReturn.r3.w = ((r3.x * other.r1.w) + (r3.y * other.r2.w)
                    + (r3.z * other.r3.w) + (r3.w * other.r4.w));
            toReturn.r4.x = ((r4.x * other.r1.x) + (r4.y * other.r2.x)
                    + (r4.z * other.r3.x) + (r4.w * other.r4.x));
            toReturn.r4.y = ((r4.x * other.r1.y) + (r4.y * other.r2.y)
                    + (r4.z * other.r3.y) + (r4.w * other.r4.y));
            toReturn.r4.z = ((r4.x * other.r1.z) + (r4.y * other.r2.z)
                    + (r4.z * other.r3.z) + (r4.w * other.r4.z));
            toReturn.r4.w = ((r4.x * other.r1.w) + (r4.y * other.r2.w)
                    + (r4.z * other.r3.w) + (r4.w * other.r4.w));

            return toReturn;
        }

        // Relational Operators
        bool operator==(const mat4& other) const {
            return ((r1 == other.r1) && (r2 == other.r2) && (r3 == other.r3) && (r4 == other.r4));
        }

        bool operator!=(const mat4& other) const {
            return !(*this == other);
        }

        static mat4 Transpose(const mat4& mat);

        // TODO(Nils) other fun stuff you can do with matrices

        std::string ToString();

        vec4 r1;
        vec4 r2;
        vec4 r3;
        vec4 r4;

        // Static Mat4s
        static const mat4 ZERO;
        static const mat4 ONE;
        static const mat4 IDENTITY;
    };
}  // namespace TandenEngine

#endif  // TANDENENGINE_MATRIX4_H
