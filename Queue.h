#pragma once
template <typename Object>

class Queue
{
public:
    bool isEmpty() const
    {
        return theList.empty();
    }
    const Object& getFront() const      // FIFO means the "front" will be the end of the queue
    {
        return *theList.end();
    }
    void enqueue(const Object& x)       // FIFO so adds to the "end of the line"
    {
        theList.push_front(x);
    }
    Object& dequeue()       // Queue is FIFO so dequeue takes the "first in line"
    {
        theList.pop_back();

        return *theList.begin();
    }
private:
    List<Object> theList;
};
