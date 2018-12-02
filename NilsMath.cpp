//
// Created by thomas.mcgillicuddy on 10/22/2018.
//

#include "NilsMath.h"
namespace TandenEngine {

    float NilsMath::dot(TandenEngine::Vector2 a, TandenEngine::Vector2 b) {
        return (a.x * b.x + a.y * b.y);
    }

    float NilsMath::dot(TandenEngine::Vector3 a, TandenEngine::Vector3 b) {
        return (a.x * b.x + a.y * b.y + a.z + b.z);
    }

    /*
    float NilsMath::dot(TandenEngine::Vector4 a, TandenEngine::Vector4 b) {
        return (a.x * b.x + a.y * b.y + a.z + b.z + a.w + b.w);
    }
    */

    float NilsMath::dist(TandenEngine::Vector2 a, TandenEngine::Vector2 b) {
        return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    }

    float NilsMath::dist(TandenEngine::Vector3 a, TandenEngine::Vector3 b) {
        return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
    }

    /*
    float NilsMath::dist(TandenEngine::Vector4 a, TandenEngine::Vector4 b) {
        return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2) + pow(a.w - b.w, 2));
    }
    */


    float NilsMath::cross(TandenEngine::Vector2 a, TandenEngine::Vector2 b) {
        return float(a.x * b.y - b.x * a.y);
    }

    Vector3 NilsMath::cross(TandenEngine::Vector3 a, TandenEngine::Vector3 b) {
        return Vector3(a.y * b.z - b.y * a.z, a.x * b.z - b.x * a.z, a.x * b.y - b.x * a.y);
    }

}