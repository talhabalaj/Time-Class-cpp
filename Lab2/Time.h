#pragma once
class Time
{
private:
	int hours;
	int mins;
	int secs;
public:
	Time(int = 0, int = 0, int = 0);
	int getHours();
	int getMins();
	int getSecs();
	void setHours(int);
	void setMins(int);
	void setSecs(int);
	void print();
	Time operator+(const Time&);
	Time operator-(const Time&);
	Time operator=(const Time&);
	bool operator<(const Time&);
	bool operator>(const Time&);
	bool operator==(const Time&);
};

