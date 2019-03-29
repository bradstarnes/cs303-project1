//
// Created by Adam Smith on 2019-03-29.
//

#include "Employee_Class.h"
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
    int queuePosition;
    int priority;
    time_t receivedCurrentBook;
    time_t retentionTimeTotal;
    time_t retentionTimeCurrent;
    time_t retentionTimeAvg;

    employee(){

        int empID = rand()%(5999999-1000000 + 1) + 1000000; // Create Random 7 Digit Employee ID
        int bookCnt = 0;
        int priority = getPriority();

    }


    time_t getTime(){
        time_t now = time(0);
    }
    void timeHeld_transfer(time_t rcvd){
        //***** DO NOT CALL UNLESS TRANSFERING the Book *****
        //***** Retention Time Total will break *****
        //Updates Average Time Held
        //Updates Total Time Held
        //Updates Total Time Holding current book

        time_t timeDiff = getTime() - rcvd;//Time passed since receiving the book

        this->retentionTimeTotal += timeDiff;
        this->retentionTimeCurrent = timeDiff;
        if (bookCnt > 0)
            this->retentionTimeAvg = this->retentionTimeTotal / this->bookCnt;
    }
    int getPriority(){
        time_t now = getTime();
        int priority = 0;
        timeHeld(now);
        priority = now - timeHeld(now);

        return priority;
    }

};
int main(){
    employee *testEmp = new employee();
    cout << testEmp->empID;
}
