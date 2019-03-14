//
//  PayRoll.h
//  ArrayOfPayRollObject
//
//  Created by Emmanuel Idehen on 2/27/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//

#ifndef PayRoll_h
#define PayRoll_h

class PayRoll{
    //class payRoll
private:
    double hourly_pay_rate;
    double number_of_hours_worked;
    std::string person;
public:
    
    // functions
    PayRoll();
    void sethoursworked(double hours);
    void setpayrate(double rate);
    void setperson(std::string person);
    double gethoursworked();
    std::string getperson();
    double getpayrate();
    double grosspay();
    
};





#endif /* PayRoll_h */
