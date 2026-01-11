#include "Worker.h"
#include <cstring>

Worker::Worker(const char* position, const char* name)
{
    this->position = new char[strlen(position) + 1];
    strcpy_s(this->position, strlen(position) + 1, position);

    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}

Worker::~Worker()
{
    delete[] position;
    delete[] name;
}

void Worker::Print() const
{
    cout << "Worker\n";
    cout << "Name: " << name << endl;
    cout << "Position: " << position << endl;
}