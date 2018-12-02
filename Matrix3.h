//
// Created by nils.steinbuegl on 12/2/2018.
//

#ifndef TANDENENGINE_MATRIX3_H
#define TANDENENGINE_MATRIX3_H

#include "Vector3.h"
#include "NilsMath.h"

namespace TandenEngine {

    struct mat3 {
        mat3();
        ~mat3();
        mat3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) {
            r1.x = x1, r1.y = y1, r1.z = z1,
            r2.x = x2, r2.y = y2, r2.z = z2,
            r3.x = x3, r3.y = y3, r3.z = z3;
        };

        Vector3 r1;
        Vector3 r2;
        Vector3 r3;


    };


}

#endif //TANDENENGINE_MATRIX3_H
