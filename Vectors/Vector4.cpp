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
}