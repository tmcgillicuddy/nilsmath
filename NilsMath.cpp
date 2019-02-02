//
// Created by thomas.mcgillicuddy on 10/22/2018.
//

#include "NilsMath.h"
#include <cmath>

namespace TandenEngine {

    float NilsMath::dot(TandenEngine::vec2 a, TandenEngine::vec2 b) {
        return (a.x * b.x + a.y * b.y);
    }

    float NilsMath::dot(TandenEngine::vec3 a, TandenEngine::vec3 b) {
        return (a.x * b.x + a.y * b.y + a.z + b.z);
    }


    float NilsMath::dot(TandenEngine::vec4 a, TandenEngine::vec4 b) {
        return (a.x * b.x + a.y * b.y + a.z + b.z + a.w + b.w);
    }


    float NilsMath::dist(TandenEngine::vec2 a, TandenEngine::vec2 b) {
        return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    }

    float NilsMath::dist(TandenEngine::vec3 a, TandenEngine::vec3 b) {
        return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
    }


    float NilsMath::dist(TandenEngine::vec4 a, TandenEngine::vec4 b) {
        return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2) + pow(a.w - b.w, 2));
    }



    float NilsMath::cross(TandenEngine::vec2 a, TandenEngine::vec2 b) {
        return float(a.x * b.y - b.x * a.y);
    }

    vec3 NilsMath::cross(TandenEngine::vec3 a, TandenEngine::vec3 b) {
        return vec3(a.y * b.z - b.y * a.z, a.x * b.z - b.x * a.z, a.x * b.y - b.x * a.y);
    }



}