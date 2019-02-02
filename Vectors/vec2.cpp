//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#include "vec2.h"
#include <string>

namespace TandenEngine {

    const vec2 vec2::ZERO = vec2(0,0);
    const vec2 vec2::ONE = vec2(1,1);
    const vec2 vec2::UP = vec2(0,1);
    const vec2 vec2::DOWN = vec2(0,-1);
    const vec2 vec2::LEFT = vec2(-1,0);
    const vec2 vec2::RIGHT = vec2(1,0);

    std::ostream & operator << (std::ostream &out, const vec2 &data)
    {
        out << "X: " << data.x;
        out << " Y: " << data.y << std::endl;
        return out;
    }

    float vec2::Norm(const TandenEngine::vec2 &vec) {
        return sqrt(vec.x * vec.x + vec.y * vec.y);
    }

    float vec2::Distance(const vec2& pos, const vec2& target) {
        vec2 diff = target - pos;
        return Norm(diff);
    }

    float vec2::Dot(const vec2& a, const vec2& b) {
        return ((a.x * b.x) + (a.y * b.y));
    }

    std::string vec2::ToString(){
        return "X: " + std::to_string(x) + " Y: " + std::to_string(y);
    }

}