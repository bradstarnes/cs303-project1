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


#include "Class_Employee.h"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>
#include <iterator>

using namespace std;

class employee{
public:
    //Class Attributes
    time_t receivedCurrentBook;
    time_t passedOnBook;
    time_t timeWithBook;
    time_t timeWithOutBook;
    vector <string> haveRead;

    //Class Constructor
    employee(string first, string last){

        string fName = first;
        string lName = last;
        int bookCnt = 0;
        double priority = getPriority();

        timeWithBook = 0;
        timeWithOutBook = 0;
        passedOnBook = 0;
        receivedCurrentBook = 0;

    }

    //Class Methods
    time_t getTime()
    {
        time_t now = time(0);
    }
    void turnIn(string title)
    {
        time_t now = getTime();
        this->passedOnBook = now;
        this->timeWithBook += now - receivedCurrentBook;
        haveRead.push_back(title);
    }
    void checkOut(string title)
    {
        if(find(begin(haveRead), end(haveRead), title) == end(haveRead)){
            cout << "Title has already been read: " << title << endl;
        }
        else{//if the title is already read, it will do nothing
            time_t now = getTime();
            this->receivedCurrentBook = now;
            this->timeWithOutBook += now - passedOnBook;
        }
    }
    double getPriority()
    {
        double priority = difftime(timeWithOutBook, timeWithBook);
        return priority;
    }
};