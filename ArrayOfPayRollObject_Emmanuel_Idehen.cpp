//
//  main.cpp
//  ArrayOfPayRollObject
//
//  Created by Emmanuel Idehen on 2/26/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//
//  Submitted to Mr. Marcus Golden(CS204 Computer programming II)
//  Due Feb. 28th, 2019.
/*
 * Design a PayRoll class that has data members for an employee's hourly pay rate and
 * number of hours worked. Write a program with an array of seven PayRoll objects. The
 * program should read the number of hours each employee worked and their hourly pay
 * rate from a file and call class functions to store this information in the appropriate
 * objects. It should then call a class function, once for each object, to return the employee's
 * gross pay, so this information can be displayed. Sample data to test this program can be
 * found in the payroll. dat file.
 *
 Psuedo code:
 
 create array of size 7
 open the file and check if the right file was opened!
 if file is not opened, wrong file
 else
 grab data from file into hour and rate
 pass pay rate and hours worked to each emplyee
 calciulate the gross pay and print each employee pay for a year!
 */


#include <iostream>
#include <sstream>
#include <string>
#include <fstream>    //needed to open file
#include "PayRoll.h"
using namespace std;
int main()
{
    
    std::string person= " ";
    double hour_worked = 0.0; //default
    double rate_pay = 0.0; //default
    const int size = 8;//size of 7
    PayRoll employee[size]; //pass size to array
    ifstream dataIn; // file decl. !
    dataIn.open("/Users/emmanuelidehen/Documents/C++/ArrayOfPayRollObject/ArrayOfPayRollObject/sales"); // open file
    
    if (!dataIn)
    {
        //let user know they are in a wrong file
        cout <<"\nYou're seeing this message because you entered in the Wrong File name !\n\n";
        
    }
    else
    {
        
        for (int i = 0; i < size; i++)
        {
            dataIn >> person;
            dataIn >> hour_worked; //pull data from file into hour
            dataIn >> rate_pay; //pull data from file into rate
            employee[i].setperson(person);
            employee[i].sethoursworked(hour_worked);
            employee[i].setpayrate(rate_pay);
        }
        for (int i = 0; i < size; i++) //output employee details
        {                                                               //return grosspay for each 7 employees !
            cout << "\nTotal gross pay of number " << employee[i].getperson()<< " employee is " <<employee[i].grosspay() <<endl;
            
        }
        dataIn.close(); //close file
        cout <<"\n";
    }
    return 0;
}
/*
 test case
 
 
 Total gross pay of number 2.00112e+08 employee is 1993.33
 
 Total gross pay of number 2.00992e+08 employee is 2915.64
 
 Total gross pay of number 2.13455e+08 employee is 4095
 
 Total gross pay of number 4.32196e+08 employee is 6211.83
 
 Total gross pay of number 1.23457e+08 employee is 5243.33
 
 Total gross pay of number 9.87654e+08 employee is 705.25
 
 Total gross pay of number 1.02938e+08 employee is 7583.33
 
 Total gross pay of number 6.57484e+08 employee is 6410.13
 
 Program ended with exit code: 0
 */
