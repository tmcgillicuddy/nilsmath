//
// Created by nils.steinbuegl on 12/2/2018.
//

#ifndef TANDENENGINE_MATRIX4_H
#define TANDENENGINE_MATRIX4_H

#include "Vectors/vec4.h"

//TODO add cpp

namespace TandenEngine {

        struct mat4 {
        mat4() {};
        ~mat4() {};
        mat4(float x1, float y1, float z1, float w1, float x2, float y2, float z2, float w2, float x3, float y3, float z3, float w3, float x4, float y4, float z4, float w4);

        std::string ToString();

        vec4 r1;
        vec4 r2;
        vec4 r3;
        vec4 r4;

    };

}


#endif //TANDENENGINE_MATRIX4_H
