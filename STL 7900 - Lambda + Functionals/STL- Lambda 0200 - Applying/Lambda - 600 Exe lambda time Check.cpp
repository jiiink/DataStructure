#include <bits/stdc++.h>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <random>
#include <cstdint>
#include <algorithm>
#include <functional>
#include <windows.h>
using namespace std;


__int64 g_NumberSum;

void GetSumFunction(int Num) {
    g_NumberSum = g_NumberSum + Num;
}

struct GetSumFunctor {
    void operator()(int Num) {
        g_NumberSum = g_NumberSum + Num;
    }
};

void wmain() {
    const int NUMBER_COUNT = 100000000;

    mt19937_64 RandomEngine;
    _m_from_int <> RandomRange(0, INT32_MAX);
    RandomEngine.seed(GetTickCount());

    vector<int> RandumNumbers;
    RandumNumbers.reserve(NUMBER_COUNT);
    for (int i = 0; i < NUMBER_COUNT; ++i) {
        RandumNumbers.push_back(RandomRange(RandomEngine));
    }

    DWORD Tick;
//function
    g_NumberSum = 0;
    Tick = GetTickCount();
    for_each(RandumNumbers.begin(), RandumNumbers.end(), GetSumFunction);
    printf("Global Function :: Sum : %I64d, Time : %dms\n", g_NumberSum, GetTickCount() - Tick);
//bind function
    g_NumberSum = 0;
    function<void(int)> FunctionObject = bind(&GetSumFunction, tr1::placeholders::_1);
    Tick = GetTickCount();
    for_each(RandumNumbers.begin(), RandumNumbers.end(), FunctionObject);
    printf("Bind Function   :: Sum : %I64d, Time : %dms\n", g_NumberSum, GetTickCount() - Tick);
//functor
    g_NumberSum = 0;
    Tick = GetTickCount();
    for_each(RandumNumbers.begin(), RandumNumbers.end(), GetSumFunctor());
    printf("Functor         :: Sum : %I64d, Time : %dms\n", g_NumberSum, GetTickCount() - Tick);
//C++ 11 Lambda
    g_NumberSum = 0;
    Tick = GetTickCount();
    for_each(RandumNumbers.begin(), RandumNumbers.end(),
    [](int Num) {
        g_NumberSum = g_NumberSum + Num;
    });
    printf("C++11 Lambda    :: Sum : %I64d, Time : %dms\n", g_NumberSum, GetTickCount() - Tick);
//C++11 Bind Lambda
    g_NumberSum = 0;
    Tick = GetTickCount();
    function<void(int)> BindLambda =
    [](int Num) {
        g_NumberSum = g_NumberSum + Num;
    };
    for_each(RandumNumbers.begin(), RandumNumbers.end(), BindLambda);
    printf("Bind Lambda     :: Sum : %I64d, Time : %dms\n", g_NumberSum, GetTickCount() - Tick);
//C++11 Auto bind Lambda
    g_NumberSum = 0;
    Tick = GetTickCount();
    auto AutoBindLambda =
    [](int Num) {
        g_NumberSum = g_NumberSum + Num;
    };
    for_each(RandumNumbers.begin(), RandumNumbers.end(), AutoBindLambda);
    printf("Auto Bind Lambda:: Sum : %I64d, Time : %dms\n", g_NumberSum, GetTickCount() - Tick);
}
