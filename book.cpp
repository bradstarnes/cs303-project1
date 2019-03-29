//
// Created by Adam Smith on 2019-03-05.
//

#include "Book.h"
#include <iostream>
#include <ctime>

using namespace std;

class book {

    time_t startDate;
    time_t transferDate;
    string title;
    string owner;
    bool archived = false;
    int handledCnt = 0;

    time_t getTime(){
        time_t now = time(0);
    }
    void printTime(){
        char* dt = ctime(&now);
        cout << "The local date and time is: " << dt << endl;
    }
    void newOwner(string old, string next){
        // Change Owner String
        // Increment the number of hands it has changed

        this->owner = owner.replace(0, old.size(), next);
        this->handledCnt += 1;
    }
    bool endOfLife(int queueSize){
        if (this->handledCnt < queueSize)
            return false;
        if (this->handledCnt >= queueSize)
            return true;
    }

};

void book::withdrawBook(string title, string owner){
    this->startDate = book.getTime();
    this->transferDate = book.getTime();
    this->handledCnt = 1;
    this->title = title;
    this->owner = owner;
}
