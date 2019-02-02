//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#include "vec4.h"
#include <string>

namespace TandenEngine {

    const vec4 vec4::ZERO = vec4(0,0,0,0);
    const vec4 vec4::ONE = vec4(1,1,1,1);

    std::ostream & operator << (std::ostream &out, const vec4 &data)
    {
        out << "X: " << data.x;
        out << " Y: " << data.y;
        out << " Z: " << data.z;
        out << " W: " << data.w << std::endl;
        return out;
    }

    float vec4::Norm(const TandenEngine::vec4 &vec) {
        return sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z + vec.w * vec.w);
    }

    float vec4::Distance(const vec4& pos, const vec4& target) {
        vec4 diff = target - pos;
        return Norm(diff);
    }

    float vec4::Dot(const vec4& a, const vec4& b) {
        return ((a.x * b.x) + (a.y * b.y) + (a.z * b.z) + (a.w * b.w));
    }

    std::string vec4::ToString() {
        return "X: " + std::to_string(x) + " Y: " + std::to_string(y) +
                " Z: " + std::to_string(z) + " W: " + std::to_string(w);
    }

}