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
        mat2(float x1, float y1, float x2, float y2);

        std::string ToString();



    };

}

#endif //TANDENENGINE_MAT2_H
