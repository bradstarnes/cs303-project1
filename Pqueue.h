#ifndef pQueue_hpp
#define pQueue_hpp

#include <stdio.h>
#include <list>
#include "employee.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class pQueue{
private:
    vector<Employee*> WorkQueue;
public:
    pQueue();
    void addEmployee(Employee* temp);
    Employee* pop_max();
    Employee* top();
    bool empty();
};