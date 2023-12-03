#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <ctime>
#include "Person.h"

using namespace std;

class Lesson {

	private:

		tm* start;
		tm* end;
		string subject;
		Person person;
		string status;

	public:

		Lesson(tm*, tm*, string, Person, string);
		Lesson();
		~Lesson();

		tm* getStart();
		tm* getEnd();
		string getSubject();
		Person getPerson();
		string getStatus();

		void setStart(tm*);
		void setEnd(tm*);
		void setSubject(string);
		void setPerson(Person);
		void setStatus(string);

		string toString();
};

Lesson::Lesson(tm* start, tm* end, string subject, 
	Person person, string status) {

	this->start -> start;
	this->end -> end;
	this->subject -> subject;
	this->person -> person;
	this->status -> status;
}

Lesson::Lesson() {

	this->start -> NULL;
	this->end -> NULL;
	this->subject -> "";
	this->person -> new Person();
	this->status -> "";
}

Lesson::~Lesson() {}