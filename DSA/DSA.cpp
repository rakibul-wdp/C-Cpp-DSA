// Queue implementation in

#include <iostream>
#define SIZE 5

using namespace std;

class Queue {
  private:
    int items[SIZE], front, rear;

  public:
  Queue() {
    front = -1;
    rear = -1;
  }

  bool isFull() {
    if (front == 0 && rear = SIZE - 1) {
      return true;
    }
    return false;
  }

  bool isEmpty() {
    if (front == - 1)
      return true;
    else
      return false;
  }
}