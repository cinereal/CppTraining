#include "pch.h"
#include "Person.h"
#include <iostream>
#include <string>

Person::Person() {

}

Person::Person(std::string name, int age, float height, int weight) {
	name = name;
	age = age;
	height = height;
	weight = weight;
}

// Destructor
Person::~Person() {
	std::cout << "Person destructor" << std::endl;
}

void Person::SetName(std::string name) {
	this->name = name;
}

std::string Person::GetName() {
	return this->name;
}