//
// Created by thomas.mcgillicuddy on 10/22/2018.
//

#ifndef HWENGINE_NILSMATH_H
#define HWENGINE_NILSMATH_H

#include "Vectors/Vector2.h"
#include "Vectors/Vector3.h"
#include "Vectors/Vector4.h"
#include "Matrix3.h"
#include "Matrix4.h"
#include "Color.h"

namespace TandenEngine {

    class NilsMath {

        // Ask Sajid if I can do this better
        static float dot(Vector2 a, Vector2 b);
        static float dot(Vector3 a, Vector3 b);
        static float dot(Vector4 a, Vector4 b);

        static float dist(Vector2 a, Vector2 b);
        static float dist(Vector3 a, Vector3 b);
        static float dist(Vector4 a, Vector4 b);

        static float cross(Vector2 a, Vector2 b);
        static Vector3 cross(Vector3 a, Vector3 b);

    public:
        // TODO: angles between, figure out primitives, matrices, ???

    };

}

#endif //HWENGINE_NILSMATH_H
