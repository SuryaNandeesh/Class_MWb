// 1_3_Payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>

int main()
{
    const unsigned short maxDays = 14;
    const float Tax = 0.1f;

    string name; // get 
    string lastInitial; //get
    int age; //get
    bool isAdult{}; //get
    int zipcode; //get

    unsigned int uCount = 0; //get - Days worked
    unsigned short hours[maxDays]; // get days worked (hours)
    float fGrossPay = 0; // Calc - total hours * wage
    float netPay = 0; // Calc - (Gross Pay - (Gross Pay * Tax))
    float fTax = 0; // (Gross Pay * Tax Rate)
    float fWage = 15.00f; // get pay her hour

    std::cout << "1_3_Payroll_Hello World!\n";

    cout << "\nEnter First Name: ";
    cin >> name;
    
    cout << "\nEnter Initial of Last Name: ";
    cin >> lastInitial;
    
    cout << "\nEnter Age: ";
    cin >> age;
    
    cout << "\nAre you an adult: ";
    if (isAdult <= 18) { isAdult = true; }
    else { isAdult = false; }
    cin >> isAdult;

    cout << "\nEnter Zipcode: ";
    cin >> zipcode;

    cout << "\nEnter wage (including decimals): ";
    cin >> fWage;

    //cout << "\n" + name + " " + lastInitial + "";

    //Calc pay and taxes
    fGrossPay = ((hours[maxDays]) * fWage);
    netPay = (fGrossPay - (fGrossPay * fTax));
    fTax = (fGrossPay * Tax);
    

    cout << "\n End of App\n\n\n";

    /*
    cout << "\n\n Enter a number: ";
    cin >> uCount;

    cout << "\n Your number is: " << uCount;

    for (int iCount = 0;iCount < uCount; iCount++){
        // get values for hours worked
        

        cout << "\n Counter = " << iCount;
    }
    */

    
}