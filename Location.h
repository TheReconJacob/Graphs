#pragma once
class Location
{
public:
	int key;
	char name;
	Location* next;
	bool wasVisited;
	float x;
	float y;

	void Display();
	Location(int key, char name);
	Location(int key, char name, float x, float y);
	bool operator!=(const Location& rhd);
	bool operator<(const Location& rhd);
	bool operator==(const Location& rhd);
	bool operator>(const Location& rhd);
};

