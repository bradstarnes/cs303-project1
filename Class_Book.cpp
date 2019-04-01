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


#include "Class_Book.h"
#include <iostream>
#include <vector>

using namespace std;

class book {
public:

    //Class Attributes
    string owner;
    string title;
    bool archived;
    int handledCnt = 0;
    vector <string> readBy = {};
    vector <string> employeePool = {};

    //Class Constructors
    book(string titleOfBook)
    {
        title = titleOfBook;
        archived = false;
        handledCnt = 0;
    }

    //Class Methods
    void getEmployees(vector <string> employees)
    {
        int x = 0;
        while (employees.size() >= x)
        {
            employeePool.push_back(employees[x]);
            x++;
        }
    }
    void checkedOut(string newOwner, vector <book> *library, vector <book> *checkedOut)
    {
        if (find(begin(employeePool), end(employeePool), newOwner) == end(employeePool))
        {
            owner = newOwner;
            handledCnt += 1;
            checkedOut->push_back(library->front());//Push FRONT element of Library on END of CheckedOut
            library->erase(library->begin());//Erase FRONT element of Library

        } else
            cout << "Employee has already read this book" << endl;
    }
    void returned(string oldOwner, vector <book> *library, vector <book> *checkedOut)
    {
        owner = "Stored in Library";
        library->push_back(checkedOut->front());//Push FRONT element of CheckedOut on END of Library
        checkedOut->erase(checkedOut->begin()); //Erase FRONT element of CheckedOut

        if(handledCnt >= employeePool.size())
            archived == true;
    }
    void archive(vector<book> *archiveStack, book *title)
    {
        archiveStack->push_back(*title);
    }

};

//Examples
//"EmployeeObject".checkedOut()
//      --
//"EmployeeObject".returned()
//      -- changes owner to default, pushes oldOwners name onto readBy vector
// Employee "Object Name" = new employee(title, fname, lname, employeeVector)
//      -- Default employee Vector is empty
