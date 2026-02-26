// Linear Queue
// 1. Write a program to create a linear queue using array.
#include <iostream>
using namespace std;

#define SIZE 5

int queueArr[SIZE];
int front = -1, rear = -1;

int main() {
    cout << "Linear Queue Created Successfully";
    return 0;
}
// 2. Write a program to insert an element in a linear queue.
#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue is Full";
        return;
    }
    if (front == -1)
        front = 0;

    queueArr[++rear] = value;
    cout << "Inserted: " << value;
}

int main() {
    enqueue(10);
    return 0;
}
//3. Write a program to delete an element from a linear queue.
#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty";
        return;
    }
    cout << "Deleted: " << queueArr[front++];
}

int main() {
    dequeue();
    return 0;
}

// 4. Write a program to display the front element of a linear queue.
#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty";
        return;
    }
    cout << "Front Element: " << queueArr[front];
}

int main() {
    peek();
    return 0;
}

// 5. Write a program to display the elements of a linear queue.
#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty";
        return;
    }
    for (int i = front; i <= rear; i++)
        cout << queueArr[i] << " ";
}

int main() {
    display();
    return 0;
}
// 6. Write a program to check if a linear queue is empty or full.
#include <iostream>
using namespace std;

#define SIZE 5
int front = -1, rear = -1;

bool isEmpty() {
    return (front == -1);
}

bool isFull() {
    return (rear == SIZE - 1);
}

int main() {
    cout << "Empty: " << isEmpty() << endl;
    cout << "Full: " << isFull();
    return 0;
}

// Circular Queue
// 1. Write a program to create a circular queue using array.
#include <iostream>
using namespace std;

#define SIZE 5

int queueArr[SIZE];
int front = -1, rear = -1;

int main() {
    cout << "Circular Queue Created Successfully";
    return 0;
}
// 2. Write a program to insert an element in a circular queue.
#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        cout << "Queue is Full";
        return;
    }
    if (front == -1)
        front = 0;

    rear = (rear + 1) % SIZE;
    queueArr[rear] = value;
    cout << "Inserted: " << value;
}

int main() {
    enqueue(10);
    return 0;
}
// 3. Write a program to delete an element from a circular queue.
#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty";
        return;
    }
    cout << "Deleted: " << queueArr[front++];
}

int main() {
    dequeue();
    return 0;
}

// 4. Write a program to display the front element of a circular queue.
#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty";
        return;
    }
    cout << "Front Element: " << queueArr[front];
}

int main() {
    peek();
    return 0;
}

// 5. Write a program to display the elements of a circular queue.
#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty";
        return;
    }
    for (int i = front; i <= rear; i++)
        cout << queueArr[i] << " ";
}

int main() {
    display();
    return 0;
}

// 6. Write a program to check if a circular queue is empty or full.
#include <iostream>
using namespace std;

#define SIZE 5
int front = -1, rear = -1;

bool isEmpty() {
    return (front == -1);
}

bool isFull() {
    return (rear == SIZE - 1);
}

int main() {
    cout << "Empty: " << isEmpty() << endl;
    cout << "Full: " << isFull();
    return 0;
}
