// 2_1_DataType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//the same as importing in java
#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    std::cout << "2_1_DataTypes Hello World!\n";
    Employee employees[5];
    unsigned short numEmployees = 0;

    cout << "\n Please enter the number of employees: ";
    cin >> numEmployees;

    for (int iCount = 0; iCount < numEmployees; iCount++) {
        //Call read for each employee
        cout << Employee::Read;
    }

    for (int iCount = 0; iCount < numEmployees; iCount++) {
        //Call write for each employee
        cout << Employee::Write;
    }


    //Employee workers[4];
    //workers[0].age = 23;
    //workers[0].Read();

    //Employee* empPtr = new Employee(); //Heap
    //empPtr->age = 42;
    //empPtr->Read()

    //void* ptr = malloc(20);
    //int* intPtr = new int;

    //*intPtr = 42;
    //printf("\n hex x%00.x", *intPtr);
    //printf("\n hex x%00.x", *(intPtr + 1));
    //Do stuff with heap memory
    //cout << sizeof(Employee);

    //delete empPtr;

    //cout << "\n size 1: " << (sizeof(workers) / sizeof(workers[0]));
    //cout << "\n size 2: " << std::size(workers);


}
