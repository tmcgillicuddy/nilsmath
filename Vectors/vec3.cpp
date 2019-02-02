//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#include "vec3.h"
#include <string>

namespace TandenEngine {

    const vec3 vec3::ZERO = vec3(0,0,0);
    const vec3 vec3::ONE = vec3(1,1,1);
    const vec3 vec3::UP = vec3(0,1,0);
    const vec3 vec3::DOWN = vec3(0,-1,0);
    const vec3 vec3::LEFT = vec3(-1,0,0);
    const vec3 vec3::RIGHT = vec3(1,0,0);
    const vec3 vec3::FORWARD = vec3(0,0,1);
    const vec3 vec3::BACKWARD = vec3(0,0,-1);

    std::ostream & operator << (std::ostream &out, const vec3 &data)
    {
        out << "X: " << data.x;
        out << " Y: " << data.y;
        out << " Z: " << data.z << std::endl;
        return out;
    }

    float vec3::Norm(const TandenEngine::vec3 &vec) {
        return sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
    }

    float vec3::Distance(const vec3& pos, const vec3& target) {
        vec3 diff = target - pos;
        return Norm(diff);
    }

    float vec3::Dot(const vec3& a, const vec3& b) {
        return ((a.x * b.x) + (a.y * b.y) + (a.z * b.z));
    }

    std::string vec3::ToString() {
        return  "X: " + std::to_string(x) + " Y: " + std::to_string(y) + " Z: " + std::to_string(z);
    }

}