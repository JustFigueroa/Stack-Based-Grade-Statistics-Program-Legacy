//
//  DoubleStack.cpp
//  Week 11 Lab
//
//  Created by Justin Figueroa on 5/7/24.
//

#include "DoubleStack.hpp"
#include <iostream>
using namespace std;


studentStack::studentStack(){
    top = -1;
}
bool studentStack::isEmpty() const{
    return top < 0 ;
};
void studentStack::push(const double& newEntry){
    if (top < STACKSIZE - 1){
        top++;
        grades[top] = newEntry;
    }
};
double studentStack::pop(){
    double poppedItem = 0;
    if (!isEmpty()){
        poppedItem = grades[top];
        top--;
        return poppedItem;
        
    }
    else
        cout << "Stack is empty, cannot pop.";
    return -1;
};

int studentStack::peek() const{
    return  grades[top];
    
};
