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

        std::string ToString();

        // TODO: addition, multiplication, rotation?, inverse?

        vec3 r1;
        vec3 r2;
        vec3 r3;

    };
}

#endif //TANDENENGINE_MATRIX3_H
