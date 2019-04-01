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

#include <iostream>
#include <stack>
#include <queue>
#include “Class_Book.cpp”
#include “Class_Book.h”
#include “Class_Employee.cpp”
#include “Class_Employee.h”

using namespace std;

vector <book> *archiveStackGlobal = {};

void newBook(string titleOfBook, vector <book> *library){
    book *bookObj = new book(titleOfBook);
    library->push_back(*bookObj);
}
void newEmployee(string first, string last, priority_queue<class employee> *employees){
    employee *temp = new employee(first, last);
    employees->push(*temp);
}
void checkOutBook(vector <book> *library, book *bookObj, vector <book> *checkedOut, employee *reader){
    reader->checkOut(bookObj->title);
    bookObj->checkedOut(reader->owner, library, checkedOut);
}
void returnBook(vector <book> *checkedOut, employee *reader, vector <book> *library, book *bookObj){
    reader->turnIn(bookObj->title);
    if (bookObj->archived != true)
        bookObj->returned(reader->owner, library, checkedOut);
    else
        bookObj->archive(archiveStackGlobal, bookObj);
}

int main(){

    vector <class book> library = {};
    vector <class book> checkedOut = {};

    priority_queue<class employee> employees;

    /*
     * //Create 5 Book Objects
     *
     *
     *
     * //Create 5 Employee Objects
     *
     *
     *
     * */

    /*
    book book1 = book(“sample book1”);
        cout << “Address: ” << &book1 << endl;
        cout << ”  Title: ” << book1.title << endl;
        cout << ”  Owner: ” << book1.owner << endl;

    book book2 = book(“sample book2”);
        cout << “Address: ” << &book2 << endl;
        cout << ”  Title: ” << book2.title << endl;
        cout << ”  Owner: ” << book2.owner << endl;
     */

    return 0;
}