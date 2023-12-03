#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <ctime>
#include "Person.h"

using namespace std;

class Lesson {

	private:

		struct tm* start;
		struct tm* end;
		string subject;
		Person* person;
		string status;

	public:

		Lesson(struct tm*, struct tm*, string, Person*, string);
		Lesson();
		~Lesson();

		struct tm* getStart();
		struct tm* getEnd();
		string getSubject();
		Person* getPerson();
		string getStatus();

		void setStart(struct tm*);
		void setEnd(struct tm*);
		void setSubject(string);
		void setPerson(Person*);
		void setStatus(string);

		string toString();
};

Lesson::Lesson(struct tm* start, struct tm* end, string subject, 
	Person* person, string status) {

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
	this->person -> NULL;
	this->status -> "";
}

Lesson::~Lesson() {

	delete this->start;
	delete this->end;
	delete this->person;
}



// ---- get methods ---- //

struct tm* Lesson::getStart() {

	return this->start;
}

struct tm* Lesson::getEnd() {

	return this->end;
}

string Lesson::getSubject() {

	return this->subject;
}

Person* Lesson::getPerson() {

	return this->person;
}

string Lesson::getStatus() {

	return this->status;
}



// ---- set methods ---- //

void Lesson::setStart(struct tm* start) {

	this->start = start;
}

void Lesson::setEnd(struct tm* end) {

	this->end = end;
}

void Lesson::setSubject(string subject) {

	this->subject = subject;
}

void Lesson::setPerson(Person* person) {

	this->person = person;
}

void Lesson::setStatus(string status) {

	this->status = status;
}


// ---- serializator ---- //

string Person::toString() {

	char buf[30];
	return "Start: " + strftime(buf,30,"%Y:%m:%dT%H:%M:%S", start) +
		"\nEnd: " + strftime(buf,30,"%Y:%m:%dT%H:%M:%S", end) +
		"\nSubject: " + this->subject +
		"\nPerson: " + person->toString() +
		"\nStatus: " + this->status;
}