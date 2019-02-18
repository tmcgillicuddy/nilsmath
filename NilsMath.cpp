//
// Created by thomas.mcgillicuddy on 10/22/2018.
//

#define _USE_MATH_DEFINES

#include "NilsMath.h"
#include <cmath>

namespace TandenEngine {

    const float PI = (float)M_PI;
    const float PI_2 = (float)M_PI_2;
    const float PI_4 = (float)M_PI_4;

    float NilsMath::Dot(const vec2& a, const vec2& b) {
        return ((a.x * b.x) + (a.y * b.y));
    }

    float NilsMath::Dot(const vec3& a, const vec3& b) {
        return ((a.x * b.x) + (a.y * b.y) + (a.z * b.z));
    }

    float NilsMath::Dot(const vec4& a, const vec4& b) {
        return ((a.x * b.x) + (a.y * b.y) + (a.z * b.z) + (a.w * b.w));
    }

    float NilsMath::Dist(const vec2& pos, const vec2& target) {
        vec2 diff = target - pos;
        return diff.Norm();
    }

    float NilsMath::Dist(const vec3& pos, const vec3& target) {
        vec3 diff = target - pos;
        return diff.Norm();
    }

    float NilsMath::Dist(const vec4& pos, const vec4& target) {
        vec4 diff = target - pos;
        return diff.Norm();
    }

    vec3 NilsMath::Cross(const vec3 &a, const vec3 &b) {
        vec3 toReturn;

        toReturn.x = (a.y * b.z) - (a.z * b.y);
        toReturn.y = (a.z * b.x) - (a.x * b.z);
        toReturn.z = (a.x * b.y) - (a.y * b.x);

        return toReturn;
    }
}  // namespace TandenEngine
