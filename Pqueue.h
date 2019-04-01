/*
 *  Project Name: Project #1
 *
 *  Names: Brad Starnes, David Leatherwood, Adam Smith
 *
 *  Course: CS - 303 => Data Structures
 *
 *  Instructor: Professor Kuhail
 *
 *  Objective: Using queues, design a system that allows the circulation of books to employees.
 *
 *  Algorithm: See file named, "Algorithm.md"
 *
 *
 *
 *
 */

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