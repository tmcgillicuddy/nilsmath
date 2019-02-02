//
// Created by thomas.mcgillicuddy on 2/2/2019.
//

#include "mat3.h"

namespace TandenEngine {

    const mat3 mat3::ZERO = mat3(0, 0, 0, 0, 0, 0, 0, 0, 0);
    const mat3 mat3::ONE = mat3(1, 1, 1, 1, 1, 1, 1, 1, 1);
    const mat3 mat3::IDENTITY = mat3(1, 0, 0, 0, 1, 0, 0, 0, 1);

    mat3::mat3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3)
    {
        r1.x = x1, r1.y = y1, r1.z = z1,
        r2.x = x2, r2.y = y2, r2.z = z2,
        r3.x = x3, r3.y = y3, r3.z = z3;
    }

    std::string mat3::ToString(){
        return "\n" + r1.ToString() + '\n' + r2.ToString() + '\n' + r3.ToString();
    }
}