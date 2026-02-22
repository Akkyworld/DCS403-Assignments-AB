/* // Program to implement queue using array.
#include <iostream>
#include <stdexcept>

using namespace std;

static const int maxSize = 5;

class Queue
{
private:
    int queueArray[maxSize];
    int front;
    int rear;

public:
    Queue();
    bool isEmpty();
    bool isFull();
    void enqueue(int data);
    int dequeue();
    int peek();
    void display();
    int size();
};

// Constructor
Queue::Queue()
{
    front = -1;
    rear = -1;
}

// Check if queue is empty
bool Queue::isEmpty()
{
    return (front == -1 || front > rear);
}

// Check if queue is full
bool Queue::isFull()
{
    return (rear == maxSize - 1);
}

// Insert element (enqueue)
void Queue::enqueue(int data)
{
    if (isFull())
        throw runtime_error("Queue Overflow");

    if (front == -1)  // first element insertion
        front = 0;

    queueArray[++rear] = data;
}

// Remove element (dequeue)
int Queue::dequeue()
{
    if (isEmpty())
        throw runtime_error("Queue Underflow - Queue is empty");

    return queueArray[front++];
}

// View front element
int Queue::peek()
{
    if (isEmpty())
        throw runtime_error("Queue is empty");

    return queueArray[front];
}

// Return size
int Queue::size()
{
    if (isEmpty())
        return 0;

    return (rear - front + 1);
}

// Display queue elements
void Queue::display()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue elements (Front to Rear):\n";
    for (int i = front; i <= rear; i++)
        cout << queueArray[i] << endl;
}

int main()
{
    Queue q;

    try
    {
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.enqueue(50);

        q.display();

        cout << "Front Item: " << q.peek() << endl;
        cout << "Total Items: " << q.size() << endl;

        cout << "Dequeued: " << q.dequeue() << endl;
        cout << "Dequeued: " << q.dequeue() << endl;

        q.display();

        // Remove remaining elements
        while (!q.isEmpty())
            cout << "Dequeued: " << q.dequeue() << endl;

        // This will trigger underflow
        q.dequeue();
    }
    catch (const exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
 */

 //Implement the search(element) function using recursion.

/* #include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    if (n == 0)
        return -1;
    if (arr[0] == x)
        return 0;
    int i = search(arr + 1, n - 1, x);
    if (i == -1)
        return -1;
    return i + 1;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int result = search(arr, n, x);
    if (result == -1)
        cout << "Element not found in the array." << endl;
    else
        cout << "Element found at index: " << result << endl;
    return 0;
} */

// Code that displays the root's left child's left child's element

/* #include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

int main()
{
    Node* root = createNode(1);
    root->left = createNode(2);
    root->left->left = createNode(4);
    cout << "The root's left child's left child's element is: " << root->left->left->data << endl;
    return 0;
} */


//The assignment operator should be implemented in the BST class along with the copy constructor and destructor. Implement the assignment operator.
#include <iostream>
using namespace std;

class BST {
private:
    struct TreeNode {
        int element;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int value) : element(value), left(nullptr), right(nullptr) {}
    };

    TreeNode* root;

    TreeNode* copyTree(TreeNode* node);
    void destroyTree(TreeNode* node);

public:
    // Constructor
    BST() : root(nullptr) {}

    // Copy Constructor
    BST(const BST& other) {
        root = copyTree(other.root);
    }

    // Destructor
    ~BST() {
        destroyTree(root);
    }

    // Assignment Operator
    BST& operator=(const BST& other);
};
// Assignment Operator Definition
BST& BST::operator=(const BST& other) {
    if (this != &other) {
        destroyTree(root);            // Delete existing tree
        root = copyTree(other.root);  // Deep copy
    }
    return *this;
}
// Copy Tree Function
BST::TreeNode* BST::copyTree(TreeNode* node) {
    if (node == nullptr)
        return nullptr;

    TreeNode* newNode = new TreeNode(node->element);
    newNode->left = copyTree(node->left);
    newNode->right = copyTree(node->right);
    return newNode;
}
// Destroy Tree Function
void BST::destroyTree(TreeNode* node) {
    if (node != nullptr) {
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
    }
}

// Main Function (Test)
int main() {
    BST tree1;
    BST tree2;

    tree2 = tree1;  // Testing assignment operator

    cout << "Assignment operator executed successfully." << endl;

    return 0;
}
