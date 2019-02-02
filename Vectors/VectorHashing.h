//
// Created by thomas.mcgillicuddy on 2/2/2019.
//

#ifndef TANDENENGINE_VECTORHASHING_H
#define TANDENENGINE_VECTORHASHING_H

#include "vec2.h"
#include "vec3.h"

namespace std {
    template<>
    struct std::hash<::TandenEngine::vec3> {
        size_t operator()(::TandenEngine::vec3 const &vector) const {
            return ((std::hash<float>()(vector.x) ^
                     (std::hash<float>()(vector.y) << 1)) >> 1) ^
                   (std::hash<float>()(vector.z) << 1);
        }
    };

    template<> struct ::std::hash<::TandenEngine::vec2> {
        size_t operator()(::TandenEngine::vec2 const &vector) const {
            return ((::std::hash<float>()(vector.x) ^
                     (::std::hash<float>()(vector.y) << 1)) >> 1);
        }
    };
}

#endif //TANDENENGINE_VECTORHASHING_H
