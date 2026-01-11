#include "Manager.h"
#include <cstring>

Manager::Manager(const char* department, const char* name)
{
    this->department = new char[strlen(department) + 1];
    strcpy_s(this->department, strlen(department) + 1, department);

    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}

Manager::~Manager()
{
    delete[] department;
    delete[] name;
}

void Manager::Print() const
{
    cout << "Manager\n";
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
}