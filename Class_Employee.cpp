//
// Created by Adam Smith on 2019-03-29.
//

#include "Class_Employee.h"
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

class employee{
public:
    string fName;
    string lName;
    int empID;
    int bookCnt;
    int priority;
    time_t receivedCurrentBook;
    time_t passedOnBook;
    time_t timeWithBook;
    time_t timeWithOutBook;

    employee(string fName, string lName){

        this->fName = fName;
        this->lName = lName;

        empID = rand()%(5999999-1000000 + 1) + 1000000; // Create Random 7 Digit Employee ID
        bookCnt = 0;
        timeWithBook = 0;
        timeWithOutBook = 0;
        passedOnBook = 0;
        receivedCurrentBook = 0;
        priority = getPriority();
    }

    time_t getTime(){
        time_t now = time(0);
    }
    void passOn(){
        time_t now = getTime();
        this->passedOnBook = now;
        this->timeWithBook += now - receivedCurrentBook;
    }
    void takeOn(){
        time_t now = getTime();
        this->receivedCurrentBook = now;
        this->timeWithOutBook += now - passedOnBook;
    }
    double getPriority(){
        double priority = difftime(timeWithOutBook, timeWithBook);
        return priority;
    }


};
