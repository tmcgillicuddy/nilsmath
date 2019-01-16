//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#include "Vector4.h"

namespace TandenEngine {
    std::ostream & operator << (std::ostream &out, const Vector4 &data)
    {
        out << "X: " << data.x;
        out << " Y: " << data.y;
        out << " Z: " << data.z;
        out << " W: " << data.w << std::endl;
        return out;
    }

    float dot(const Vector4& a, const Vector4& b) {
        return ((a.x * b.x) + (a.y * b.y) + (a.z * b.z) + (a.w * b.w));
    }

    Vector4 hadamard(const Vector4& a, const Vector4& b) {
        Vector4 toReturn;
        toReturn.x = a.x * b.x;
        toReturn.y = a.y * b.y;
        toReturn.z = a.z * b.z;
        toReturn.w = a.w * b.w;
        return toReturn;
    }
}