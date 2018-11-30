//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR3_H
#define HWENGINE_VECTOR3_H

namespace TandenEngine {

	class Vector4 {
	public:
		Vector4();
		~Vector4();
		// iirc, i can default individual values to something if only some inputs are given, somehow
		Vector4(float setX, float setY, float setZ, float setW);

		// Get Members
		float GetX() { return x; };
		float GetY() { return y; };
		float GetZ() { return z; };
		float GetW() { return w; };

		// Set Members
		void SetX(float newVal) { x = newVal; };
		void SetY(float newVal) { y = newVal; };
		void SetZ(float newVal) { z = newVal; };
		void SetW(float newVal) { w = newVal; };

		// Vector Operations (dot and cross products are general, in NilsMath)
		Vector4 operator+(const Vector4& other);
		Vector4 operator*(const int& other);

	private:
		float x, y, z, w;
	};

}

#endif //HWENGINE_VECTOR3_H
