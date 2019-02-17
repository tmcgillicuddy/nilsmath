//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#include "vec3.h"
#include <string>

namespace TandenEngine {

    const vec3 vec3::ZERO = vec3(0, 0, 0);
    const vec3 vec3::ONE = vec3(1, 1, 1);
    const vec3 vec3::UP = vec3(0, 1, 0);
    const vec3 vec3::DOWN = vec3(0, -1, 0);
    const vec3 vec3::LEFT = vec3(-1, 0, 0);
    const vec3 vec3::RIGHT = vec3(1, 0, 0);
    const vec3 vec3::FORWARD = vec3(0, 0, 1);
    const vec3 vec3::BACKWARD = vec3(0, 0, -1);

    std::ostream & operator << (std::ostream &out, const vec3 &data) {
        out << "X: " << data.x;
        out << " Y: " << data.y;
        out << " Z: " << data.z << std::endl;
        return out;
    }

    float vec3::Norm() const {
        return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
    }

    vec3 vec3::Normalize() {
        return *this / this->Norm();
    }

    float vec3::Distance(const vec3& other) const {
        vec3 diff = *this - other;
        return diff.Norm();
    }

    float vec3::Dot(const vec3& other) const {
        return ((this->x * other.x) + (this->y * other.y) + (this->z * other.z));
    }

    vec3 vec3::Cross(const vec3 &other) const {
        vec3 toReturn;

        toReturn.x = (this->y * other.z) - (this->z * other.y);
        toReturn.y = (this->z * other.x) - (this->x * other.z);
        toReturn.z = (this->x * other.y) - (this->y * other.x);

        return toReturn;
    }


    std::string vec3::ToString() {
        return  "X: " + std::to_string(x) + " Y: " + std::to_string(y) + " Z: " + std::to_string(z);
    }

}  // namespace TandenEngine
