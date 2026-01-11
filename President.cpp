#include "President.h"
#include <cstring>

President::President(const char* company, const char* name)
{
    this->company = new char[strlen(company) + 1];
    strcpy_s(this->company, strlen(company) + 1, company);

    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}

President::~President()
{
    delete[] company;
    delete[] name;
}

void President::Print() const
{
    cout << "President\n";
    cout << "Name: " << name << endl;
    cout << "Company: " << company << endl;
}