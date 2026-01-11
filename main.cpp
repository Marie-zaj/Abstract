#include "President.h"
#include "Manager.h"
#include "Worker.h"

int main()
{
    Employer* staff[3];

    staff[0] = new President("OpenAI", "Alice");
    staff[1] = new Manager("IT", "Bob");
    staff[2] = new Worker("Programmer", "Charlie");

    for (int i = 0; i < 3; i++)
    {
        staff[i]->Print();
        cout << "----------------\n";
    }

    for (int i = 0; i < 3; i++)
    {
        delete staff[i];
    }

    return 0;
}