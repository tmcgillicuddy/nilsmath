//
// Created by thomas.mcgillicuddy on 12/8/2018.
//

#ifndef TANDENENGINE_COLOR_H
#define TANDENENGINE_COLOR_H

#include <iostream>

namespace TandenEngine {
    class Color {
    public:
        float r = 0.0,g = 0.0,b = 0.0,a = 0.0;
        Color(float red, float green, float blue, float alpha = 1){
            r = red;
            g = green;
            b = blue;
            a = alpha;
        };

        friend std::ostream & operator << (std::ostream &out, const Color &data);

        //Static colors
        static const Color RED;
        static const Color GREEN;
        static const Color BLUE;
        static const Color WHITE;
        static const Color BLACK;
        static const Color YELLOW;
        static const Color CYAN;
        static const Color MAGENTA;
    };
}

#endif //TANDENENGINE_COLOR_H
