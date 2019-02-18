//
// Created by thomas.mcgillicuddy on 10/22/2018.
//

#ifndef HWENGINE_NILSMATH_H
#define HWENGINE_NILSMATH_H

#include "Vectors/vec2.h"
#include "Vectors/vec3.h"
#include "Vectors/vec4.h"
#include "Vectors/VectorHashing.h"
#include "Matrices/mat2.h"
#include "Matrices/mat3.h"
#include "Matrices/mat4.h"
#include "Color.h"

namespace TandenEngine {
    class NilsMath {
     public:
        static const float PI;
        static const float PI_2;
        static const float PI_4;

        static float Dot(const vec2& a, const vec2& b);
        static float Dot(const vec3& a, const vec3& b);
        static float Dot(const vec4& a, const vec4& b);

        static float Dist(const vec2& a, const vec2& b);
        static float Dist(const vec3& a, const vec3& b);
        static float Dist(const vec4& a, const vec4& b);

        static vec3 Cross(const vec3 &a, const vec3 &b);
        // TODO(Nils) angles between, figure out primitives, matrices, ???
    };
}  // namespace TandenEngine

#endif  // HWENGINE_NILSMATH_H
