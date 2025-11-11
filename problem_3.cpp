#include <iostream>

#define SIZE 5

using namespace std;

class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (rear == SIZE - 1);
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue.\n";
            return;
        }

        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear++;
        }

        arr[rear] = value;
        cout << value << " enqueued to queue.\n";
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return -1; // Returning -1 for simplicity, can throw exception instead
        }

        int value = arr[front];
        front++;

        if (front > rear) {
            front = -1;
            rear = -1;
        }

        cout << value << " dequeued from queue.\n";
        return value;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Queue elements are: ";
        for (int i = front; i <= rear; ++i) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);

    queue.display();

    queue.dequeue();
    queue.dequeue();

    queue.display();

    queue.enqueue(60);
    queue.enqueue(70);

    queue.display();

    return 0;
}
