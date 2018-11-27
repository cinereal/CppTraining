#pragma once
#include <iostream>
#include <string>

class Person
{

private:
	std::string name;
	int age;
	float height;
	int weight;

public:
	Person();
	Person(std::string name, int age, float height, int weight);

	~Person();

	void SetName(std::string name);
	std::string GetName();
};

