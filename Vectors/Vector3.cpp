//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#include "Vector3.h"
namespace TandenEngine {

    const Vector3 Vector3::ZERO = Vector3(0,0,0);
    const Vector3 Vector3::ONE = Vector3(1,1,1);
    const Vector3 Vector3::UP = Vector3(0,1,0);
    const Vector3 Vector3::DOWN = Vector3(0,-1,0);
    const Vector3 Vector3::LEFT = Vector3(-1,0,0);
    const Vector3 Vector3::RIGHT = Vector3(1,0,0);
    const Vector3 Vector3::FORWARD = Vector3(0,0,1);
    const Vector3 Vector3::BACKWARD = Vector3(0,0,-1);

    std::ostream & operator << (std::ostream &out, const Vector3 &data)
    {
        out << "X: " << data.x;
        out << " Y: " << data.y;
        out << " Z: " << data.z << std::endl;
        return out;
    }

}