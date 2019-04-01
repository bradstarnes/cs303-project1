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

#include "Pqueue.h"

pQueue::pQueue(){}
void pQueue::addEmployee(Employee* temp){
    WorkQueue.push_back(temp);
}
Employee* pQueue::pop_max(){
    Employee *max = *WorkQueue.begin();
    vector<Employee*>::iterator it, toErase;
    it = toErase = WorkQueue.begin();
    it++;
    for (it; it != WorkQueue.end(); it++){
        if ((max->getWait() - max->getRetain()) < ((*it)->getWait() - (*it)->getRetain())){
            max = *it;
            toErase = it;
        }
    }
    WorkQueue.erase(toErase);
    return max;
}
Employee* pQueue::top(){
    Employee *max = *WorkQueue.begin();
    vector<Employee*>::iterator it = WorkQueue.begin();
    it++;
    for (it; it != WorkQueue.end(); it++){
        if ((max->getWait() - max->getRetain()) < ((*it)->getWait() - (*it)->getRetain())){
            max = *it;
        }
    }
    return max;