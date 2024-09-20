#include "stack.h"

Stack::Stack()
{
    top = -1;
};

bool Stack::push(int value)
{
    bool success = false;
    if (top < MAX_SIZE - 1)
    {
        top++;
        arr[top] = value;
        success = true;
    }

    return success;
}