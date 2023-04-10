#pragma once
#include <iostream>
#include <string>
#include <vector> // managed to lookup what vector is

class Employee { //ChatGPTified for the better
private:
    std::string name;
    int daysWorked;
    std::vector<int> hoursPerDay;
    float fWage;
    const float TAX;
    int totalHours;
    float fGrossPay;
    float fTax;
    float netPay;
public:
    Employee();
    void Read();
    void Write();
};


//old code
/*#pragma once
class Employee
{
public:
	char name[33];
	int age = 0;
	float hoursPerDay[7];

public:
	Employee();
	void Read();
	void Write();
};*/

