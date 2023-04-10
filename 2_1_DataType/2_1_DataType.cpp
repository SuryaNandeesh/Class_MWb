// 2_1_DataType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//the same as importing in java
#include <iostream>
#include "Employee.h"
using namespace std;

#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    std::cout << "2_1_DataTypes Hello World!\n";
    const int MAX_EMPLOYEES = 5;
    Employee employees[MAX_EMPLOYEES];
    unsigned short numEmployees = 0;

    cout << "\nPlease enter the number of employees (cannot exceed 5): ";
    cin >> numEmployees;

    if (numEmployees > MAX_EMPLOYEES) {
        cout << "Error: Maximum number of employees exceeded." << endl;
        return 1;
    }

    for (int iCount = 0; iCount < numEmployees; iCount++) {
        employees[iCount].Read();
    }

    for (int iCount = 0; iCount < numEmployees; iCount++) {
        employees[iCount].Write();
    }

    return 0;
}


/*int main() old code before chatgpt
{
    std::cout << "2_1_DataTypes Hello World!\n";
    Employee employees[5];
    unsigned short numEmployees = 0;

    cout << "\n Please enter the number of employees: ";
    cin >> numEmployees;

    for (int iCount = 0; iCount < numEmployees; iCount++) {
        //Call read for each employee
        void Employee::Read() {

        }
    }

    for (int iCount = 0; iCount < numEmployees; iCount++) {
        //Call write for each employee
    }*/


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
