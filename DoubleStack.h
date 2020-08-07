#include <string>
#include <cstring>
#include <iostream>

template <typename T>
class Stack
{
    private:
        T *items;
        int index;
        const int size;
    public:     
        int getnumbers() const;
        bool isempty() const;
        bool isfull() const; 
        bool push(const T & item);
        bool pop();
        void show() const;
        T & top() const;
        Stack(const int s);
        ~Stack();
};
template <typename T>
Stack<T>::Stack(const int s):size(s)
{
    items = new T[size];
    for(int i = 0;i < size;i++)
    {
        items[i] = 0;
    }
    index = 0;
}
template <typename T>
bool Stack<T>::isempty() const
{
    if(index == 0)
    {
        std::cout << "Stack already empty!\n";
        return true;
    }
        
    return false;
}
template <typename T>
bool Stack<T>::isfull() const
 {
     if(index == size)
     {
         std::cout << "Stack already full!\n"; 
         return true;
     }
     return false;
 }
template <typename T>
bool Stack<T>:: Stack::push(const T & item)
{
    if(isfull() == false)
    {
        items[index++] = item;
        return true;
    } 
    return false;
}
template <typename T>
bool Stack<T>::pop()
{
    if(isempty() == false)
    {
        items[--index] == 0;//index在push后加一,索引需减一
        std::cout << "pop success";
        return true;
    }
  
    return false;
}
template <typename T>
void Stack<T>::show() const
{
    for(int i = 0;i < index;i ++)//注意是小于等于
    {
        if(items[i] != 0)
        {
            std::cout << items[i] << " " ;
            std::cout << "\n";
        } 
    }
}
template <typename T>
Stack<T>:: ~Stack()
{
    delete [] items;
}
template <typename T>
T & Stack<T>::top() const
{
    return items[index - 1];//index此时为size,防止越界需减一
}
template <typename T>
int Stack<T>::getnumbers() const
{
    return index;
}

