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

#ifndef CS303_PROJECT1_LIBRARY_H
#define CS303_PROJECT1_LIBRARY_H

#include <stdio.h>
#include <string>
#include <queue>
#include <list>
#include "book.cpp"


class Library {

private:
    list<Book> toBeCirculated;
    list<Book> archivedBooks;
    list<Employee*> universityEmployeeList;

public:
    Library();
    ~Library();

    void add_book(string newBook);
    void add_employee(string newPerson);
    void circulate_book(string bookToMove, Date dayOfMove);
};


#endif //CS303_PROJECT1_LIBRARY_H
