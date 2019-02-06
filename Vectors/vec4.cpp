//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#include "vec4.h"
#include <string>

namespace TandenEngine {

    const vec4 vec4::ZERO = vec4(0, 0, 0, 0);
    const vec4 vec4::ONE = vec4(1, 1, 1, 1);

    std::ostream & operator << (std::ostream &out, const vec4 &data) {
        out << "X: " << data.x;
        out << " Y: " << data.y;
        out << " Z: " << data.z;
        out << " W: " << data.w << std::endl;
        return out;
    }

    float vec4::Norm() const {
        return sqrt(this->x * this->x + this->y * this->y
        + this->z * this->z + this->w * this->w);
    }

    float vec4::Distance(const vec4& other) const {
        vec4 diff = *this - other;
        return diff.Norm();
    }

    float vec4::Dot(const vec4& other) const {
        return ((this->x * other.x) + (this->y * other.y)
        + (this->z * other.z) + (this->w * other.w));
    }

    std::string vec4::ToString() {
        return "X: " + std::to_string(x) + " Y: " + std::to_string(y) +
                " Z: " + std::to_string(z) + " W: " + std::to_string(w);
    }

}  // namespace TandenEngine
