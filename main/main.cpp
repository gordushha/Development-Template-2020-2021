#include <iostream>
#include "priority_queue.h"

int main() {
  std::cout << "hello!" << std::endl;

  PriorityQueue pq;

  pq.push(3, 1);
  pq.push(5, 4);
  pq.push(6, 4);
  pq.push(0, 5);
  pq.push(5, 7);

  pq.print();

  pq.push(3, 2);

  pq.print();

  pq.push(6, 5);

  pq.print();

  pq.push(14, 0);

  pq.print();

  pq.push(7, 10);

  pq.print();

  pq.push(4, 0);

  pq.print();

  //pq.DelPQueue();
  //pq.print();

  std::cout << "Top: " << pq.top() << std::endl;

  pq.pop();
  pq.pop();
  pq.print();

  return 0;
}