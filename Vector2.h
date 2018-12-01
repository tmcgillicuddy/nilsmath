//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR2_H
#define HWENGINE_VECTOR2_H

namespace TandenEngine {

	class Vector2 {
	public:
		Vector2();
		~Vector2();
		// iirc, i can default individual values to something if only some inputs are given, somehow
		Vector2(float setX, float setY);

		// Get Members
		float GetX() { return x; };
		float GetY() { return y; };


		// Set Members
		void SetX(float newVal) { x = newVal; };
		void SetY(float newVal) { y = newVal; };


		// Vector Operations (dot and cross products are general, in NilsMath)
		Vector2 operator+(const Vector2& other);
		Vector2 operator*(const int& other);

	private:
		float x, y;
	};

}

#endif //HWENGINE_VECTOR2_H
