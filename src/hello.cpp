#include <iostream>
#include "hello.hpp"

// Constructor starts empty queue
QueueTees::QueueTees() {
   front = 0;
   rear = 0;
   count = 0;
}

// Add object to rear of queue
void QueueTees::enqueue(Cutie* item) {

   // If queue full do nothing
   if (count == MAX) {
      std::cout << "Queue is full!" << std::endl;
      return;
   }

   items[rear] = item;

   // Move rear forward circularly
   rear = (rear + 1) % MAX;

   count++;
}

// Remove first object in queue
Cutie* QueueTees::dequeue() {

   // If queue empty return nullptr
   if (count == 0) {
      std::cout << "Queue is empty!" << std::endl;
      return nullptr;
   }

   Cutie* removed = items[front];

   // Move front forward circularly
   front = (front + 1) % MAX;

   count--;

   return removed;
}

// Return current size
int QueueTees::size() {
   return count;
}
