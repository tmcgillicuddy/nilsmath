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

        // Ask Sajid if I can do this better
        static float dot(vec2 a, vec2 b);
        static float dot(vec3 a, vec3 b);
        static float dot(vec4 a, vec4 b);

        static float dist(vec2 a, vec2 b);
        static float dist(vec3 a, vec3 b);
        static float dist(vec4 a, vec4 b);

        static float cross(vec2 a, vec2 b);
        static vec3 cross(vec3 a, vec3 b);

    public:
        // TODO: angles between, figure out primitives, matrices, ???

    };

}

#endif //HWENGINE_NILSMATH_H
