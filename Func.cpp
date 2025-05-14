#include "Func.h"

int Transport::setWheels(int num_wheels) {
	wheels = num_wheels;
	return 1;
}

int Transport::setSpeed(string set_speed) {
	speed = set_speed;
	return 1;
}

int Transport::setPrice(string set_price) {
	price = set_price;
	return 1;
}

int Transport::createTransport() {
	cout << "Має " << wheels << " коліс та є " << speed << "\n";
	cout << "Є " << price << " вид транспорту\n";
	return 1;
}

int Ship::setSize(string set_size) {
	size = set_size;
	return 1;
}

int Ship::setKind(string set_kind) {
	kind = set_kind;
	return 1;
}

int Submarine::setKind(string set_kind) {
	kind = set_kind;
	return 1;
}

int Cruiser::setCountry(string set_country) {
	country = set_country;
	return 1;
}

int Cruiser::setRockets(int num_rockets) {
	rockets = num_rockets;
	return 1;
}

int Plane::setKind(string set_kind) {
	kind = set_kind;
	return 1;
}

int Plane::setSize(string set_size) {
	size = set_size;
	return 1;
}

int Plane::setColor(string set_color) {
	color = set_color;
	return 1;
}

int Helicopter::setColor(string set_color) {
	color = set_color;
	return 1;
}

int AirBallon::setColor(string set_color) {
	color = set_color;
	return 1;
}

int Truck::setColor(string set_color) {
	color = set_color;
	return 1;
}

int Truck::setSize(string set_size) {
	size = set_size;
	return 1;
}

int Truck::setCargo(string set_cargo) {
	cargo = set_cargo;
	return 1;
}

int Train::setKind(string set_kind) {
	kind = set_kind;
	return 1;
}

int Train::setLength(int num_vagon) {
	length = num_vagon;
	return 1;
}

int Tesla::setColor(string set_color) {
	color = set_color;
	return 1;
}

int Tesla::setModel(string set_model) {
	model = set_model;
	return 1;
}

int Ford::setColor(string set_color) {
	color = set_color;
	return 1;
}
int Ford::setModel(string set_model) {
	model = set_model;
	return 1;
}

int Jeep::setColor(string set_color) {
	color = set_color;
	return 1;
}
int Jeep::setModel(string set_model) {
	model = set_model;
	return 1;
}

int Warplane::setCountry(string set_country) {
	country = set_country;
	return 1;
}
int Warplane::setModel(string set_model) {
	model = set_model;
	return 1;
}
int Warplane::setFunc(string set_func) {
	function = set_func;
	return 1;
}

int WarHelicopter::setCountry(string set_country) {
	country = set_country;
	return 1;
}
int WarHelicopter::setModel(string set_model) {
	model = set_model;
	return 1;
}
int WarHelicopter::setFunc(string set_func) {
	function = set_func;
	return 1;
}

int Tank::setCountry(string set_country) {
	country = set_country;
	return 1;
}

int Tank::setModel(string set_model) {
	model = set_model;
	return 1;
}

int Tank::setColor(string set_color) {
	color = set_color;
	return 1;
}

int BTR::setCountry(string set_country) {
	country = set_country;
	return 1;
}

int BTR::setModel(string set_model) {
	model = set_model;
	return 1;
}

int BTR::setColor(string set_color) {
	color = set_color;
	return 1;
}
