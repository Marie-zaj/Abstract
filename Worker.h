#pragma once
#include "Employer.h"

class Worker : public Employer
{
    char* position;
    char* name;

public:
    Worker(const char* position, const char* name);
    ~Worker();

    void Print() const override;
};