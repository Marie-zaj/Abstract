#pragma once
#include <iostream>
using namespace std;

class Employer
{
public:
    virtual void Print() const = 0;

    virtual ~Employer() {}
};