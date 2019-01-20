//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#include "Vector4.h"

namespace TandenEngine {

    const Vector4 Vector4::ZERO = Vector4(0,0,0,0);
    const Vector4 Vector4::ONE = Vector4(1,1,1,1);

    std::ostream & operator << (std::ostream &out, const Vector4 &data)
    {
        out << "X: " << data.x;
        out << " Y: " << data.y;
        out << " Z: " << data.z;
        out << " W: " << data.w << std::endl;
        return out;
    }

    float Vector4::Norm(const TandenEngine::Vector4 &vec) {
        return sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z + vec.w * vec.w);
    }

    float Vector4::Distance(const Vector4& pos, const Vector4& target) {
        Vector4 diff = target - pos;
        return Norm(diff);
    }

    float Vector4::Dot(const Vector4& a, const Vector4& b) {
        return ((a.x * b.x) + (a.y * b.y) + (a.z * b.z) + (a.w * b.w));
    }

}