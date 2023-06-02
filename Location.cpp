#include <iostream>
#include "Location.h"

Location::Location(int key, char name)
{
    this->key = key;
    this->name = name;
    this->x = 0;
    this->y = 0;
    this->next = nullptr;
    this->wasVisited = false;
}

Location::Location(int key, char name, float x, float y)
{
    this->key = key;
    this->name = name;
    this->x = x;
    this->y = y;
    this->next = nullptr;
    this->wasVisited = false;
}

void Location::Display()
{
    std::cout << name << std::endl;
}

bool Location::operator!=(const Location& rhd)
{
    return key != rhd.key;
}

bool Location::operator<(const Location& rhd)
{
    return key < rhd.key;
}

bool Location::operator==(const Location& rhd)
{
    return key == rhd.key;
}

bool Location::operator>(const Location& rhd)
{
    return key > rhd.key;
}