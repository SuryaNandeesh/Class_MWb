#include "Employee.h"
#include <iostream>

Employee::Employee() : fWage(15.00f), TAX(0.01f), totalHours(0), fGrossPay(0), fTax(0), netPay(0) {}

void Employee::Read() {
    std::cout << "Enter First Name: ";
    std::cin >> name;

    std::cout << "Enter number of days worked: ";//ChatGPT helped
    std::cin >> daysWorked;
    hoursPerDay.resize(daysWorked);

    for (int i = 0; i < daysWorked; i++) { //roomates helped with this one & chatgpt refined it
        std::cout << "Enter Hours Worked for the day " << (i + 1) << ":";
        std::cin >> hoursPerDay[i];
        totalHours += hoursPerDay[i];
        fGrossPay += (hoursPerDay[i] * fWage);
        fTax += (hoursPerDay[i] * fWage * TAX);
        netPay += (hoursPerDay[i] * fWage) - (hoursPerDay[i] * fWage * TAX);
    }
}

void Employee::Write() {
    std::cout << "First Name: " << name << "\nDays Worked: " << daysWorked << "\nHours Per Day:";
    for (int i = 0; i < daysWorked; i++) {
        std::cout << " " << hoursPerDay[i];
    }
    std::cout << "\nTotal Hours: " << totalHours << std::endl;
}



//old code before ChatGPT fixed it
/*
void Employee::Read(){
	//Put read code here
	cout << "Enter First Name: ";
	cin >> name;

	cout << "Enter number of days worked: ";
	cin >> daysWorked;
	hoursPerDay.resize(daysWorked);


	for (int i = 0; i < daysWorked; i++) { //Proofcoded by ChatGPT
		cout << "Enter Hours Worked for the day " << (i + 1) << ":";
		cin >> hoursPerDay[i];
		dayNum++;
		totalHours += hoursPerDay[i];
		fGrossPay += (hoursPerDay[i] * fWage);
		fTax += (hoursPerDay[i] * fWage * TAX);
		netPay += (hoursPerDay[i] * fWage) - (hoursPerDay[i] * fWage * TAX);
	}
}
*/