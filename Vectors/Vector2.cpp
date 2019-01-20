//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#include "Vector2.h"

namespace TandenEngine {

    const Vector2 Vector2::ZERO = Vector2(0,0);
    const Vector2 Vector2::ONE = Vector2(1,1);
    const Vector2 Vector2::UP = Vector2(0,1);
    const Vector2 Vector2::DOWN = Vector2(0,-1);
    const Vector2 Vector2::LEFT = Vector2(-1,0);
    const Vector2 Vector2::RIGHT = Vector2(1,0);

    std::ostream & operator << (std::ostream &out, const Vector2 &data)
    {
        out << "X: " << data.x;
        out << " Y: " << data.y << std::endl;
        return out;
    }

    float Vector2::Norm(const TandenEngine::Vector2 &vec) {
        return sqrt(vec.x * vec.x + vec.y * vec.y);
    }

    float Vector2::Distance(const Vector2& pos, const Vector2& target) {
        Vector2 diff = target - pos;
        return Norm(diff);
    }

    float Vector2::Dot(const Vector2& a, const Vector2& b) {
        return ((a.x * b.x) + (a.y * b.y));
    }

}