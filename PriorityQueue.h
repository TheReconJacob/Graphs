#pragma once
template <typename T>
class PriorityQueue
{
private:
    int count;
    T* data;
    int size;

public:
    PriorityQueue(int size);
    void Insert(T item);
    bool IsEmpty();
    bool IsFull();
    T PeakMin();
    T Remove();
    int Size();
};

#include "PriorityQueue.tpp"