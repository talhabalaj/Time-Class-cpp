#include "Time.h"
#include <iostream>

using namespace std;

Time::Time(int h, int m, int s)
{
	setHours(h);
	setMins(m);
	setSecs(s);
}

int Time::getHours() {
	return hours;
}

int Time::getMins() {
	return mins;
}

int Time::getSecs() {
	return secs;
}
 
void Time::setHours(int h) {
	if (h > 24) {
		cout << "Hours can't be greater than 60." << endl;
		return;
	}
	hours = h;
}

void Time::setMins(int m) {
	if (m > 60) {
		cout << "Mintues can't be greater than 60." << endl;
		return;
	}
	mins = m;
}

void Time::setSecs(int s) {
	if (s > 60) {
		cout << "Secconds can't be greater than 60." << endl;
		return;
	}
	secs = s;
}

void Time::print() {
	cout << hours << ":" << mins << ":" << secs;
}

Time Time::operator+(const Time& obj) {
	Time temp;
	int totalSecondsObj = obj.hours * 60 * 60 + obj.mins * 60 + obj.secs;
	int totalSecondsThis = this->hours * 60 * 60 + this->mins * 60 + this->secs;
	int totalResult = totalSecondsObj + totalSecondsThis;
	temp.hours = totalResult / 60 / 60;
	temp.mins = totalResult / 60 % 60;
	temp.secs = totalResult % 60;
	return temp;
}

Time Time::operator-(const Time& obj) {
	Time temp;
	int totalSecondsObj = obj.hours * 60 * 60 + obj.mins * 60 + obj.secs;
	int totalSecondsThis = this->hours * 60 * 60 + this->mins * 60 + this->secs;
	int totalResult = totalSecondsThis - totalSecondsObj;
	temp.hours = totalResult / 60 / 60;
	temp.mins = totalResult / 60 % 60;
	temp.secs = totalResult % 60;
	return temp;
}

Time Time::operator=(const Time& obj) {
	this->hours = obj.hours;
	this->mins = obj.mins;
	this->secs = obj.secs;
	return *this;
}

bool Time::operator<(const Time& obj) {
	int totalSecondsObj = obj.hours * 60 * 60 + obj.mins * 60 + obj.secs;
	int totalSecondsThis = this->hours * 60 * 60 + this->mins * 60 + this->secs;
	return totalSecondsThis < totalSecondsObj;
}

bool Time::operator>(const Time& obj) {
	int totalSecondsObj = obj.hours * 60 * 60 + obj.mins * 60 + obj.secs;
	int totalSecondsThis = this->hours * 60 * 60 + this->mins * 60 + this->secs;
	return totalSecondsThis > totalSecondsObj;
}

bool Time::operator==(const Time& obj) {
	int totalSecondsObj = obj.hours * 60 + obj.mins * 60 + obj.secs;
	int totalSecondsThis = this->hours * 60 + this->mins * 60 + this->secs;
	return totalSecondsThis == totalSecondsObj;
}