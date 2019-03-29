//
// Created by Brad Starnes on 2019-03-14.
//

#include "universityEmployee.h"
#include <iostream>
#include <ctime>

using namespace std;

class employee{

    string fName;
    string lName;
    int empID = rand()%(5999999-1000000 + 1) + 1000000; // Create Random 7 Digit Employee ID
    int bookCnt = 0;
    int queuePosition;
    time_t retentionTimeTotal;
    time_t retentionTimeAvg;

    time_t getTime(){
        time_t now = time(0);
    }
    void timeHeld(time_t rcvd){
        this->retentionTimeTotal += getTime() - rcvd;
        if (bookCnt > 0)
            this->retentionTimeAvg = this->retentionTimeTotal / this->bookCnt;

    }
    
};
