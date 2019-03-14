//
//  PayRoll.cpp
//  ArrayOfPayRollObject
//
//  Created by Emmanuel Idehen on 2/27/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <string>
#include <fstream>
#include "PayRoll.h"

using namespace std;

PayRoll::PayRoll() //constructor
{
    number_of_hours_worked=0; //default
    hourly_pay_rate=0;  //default
    person = " ";
}
void PayRoll::setperson(string persons)
{
    person = persons;
}
void PayRoll::setpayrate(double rate) //setPayrate
{
    hourly_pay_rate = rate;
    
}
void PayRoll::sethoursworked(double hours)  //sethoursworked
{
    number_of_hours_worked = hours;
}
string PayRoll::getperson()
{
    
    return person;
}
double PayRoll::gethoursworked()  //gethoursworked which returns number of hours worked
{
    return number_of_hours_worked;
}
double PayRoll::getpayrate()   //getpayrate which returns hourly pay rate
{
    return hourly_pay_rate;
}
double PayRoll::grosspay()  //grosspay function to return the num of hours worked * hourly pay all * 52 weeks divided by 12 months in a year!
{
    return ((number_of_hours_worked * hourly_pay_rate)*52)/12;
    
}
