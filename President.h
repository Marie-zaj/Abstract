#pragma once
#include "Employer.h"

class President : public Employer
{
    char* company;
    char* name;

public:
    President(const char* company, const char* name);
    ~President();

    void Print() const override;
};