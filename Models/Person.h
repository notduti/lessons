#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

class Person {

	private:

		string name;
		string surname;
		int age;

	public:

		Person(string, string, int);
		Person();
		~Person();

		string getName();
		string getSurname();
		int getAge();

		void setName(string);
		void setSurname(string);
		void setAge(int);

		string toString();
};

Person::Person(string name, string surname, int age) {

	this->name = name;
	this->surname = surname;
	this->age = age;
}

Person::Person() {

	this->name = "";
	this->surname = "";
	this->age = 0;
}

Person::~Person() {}



// ---- get methods ---- //

string Person::getName() {

	return this->name;
}

string Person::getSurname() {

	return this->surname;
}

int Person::getAge() {

	return this->age;
}



// ---- set methods ---- //

void Person::setName(string name) {

	this->name = name;
}

void Person::setSurname(string surname) {

	this->surname = surname;
}

void Person::setAge(int age) {

	this->age = age;
}



// ---- serializator ---- //

string Person::toString() {

	return "Name: " + this->name +
		", Surname: " + this->surname +
		", Age: " + std::to_string(this->age);
}

