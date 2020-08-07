#include <iostream>
#include "D:\VSCode\C++Project\algrithm\DoubleStack.h"
const static int SIZE = 10;
class SQueue
{
private:
    Stack<int>stack1;
    Stack<int>stack2;
public:
    void appendTail(const int & item);
    void deleteTail();
    void print() const;
    SQueue();
};
SQueue::SQueue():stack1(SIZE / 2),stack2(SIZE / 2)
{
    
}
void SQueue::appendTail(const int & item)
{
    stack1.push(item);
}
void SQueue::deleteTail()
{
    if(stack2.getnumbers() <= 0)
    {
         while (stack1.getnumbers() > 0)
        {
            int top = stack1.top();
            stack1.pop();
            stack2.push(top);
        }
    }
    stack2.pop();
}
void SQueue::print() const
{   
    std::cout << "stackInfo\n";
    std::cout << "stack2 : \n";
    stack2.show();
    std::cout << "stack1 : \n";
    stack1.show();
  
}