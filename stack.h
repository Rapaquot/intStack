#ifndef CLASSES_STACK_H
#define CLASSES_STACK_H

#define MAX_SIZE 100

class Stack
{
protected:
    int arr[MAX_SIZE];
    int top;

public:
    // Constructor
    Stack();

    bool push(int);
    int pop();
    int peek();
    bool isEmpty();
};

#endif