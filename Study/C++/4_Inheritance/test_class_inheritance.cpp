#include <iostream>

using std::string;

class Car {
public:
	string car_name;
	string engine;
	void Show_c()
	{
		std::cout << "Name: " << car_name << ";\nEngine: " << engine << ";\n";
	}
};

class Competition_cars : public Car {
public:
	string power_structures;
	void Show()
	{
		Show_c();
		std::cout << "Power structures: " << power_structures << std::endl;
	}
};

class Old_cars : public Car {
public:
	short int numb_of_wheels;
	void Show()
	{
		Show_c();
		std::cout << "Nummber of wheels: " << numb_of_wheels << std::endl;
	}
};

int main()
{
	Competition_cars comptCar1;
	comptCar1.car_name = "Peugot 206 WRC";
	comptCar1.engine = "PSA XU9J4";
	comptCar1.power_structures = "Steel monocoque with roll-cage.";
	comptCar1.Show();
	std::cout << std::endl;
	Old_cars oldCar1;
	oldCar1.car_name = "Velorex";
	oldCar1.engine = "250-cc JWA motor";
	oldCar1.numb_of_wheels = 3;
	oldCar1.Show();
}