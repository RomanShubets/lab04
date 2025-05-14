#pragma once

#include <iostream>
#include <Windows.h>
#pragma execution_character_set("utf-8")

using namespace std;

class Transport
{
private:
	int wheels;
	string speed;
	string price;

public:
	int setWheels(int num_wheels);
	int setSpeed(string set_speed);
	int setPrice(string set_price);

protected:
	int createTransport();
};

class Water:Transport {
public:
	Water() {
		int water = setWheels(0);
		water = setSpeed("повільний");
		water = setPrice("дешевий");
		water = createTransport();
	}
};

class Air:Transport {
public:
	Air() {
		int air = setWheels(3);
		air = setSpeed("швидкий");
		air = setPrice("дорогий");
		air = createTransport();
	}
};

class Ground:Transport {
public:
	Ground() {
		int ground = setWheels(4);
		ground = setSpeed("середньої швидкості");
		ground = setPrice("недорогий");
		ground = createTransport();
	}
};

class Ship :Water {
private:
	string size;
	string kind;
public:
	int setSize(string set_size);
	int setKind(string set_kind);
	Ship(string set_size, string set_kind) {
		int a = setSize(set_size);
		a = setKind(set_kind);
		cout << "Це " << size << " корабель, який є " << kind << " за призначенням";
	}

};

class Militarywater:Water{
public:
	Militarywater() {
		cout << "Використовується у воєнних цілях.\n";
	}
};

class Submarine :Militarywater {
private:
	string kind;
public:
	int setKind(string set_kind);
	Submarine(string set_kind) {
		int a = setKind(set_kind);
		cout << "Це підводний човен " << kind << " виду";
	}
};

class Cruiser :Militarywater {
private:
	string country;
	int rockets;
public:
	int setCountry(string set_country);
	int setRockets(int num_rockets);
	Cruiser(string set_country, int num_rockets) {
		int a = setCountry(set_country);
		a = setRockets(num_rockets);
		cout << "це Крейсер з країни " << country << " і має на борту " << rockets << " ракет\n";
	}

};

class Plane :Air {
private:
	string kind;
	string size;
	string color;
public:
	int setKind(string set_kind);
	int setSize(string set_size);
	int setColor(string set_color);
	Plane(string set_kind, string set_size, string set_color) {
		int a = setKind(set_kind);
		a = setSize(set_size);
		a = setColor(set_color);
		cout << "Літак " << kind << " за розміром " << size << " i " << color << "\n";
	}
};

class Helicopter:Air{
private:
	string color;
public:
	int setColor(string set_color);
	Helicopter(string set_color) {
		int a = setColor(set_color);
		cout << "Це " << color << " гелікоптер\n";
	}
};

class AirBallon:Air{
private:
	string color;
public:
	int setColor(string set_color);
	AirBallon(string set_color) {
		int a = setColor(set_color);
		cout << "Це " << color << " повітряна куля\n";
	}
};

class Militaryair:Air{
public:
	Militaryair() {
		cout << "Використовується у воєнних цілях.\n";
	}
};

class Truck:Ground{
private:
	string color;
	string size;
	string cargo;
public:
	int setColor(string set_color);
	int setSize(string set_size);
	int setCargo(string set_cargo);
	Truck(string set_color, string set_size, string set_cargo) {
		int a = setColor(set_color);
		a = setSize(set_size);
		a = setCargo(set_cargo);
		cout << "Це вантажна машина " << color << " кольору та є " << size << " за розміром. Перевозить у собі " << cargo << "\n";
	}
};

class Car :Ground {
public:
	Car() {
		cout << "Це не вантажна машина\n";
	}
};

class Train:Ground{
private:
	string kind;
	int length;
public:
	int setKind(string set_kind);
	int setLength(int num_vagon);
	Train(string set_kind, int num_vagon) {
		int a = setKind(set_kind);
		a = setLength(num_vagon);
		cout << "Це " << kind << " потяг, у якому є " << length << " вагонів\n";
	}

};

class Militaryground:Ground{
public:
	Militaryground() {
		cout << "Використовується у воєнних цілях.\n";
	}
};

class Electrocar:Car{
public:
	Electrocar() {
		cout << "Це електрокар, що працює на електриці\n";
	}
};

class Fuelcar:Car{
public:
	Fuelcar() {
		cout << "Це машина, що працює на бензині\n";
	}
};

class Tesla:Electrocar{
private:
	string color;
	string model;
public:
	int setColor(string set_color);
	int setModel(string set_model);
	Tesla(string set_model, string set_color){
		int a = setModel(set_model);
		a = setColor(set_color);
		cout << "Це Tesla " << model << " , яка пофарбована в " << color << " колір. Теслу заснував Ілон Макс.\n";
	}
};

class Ford:Fuelcar{
private:
	string color;
	string model;
public:
	int setColor(string set_color);
	int setModel(string set_model);
	Ford(string set_model, string set_color) {
		int a = setModel(set_model);
		a = setColor(set_color);
		cout << "Це Ford " << model << " , яка пофарбована в " << color << " колір. Компанію Ford заснував Генрі Форд у 1903 році\n";
	}
};

class Jeep:Fuelcar{
private:
	string color;
	string model;
public:
	int setColor(string set_color);
	int setModel(string set_model);
	Jeep(string set_model, string set_color) {
		int a = setModel(set_model);
		a = setColor(set_color);
		cout << "Це Jeep " << model << " , яка пофарбована в " << color << " колір. Є позашляховиком\n";
	}
};

class Warplane:Militaryair{
private:
	string country;
	string model;
	string function;
public:
	int setCountry(string set_country);
	int setModel(string set_model);
	int setFunc(string set_func);
	Warplane(string set_country, string set_model, string set_func) {
		int a = setCountry(set_country);
		a = setModel(set_model);
		a = setFunc(set_func);
		cout << "Це військовий літак " << model << " що знаходиться на озброєнні в " << country << " та виконує " << function << " функцію.\n ";
	}
};

class WarHelicopter :Militaryair {
private:
	string country;
	string model;
	string function;
public:
	int setCountry(string set_country);
	int setModel(string set_model);
	int setFunc(string set_func);
	WarHelicopter(string set_country, string set_model, string set_func) {
		int a = setCountry(set_country);
		a = setModel(set_model);
		a = setFunc(set_func);
		cout << "Це військовий вертоліт " << model << " що знаходиться на озброєнні в " << country << " та виконує " << function << " функцію.\n ";
	}
};

class Tank:Militaryground {
private:
	string country;
	string model;
	string color;
public:
	int setCountry(string set_country);
	int setModel(string set_model);
	int setColor(string set_color);
	Tank(string set_country, string set_model, string set_color) {
		int a = setCountry(set_country);
		a = setModel(set_model);
		a = setColor(set_color);
		cout << "Це танк " << model << " що знаходиться на озброєнні в " << country << " та пофарбований у " << color << " колір\n";
	}
};

class BTR:Militaryground{
private:
	string country;
	string model;
	string color;
public:
	int setCountry(string set_country);
	int setModel(string set_model);
	int setColor(string set_color);
	BTR(string set_country, string set_model, string set_color) {
		int a = setCountry(set_country);
		a = setModel(set_model);
		a = setColor(set_color);
		cout << "Це БТР " << model << " що знаходиться на озброєнні в " << country << " та пофарбований у " << color << " колір\n";
	}
};
