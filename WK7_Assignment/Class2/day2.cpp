// 1. Write a program to create a linked list using array.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4;

    Node* head = NULL;
    Node* temp = NULL;

    for (int i = 0; i < n; i++) {
        Node* newNode = new Node();
        newNode->data = arr[i];
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Traversal
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}
// 2. Write a program to search an element in a linked list.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void search(Node* head, int X) {
    int position = 1;
    while (head != NULL) {
        if (head->data == X) {
            cout << "Found at position: " << position;
            return;
        }
        head = head->next;
        position++;
    }
    cout << "Element not found";
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, NULL}}};
    search(head, 20);
    return 0;
}
// 3. Write a program to insert an element at the end of a linked list.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertEnd(Node*& head, int value) {
    Node* newNode = new Node{value, NULL};

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node{10, new Node{20, NULL}};
    insertEnd(head, 30);
    display(head);
    return 0;
}
// 4. Write a program to insert an element at the beginning of a linked list.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertBeginning(Node*& head, int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node{20, new Node{30, NULL}};
    insertBeginning(head, 10);
    display(head);
    return 0;
}
// 5. Write a program to delete an element from a linked list.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteValue(Node*& head, int X) {
    if (head == NULL) return;

    if (head->data == X) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != X)
        temp = temp->next;

    if (temp->next != NULL) {
        Node* del = temp->next;
        temp->next = del->next;
        delete del;
    }
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, NULL}}};
    deleteValue(head, 20);
    display(head);
    return 0;
}

// 6. Write a program to delete an element from a specific position in a linked list.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deletePosition(Node*& head, int pos) {
    if (head == NULL) return;

    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL) return;

    Node* del = temp->next;
    temp->next = del->next;
    delete del;
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, NULL}}};
    deletePosition(head, 2);
    display(head);
    return 0;
}
// 7. Write a program to reverse a linked list.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void reverse(Node*& head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, NULL}}};
    reverse(head);
    display(head);
    return 0;
}
// 8. Write a program to count the number of nodes in a linked list.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int countNodes(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, NULL}}};
    cout << "Number of nodes: " << countNodes(head);
    return 0;
}
// 9. Write a program to insert an element after a specific element in a linked list.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAfter(Node* head, int X, int Y) {
    while (head != NULL && head->data != X)
        head = head->next;

    if (head != NULL) {
        Node* newNode = new Node{Y, head->next};
        head->next = newNode;
    }
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, NULL}}};
    insertAfter(head, 20, 25);
    display(head);
    return 0;
}
// 10. Write a program to print the elements of a linked list in reverse order.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printReverse(Node* head) {
    if (head == NULL)
        return;

    printReverse(head->next);
    cout << head->data << " ";
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, NULL}}};
    printReverse(head);
    return 0;
}