#pragma once
class Problem;

class Problem_2 : public Problem
{
public:
    Problem_2() {}
    ~Problem_2() {}

public:
    // Problem을(를) 통해 상속됨
    virtual void Execute();
};