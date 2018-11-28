#include "pch.h"
#include "Person.h"
#include <iostream>
#include <string>

Person::Person() {

}

Person::Person(std::string p_name, int p_age, float p_height, int p_weight) {
	name = p_name;
	age = p_age;
	height = p_height;
	weight = p_weight;
}

// Destructor
Person::~Person() {
	std::cout << "Person destructor" << std::endl;
}

void Person::SetName(std::string n_name) {
	// this->name = n_name;
	name = n_name;
}

std::string Person::GetName() {
	// return this->name;
	return name;
}