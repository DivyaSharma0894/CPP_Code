#include<iostream>
using namespace std;

class Queue {
public:
    int capacity;
    int* arr;
    int front;
    int rear;
    int size; // You forgot to declare this in the class

    // Constructor
    Queue(int val) {
        capacity = val;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }

    // Check if full
    bool isfull() {
        return size == capacity;
    }

    // Check if empty
    bool isempty() {
        return size == 0;
    }

    // Add element
    void enqueue(int val) {
        if (isfull()) {
            cout << "Queue is full" << endl;
        } else {
            rear = (rear + 1) % capacity;
            arr[rear] = val;
            size++;
            cout << val << " added to queue" << endl;
        }
    }

    // Remove element
    int dequeue() {
        if (isempty()) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            int val = arr[front];
            front = (front + 1) % capacity;
            size--;
            return val;
        }
    }

    // View front element
    int getFront() {
        if (isempty()) return -1;
        return arr[front];
    }

    // View rear element
    int getRear() {
        if (isempty()) return -1;
        return arr[rear];
    }

    // Destructor
    ~Queue() {
        delete[] arr;
    }
};

int main() {
    Queue q(5); // Queue of size 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << q.dequeue() << " removed from queue\n";

    q.enqueue(60); // Test circular queue

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    return 0;
}
