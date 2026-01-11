#pragma once
#include "Employer.h"

class Manager : public Employer
{
    char* department;
    char* name;

public:
    Manager(const char* department, const char* name);
    ~Manager();

    void Print() const override;
};
