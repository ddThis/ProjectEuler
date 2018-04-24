#pragma once
class Problem;

class Problem_1 : public Problem
{
public:
    Problem_1(){}
    ~Problem_1(){}

public:
    // Problem을(를) 통해 상속됨
    virtual void Execute();
};