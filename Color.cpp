//
// Created by thomas.mcgillicuddy on 12/8/2018.
//

#include "Color.h"

namespace TandenEngine {

    const Color Color::RED = Color(1,0,0);
    const Color Color::GREEN = Color(0,1,0);
    const Color Color::BLUE = Color(0,0,1);
    const Color Color::WHITE = Color(1,1,1);
    const Color Color::BLACK = Color(0,0,0);
    const Color Color::YELLOW = Color(1,1,0);
    const Color Color::CYAN = Color(0,1,1);
    const Color Color::MAGENTA = Color(1,0,1);

    std::ostream & operator << (std::ostream &out, const Color &data)
    {
        out << "R: " << data.r;
        out << " G: " << data.g;
        out << " B: " << data.b;
        out << " A: " << data.a << std::endl;
        return out;
    }

    Color::Color(std::string hexCode)
    {
        {
            if (hexCode[0] == '#')
                hexCode = hexCode.erase(0, 1);

            int base255r = HexadecimalToDecimal(hexCode.substr(0, 2));
            int base255g = HexadecimalToDecimal(hexCode.substr(2, 2));
            int base255b = HexadecimalToDecimal(hexCode.substr(4, 2));

            r = float(base255r/255);
            g = float(base255g/255);
            b = float(base255b/255);
        }
    }

    int Color::HexadecimalToDecimal(std::string hex)
    {
        int hexLength = hex.length();
        double dec = 0;

        for (int i = 0; i < hexLength; ++i)
        {
            char b = hex[i];

            if (b >= 48 && b <= 57)
            b -= 48;
            else if (b >= 65 && b <= 70)
            b -= 55;

            dec += b * pow(16, ((hexLength - i) - 1));
        }

        return (int)dec;
    }

    Color::Color(float red, float green, float blue, float alpha) {
            r = red;
            g = green;
            b = blue;
            a = alpha;
    }

    Color Color::ColorHSL(float h, float s, float l)
    {
        Color col = Color::WHITE;
        if(s > 0) {
            float lumTemp1;

            if ((l / 100) < 0.5) {
                lumTemp1 = (l / 100) * (1.0f + (s / 100));
            } else {
                lumTemp1 = (l / 100) + (s / 100) - (l / 100) * (s / 100);
            }


            float lumTemp2 = 2 * (l / 100) - lumTemp1;

            float hueTemp = h / 360;

            //Calculate rgb values
            float tempR, tempG, tempB;

            tempR = hueTemp + 0.333f;
            tempG = hueTemp;
            tempB = hueTemp - 0.333f;

            //Wrap values
            if (tempR > 1) tempR -= 1;
            else if (tempR < 0) tempR += 1;

            if (tempG > 1) tempG -= 1;
            else if (tempG < 0) tempG += 1;

            if (tempB > 1) tempB -= 1;
            else if (tempB < 0) tempB += 1;

            //Test values
            if(HSLTest1(tempR)) {
                tempR = lumTemp2 + (lumTemp1 - lumTemp2) * 6 * tempR;
            } else if(HSLTest2(tempR)) {
                tempR = lumTemp1;
            } else if(HSLTest3(tempR)) {
                tempR = lumTemp2 + (lumTemp1 - lumTemp2) * (0.666f - tempR) * 6;
            }

            col = Color(tempR, tempG, tempB);
        }
        else //Gray scale color
        {
            float tempGray = (l/100) * 255;
            col = Color(tempGray, tempGray, tempGray);
        }

        return col;
    }

    bool Color::HSLTest1(float value) {
        return (6*value < 1);
    }

    bool Color::HSLTest2(float value) {
        return (2*value < 1);
    }

    bool Color::HSLTest3(float value) {
        return (3*value < 2);
    }
}