#include "Employee.h"
#pragma once
#include <iostream>
using namespace std;

int daysWorked;
int dayNum;
const float TAX = 0.01f;
int totalHours = 0;
float fGrossPay = 0; // Calc - total hours * wage
float netPay = 0; // Calc - (Gross Pay - (Gross Pay * Tax))
float fTax = 0; // (Gross Pay * Tax Rate)
float fWage = 15.00f; // get pay her hour

Employee::Employee(){
	//put constructor code here
}

void Employee::Read(){
	//Put read code here
	cout << "Enter First Name: ";
	cin >> name;

	for (int i = 0; i < daysWorked; i++) {
		cout << "Enter Hours Worked for the day " << dayNum << ":";
		cin >> hoursPerDay[dayNum];

		fGrossPay = ((hoursPerDay[dayNum]) * fWage);
		netPay = (fGrossPay - (fGrossPay * fTax));
		fTax = (fGrossPay * TAX);
	}	
}

void Employee::Write(){
	//put write code here
	std::cout << "First Name: " << name << "\n Age: " << age <<
		"\n Days Worked: " << daysWorked << "\n Hours Per Day: "
		<< hoursPerDay << "\n Total Hours: " << totalHours << endl;
}