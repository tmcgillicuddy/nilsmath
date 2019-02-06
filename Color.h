//
// Created by thomas.mcgillicuddy on 12/8/2018.
//

#ifndef TANDENENGINE_COLOR_H
#define TANDENENGINE_COLOR_H

#include <iostream>

namespace TandenEngine {
    class Color {
     private:
        static int HexadecimalToDecimal(std::string hex);
        static bool HSLTest1(float value);
        static bool HSLTest2(float value);
        static bool HSLTest3(float value);

     public:
        float r = 0.0, g = 0.0, b = 0.0, a = 0.0;
        // Default color constructor that take sin rgba data
        Color(float red, float green, float blue, float alpha = 1);

        Color(std::string hexCode);  // Create color using hexcode input

        static Color ColorHSL(float h, float s, float l);  // Create color using HSL input

        friend std::ostream & operator << (std::ostream &out, const Color &data);

        // Static colors
        static const Color RED;
        static const Color GREEN;
        static const Color BLUE;
        static const Color WHITE;
        static const Color BLACK;
        static const Color YELLOW;
        static const Color CYAN;
        static const Color MAGENTA;
    };
}  // namespace TandenEngine

#endif  // TANDENENGINE_COLOR_H
