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
}