//
// Created by thomas.mcgillicuddy on 2/2/2019.
//

#ifndef TANDENENGINE_MAT2_H
#define TANDENENGINE_MAT2_H

#include "Vectors/vec2.h"

namespace TandenEngine {

    struct mat2 {
        vec2 r1, r2;

        mat2(){};
        ~mat2() {};
        mat2(float x1, float y1, float x2, float y2);


        // Matrix + Matrix
        mat2& operator+=(const mat2& other) {
            r1 += other.r1;
            r2 += other.r2;

            return *this;
        }

        mat2 operator+(const mat2& other) const {
            mat2 toReturn;

            toReturn.r1 = r1 + other.r1;
            toReturn.r2 = r2 + other.r2;

            return toReturn;
        }

        // Matrix + Scalar
        mat2& operator+=(const float other) {
            r1 += other;
            r2 += other;

            return *this;
        }

        mat2 operator+(const float other) const {
            mat2 toReturn;

            toReturn.r1 = r1 + other;
            toReturn.r2 = r2 + other;

            return toReturn;
        }

        // Matrix - Matrix
        mat2& operator-=(const mat2& other) {
            r1 -= other.r1;
            r2 -= other.r2;

            return *this;
        }

        mat2 operator-(const mat2& other) const {
            mat2 toReturn;

            toReturn.r1 = r1 - other.r1;
            toReturn.r2 = r2 - other.r2;

            return toReturn;
        }

        // Matrix - Scalar
        mat2& operator-=(const float other) {
            r1 -= other;
            r2 -= other;

            return *this;
        }

        mat2 operator-(const float other) const {
            mat2 toReturn;

            toReturn.r1 = r1 - other;
            toReturn.r2 = r2 - other;

            return toReturn;
        }

        // Matrix * Scalar
        mat2& operator*=(const float other) {
            r1 *= other;
            r2 *= other;

            return *this;
        }

        mat2 operator*(const float other) const {
            mat2 toReturn;

            toReturn.r1 = r1 * other;
            toReturn.r2 = r2 * other;

            return toReturn;
        }

        // Matrix * Matrix
        mat2& operator*=(const mat2 other) {
            mat2 temp;

            temp.r1.x = ((r1.x * other.r1.x) + (r1.y * other.r2.x));
            temp.r1.y = ((r1.x * other.r1.y) + (r1.y * other.r2.y));
            temp.r2.x = ((r2.x * other.r1.x) + (r2.y * other.r2.x));
            temp.r2.y = ((r2.x * other.r1.y) + (r2.y * other.r2.y));


            *this = temp;
            return* this;
        }

        mat2 operator*(const mat2 other) const {
            mat2 toReturn;

            toReturn.r1.x = ((r1.x * other.r1.x) + (r1.y * other.r2.x));
            toReturn.r1.y = ((r1.x * other.r1.y) + (r1.y * other.r2.y));
            toReturn.r2.x = ((r2.x * other.r1.x) + (r2.y * other.r2.x));
            toReturn.r2.y = ((r2.x * other.r1.y) + (r2.y * other.r2.y));

            return toReturn;
        }

        // Relational Operators
        bool operator==(const mat2& other) const {
            return ((r1 == other.r1) && (r2 == other.r2));
        }

        bool operator!=(const mat2& other) const {
            return !(*this == other);
        }

        static mat2 Transpose(const mat2& mat);

        std::string ToString();


        static const mat2 ZERO;
        static const mat2 ONE;
        static const mat2 IDENTITY;

    };

}

#endif //TANDENENGINE_MAT2_H
