//
// Created by thomas.mcgillicuddy on 2/2/2019.
//

#include "mat2.h"

namespace TandenEngine {
    const mat2 mat2::ZERO = mat2(0, 0, 0, 0);
    const mat2 mat2::ONE = mat2(1, 1, 1, 1);
    const mat2 mat2::IDENTITY = mat2(1, 0, 0, 1);

    mat2::mat2(float x1, float y1, float x2, float y2) {
        r1.x = x1, r1.y = y1,
        r2.x = x2, r2.y = y2;
    }

    mat2 mat2::Transpose(const mat2& mat) {
        mat2 toReturn;

        toReturn.r1.x = mat.r1.x; toReturn.r1.y = mat.r2.x;
        toReturn.r2.x = mat.r1.y; toReturn.r2.y = mat.r2.y;

        return toReturn;
    }

    std::string mat2::ToString() {
        return "\n" + r1.ToString() + '\n' + r2.ToString();
    }
}  // namespace TandenEngine
