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

    float Vector3::Norm(const TandenEngine::Vector3 &vec) {
        return sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
    }

    std::ostream & operator << (std::ostream &out, const Vector3 &data)
    {
        out << "X: " << data.x;
        out << " Y: " << data.y;
        out << " Z: " << data.z << std::endl;
        return out;
    }

    float Vector3::Distance(const Vector3& pos, const Vector3& target) {
        float dist;
        float diffX = pos.x - target.x;
        float diffY = pos.y - target.y;
        float diffZ = pos.z - target.z;
        diffX = pow(diffX, 2);
        diffY = pow(diffY, 2);
        diffZ = pow(diffZ, 2);
        float total = diffX+diffY+diffZ;
        dist = sqrt(total);
        return dist;
    }

    float Vector3::Dot(const Vector3& a, const Vector3& b) {
        return ((a.x * b.x) + (a.y * b.y) + (a.z * b.z));
    }

}