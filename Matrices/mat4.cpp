//
// Created by thomas.mcgillicuddy on 2/2/2019.
//

#include "mat4.h"

namespace TandenEngine {

    const mat4 mat4::ZERO = mat4(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    const mat4 mat4::ONE = mat4(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    const mat4 mat4::IDENTITY = mat4(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);

    mat4::mat4(float x1, float y1, float z1, float w1, float x2, float y2, float z2, float w2, float x3, float y3,
               float z3, float w3, float x4, float y4, float z4, float w4) {
        r1.x = x1, r1.y = y1, r1.z = z1, r1.w = w1,
        r2.x = x2, r2.y = y2, r2.z = z2, r2.w = w2,
        r3.x = x3, r3.y = y3, r3.z = z3, r3.w = w3,
        r4.x = x4, r4.y = y4, r4.z = z4, r4.w = w4;
    }

    mat4 mat4::Transpose(const mat4& mat) {
        mat4 toReturn;

        toReturn.r1.x = mat.r1.x; toReturn.r1.y = mat.r2.x; toReturn.r1.z = mat.r3.x; toReturn.r1.w = mat.r4.x;
        toReturn.r2.x = mat.r1.y; toReturn.r2.y = mat.r2.y; toReturn.r2.z = mat.r3.y; toReturn.r2.w = mat.r4.y;
        toReturn.r3.x = mat.r1.z; toReturn.r3.y = mat.r2.z; toReturn.r3.z = mat.r3.z; toReturn.r3.w = mat.r4.z;
        toReturn.r4.x = mat.r1.w; toReturn.r4.y = mat.r2.w; toReturn.r4.z = mat.r3.w; toReturn.r4.w = mat.r4.w;

        return toReturn;
    }

    std::string mat4::ToString() {
        return "\n" + r1.ToString() + '\n' + r2.ToString() + '\n' + r3.ToString() + '\n' + r4.ToString();
    }
}