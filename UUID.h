//
// Created by thomas.mcgillicuddy on 12/1/2018.
//

#ifndef TANDENENGINE_UUID_H
#define TANDENENGINE_UUID_H

#include <cstdint>

// Wraps the UUID generation and operations, used mainly for meta data tracking

struct UUID {
 public:
    uint8_t mUuid;
    UUID();
    static uint8_t GenerateUUID();
};

#endif  // TANDENENGINE_UUID_H
