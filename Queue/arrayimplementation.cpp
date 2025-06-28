#include<iostream>
using namespace std;

class Queue {
public:
    int* arr;
    int capacity;
    int front;
    int rear;

    Queue(int val) {
        capacity = val;
        arr = new int[capacity];
        front = 0;
        rear = -1;
    }

    void enqueue(int x) {
        if (rear == capacity - 1) {
            cout << "Overflow 😵" << endl;
        } else {
            arr[++rear] = x;
            cout << x << " enqueued ✅" << endl;
        }
    }

    void dequeue() {
        if (front > rear) {
            cout << "Queue is empty 😶" << endl;
        } else {
            cout << arr[front] << " dequeued ❌" << endl;
            front++;
        }
    }

    void display() {
        if (front > rear) {
            cout << "Queue is empty 😢" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue Q(5);
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);
    Q.display();

    Q.dequeue();
    Q.display();

    cout << "Front index: " << Q.front << endl;
    cout << "Rear index: " << Q.rear << endl;

    return 0;
}
