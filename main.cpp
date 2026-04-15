//
//  main.cpp
//  Week 11 Lab
//
//  Created by Justin Figueroa on 5/7/24.
//

#include <iostream>
#include <iomanip>
#include "DoubleStack.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

    studentStack* stackPtr = new studentStack;
    
    int numOfGrades;
    double grade;
    double poppedValue;
    double max = 0;
    double min = 0;
    double sum = 0;
    double percent;
    char gradeLetter;
    
    
    cout << "How many scores are you going to enter: ";
    cin >> numOfGrades;
    for (int i=0; i<numOfGrades;i++)
    {
        cout << "what is quiz " << i+1 << "'s score: ";
        cin >> grade;
        stackPtr -> push(grade);
    }
    cout << endl;
    
    for (int i = 0; i < numOfGrades; i++){
        poppedValue = stackPtr -> pop();
        
        //Find Max
        if (max == 0)
            max = poppedValue;
        else if (poppedValue < max)
            max = max;
        else max = poppedValue;
        
        //Find Min
        if (min == 0)
            min = poppedValue;
        else if (poppedValue > min )
            min = min;
        else min = poppedValue;
        
        //Calculate Sum
        sum = sum + poppedValue;
        
        }
    
    //Calculate Percent
    percent = (sum / (numOfGrades * 100)) * 100;
    
    //Determine Grade Letter
    if (percent > 90.0)
        gradeLetter = 'A';
    else if (percent > 80.0)
        gradeLetter = 'B';
    else if (percent > 70.0)
        gradeLetter = 'C';
    else if (percent > 60.0)
        gradeLetter = 'D';
    else
        gradeLetter = 'F';
    
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
    cout << "Sum: " << fixed << setprecision(1) << sum << endl;
    cout << "Percent: " << fixed << setprecision(1) << percent << "%" << endl;
    cout << "Grade: " << gradeLetter;

    cout << endl;
    return 0;
}
