//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#include "Vector2.h"

namespace TandenEngine {
    std::ostream & operator << (std::ostream &out, const Vector2 &data)
    {
        out << "X: " << data.x;
        out << " Y: " << data.y << std::endl;
        return out;
    }
}