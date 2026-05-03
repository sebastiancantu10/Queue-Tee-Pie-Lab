#include <iostream>

#include "src/hello.hpp"

int main() {

  // Create cute objects
  Puppy puppy;
  Kitty kitty;
  PygmyMarmoset marmoset;

  // Create queue object
  QueueTees queue;

  // Queue starts empty
  std::cout << "Starting size: " << queue.size() << std::endl;

  // Add objects to queue
  queue.enqueue(&puppy);
  queue.enqueue(&kitty);
  queue.enqueue(&marmoset);

  // Queue now has 3 objects
  std::cout << "After enqueue: " << queue.size() << std::endl;

  // First in first out
  std::cout << queue.dequeue()->get_description() << std::endl;
  std::cout << queue.dequeue()->get_description() << std::endl;
  std::cout << queue.dequeue()->get_description() << std::endl;

  return 0;
}
