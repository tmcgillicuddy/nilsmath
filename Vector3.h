//
// Created by thomas.mcgillicuddy on 10/31/2018.
//

#ifndef HWENGINE_VECTOR3_H
#define HWENGINE_VECTOR3_H

namespace TandenEngine {

	class Vector3 {
	public:
		Vector3();
		~Vector3();
		// iirc, i can default individual values to something if only some inputs are given, somehow
		Vector3(float setX, float setY, float setZ);

		// Get Members
		float GetX() { return x; };
		float GetY() { return y; };
		float GetZ() { return z; };
		
		// Set Members
		void SetX(float newVal) { x = newVal; };
		void SetY(float newVal) { y = newVal; };
		void SetZ(float newVal) { z = newVal; };

		// Vector Operations (dot and cross products are general, in NilsMath)
		Vector3 operator+(const Vector3& other);
		Vector3 operator*(const int& other);

	private:
		float x, y, z;
	};
    };

}

#endif //HWENGINE_VECTOR3_H
