//
// Created by nils.steinbuegl on 12/2/2018.
//

#ifndef TANDENENGINE_MATRIX4_H
#define TANDENENGINE_MATRIX4_H

#include "Vector4.h"


namespace TandenEngine {

        struct mat4 {
        mat4() {};
        ~mat4() {};
        mat4(float x1, float y1, float z1, float w1, float x2, float y2, float z2, float w2, float x3, float y3, float z3, float w3, float x4, float y4, float z4, float w4) {
            r1.x = x1, r1.y = y1, r1.z = z1, r1.w = w1,
            r2.x = x2, r2.y = y2, r2.z = z2, r2.w = w2,
            r3.x = x3, r3.y = y3, r3.z = z3, r3.w = w3,
            r4.x = x4, r4.y = y4, r4.z = z4, r4.w = w4;
        };

        Vector4 r1;
        Vector4 r2;
        Vector4 r3;
        Vector4 r4;

    };

}


#endif //TANDENENGINE_MATRIX4_H
