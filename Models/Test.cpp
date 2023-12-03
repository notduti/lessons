#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "Person.h"

using namespace std;

int main() {

	Person* person = new Person("Giacomo", "Poretti", 42);
	cout << person->toString();

	person->setAge(18);
	cout << person->toString();

	cout << person->getAge();

	return 0;
}