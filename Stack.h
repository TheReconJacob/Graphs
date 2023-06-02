template <class T>
class Stack {
private:
    int maxSize;
    T** stackData;
    int top;
public:
    Stack(int maxSize);
    void Push(T* value);
    int Count();
    T* Pop();
    T* Peek();
    bool IsEmpty();
    bool IsFull();
};

#include "stack.tpp"