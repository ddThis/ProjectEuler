#pragma once

#include <chrono>
#include "windows.h"
#include "ProjectEuler.h"

class Problem
{
public:
    Problem()
    {
        TimerStart();
    }
    ~Problem()
    {
        TimerEnd();
    }
public:

    virtual void Execute() {};
#pragma region �ð� ����
private:
    void TimerStart();
    void TimerEnd();
private:
    std::chrono::system_clock::time_point start;
#pragma endregion
};

inline void Problem::TimerStart()
{
    start = std::chrono::system_clock::now();
}

inline void Problem::TimerEnd()
{
    std::chrono::duration<double> sec = std::chrono::system_clock::now() - start;
    std::cout << "�����ϴ� �ɸ� �ð�(��) : " << sec.count() << " seconds" << std::endl;
}
