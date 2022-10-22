#pragma once
#include <iostream>

class Car {

private:
	float fuel;
	float speed;
	int passengers;

public:
	Car();
	Car(float);
	~Car();
	void FillFuel(float);
	void Accelerate();
	void Brake();
	void AddPassengers(int);
	void Dashboard();
};
