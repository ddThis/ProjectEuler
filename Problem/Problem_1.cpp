#include "ProjectEuler.h"

void Problem_1::Execute()
{
    int sum = 0;
    int i = 1;
    while (i < 1000)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
        i++;
    }
    std::cout << sum << std::endl;
    std::cout << "Githhub Test" << std::endl;
}
