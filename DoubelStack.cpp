#include <iostream>
#include "SQueue.h"

int main(void)
{
    SQueue queue;
    for(int i = 0;i < 4;i++)
    {
        queue.appendTail(i + 2);
    }
    queue.print();
    std::cout << "*******************\n";
    queue.deleteTail();
    queue.deleteTail();
    queue.deleteTail();
    queue.print();
    queue.appendTail(3);
    std::cout << "*******************\n";
    queue.print();
    queue.deleteTail();
    queue.print();
    return 0;
}