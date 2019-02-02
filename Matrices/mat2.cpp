//
// Created by thomas.mcgillicuddy on 2/2/2019.
//

#include "mat2.h"

namespace TandenEngine {

    mat2::mat2(float x1, float y1, float x2, float y2) {
        r1.x = x1, r1.y = y1,
        r2.x = x2, r2.y = y2;
    }

    std::string mat2::ToString() {
        return "\n" + r1.ToString() + '\n' + r2.ToString();
    }

}