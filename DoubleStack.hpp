//
//  DoubleStack.hpp
//  Week 11 Lab
//
//  Created by Justin Figueroa on 5/7/24.
//

#ifndef DoubleStack_hpp
#define DoubleStack_hpp

#include <stdio.h>
 const int STACKSIZE = 100;
class studentStack{
private:
    double grades[STACKSIZE];
    int top; //index at top of stack
public:
    studentStack();
    bool isEmpty() const;
    void push(const double& newEntry);
    double pop();
    int peek() const;


};

#endif /* DoubleStack_hpp */
