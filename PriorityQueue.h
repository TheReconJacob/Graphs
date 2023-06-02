#pragma once

template <typename T>
class PriorityQueue
{
    int size;
    T** data;
    int count;

public:
    PriorityQueue(int size);
    ~PriorityQueue();
    void Insert(T* item);
    T* Remove();
    T* PeakMin();
    bool IsEmpty();
    bool IsFull();
    int Size();
};

#include "PriorityQueue.tpp"