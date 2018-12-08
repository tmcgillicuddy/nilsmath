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

}