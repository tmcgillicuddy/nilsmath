//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#include "Vector3.h"
namespace TandenEngine {

    std::ostream & operator << (std::ostream &out, const Vector3 &data)
    {
        out << "X: " << data.x;
        out << " Y: " << data.y;
        out << " Z: " << data.z << std::endl;
        return out;
    }

}