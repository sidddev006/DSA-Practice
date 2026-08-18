#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* create();
void display(Node* head);
Node* insertHead(Node* head, int data);
Node* insertTail(Node* head, int data);
Node* insertPos(Node* head, int data, int pos);
bool search(Node* head, int target);
int len(Node* head);

//Creation of a singly linked list
Node* create(){
    int n;
    cin>>n;
    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 0; i<n;i++){
        int data;
        cin>>data;

        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

//Display all elements of a singly linked list
void display(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//Insert a new node at beginning
Node* insertHead(Node* head, int data){
    return new Node(data, head);
}

//Insert a new node at end
Node* insertTail(Node* head, int data){
    Node* newNode = new Node(data);
    if(head == NULL) return newNode;
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;    
    temp->next = newNode;
    return head;
}

//Insert at position
Node* insertPos(Node* head, int data, int pos){
    if(pos <= 0) return head;
    if(pos==1) return new Node(data, head);
    int cnt = 1;
    Node* temp = head;
    while(temp != NULL && cnt < pos - 1){
        cnt++;
        temp = temp->next;
    }
    if(!temp) return head;
    Node* newNode = new Node(data, temp->next);
    temp->next = newNode;
    return head;
}

bool search(Node* head, int target){
    Node* temp = head;
    while(temp){
        if(temp->data == target) return true;
        temp = temp->next;
    }
    return false;
}

int len(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp){
        cnt++;
        temp= temp->next;
    }
    return cnt;
}

//The menu driven part
int main() {

    Node* head = NULL;

    int choice;

    do {
        cout << "\n========== LINKED LIST MENU ==========\n";
        cout << "1. Create List\n";
        cout << "2. Display List\n";
        cout << "3. Insert at Beginning\n";
        cout << "4. Insert at End\n";
        cout << "5. Insert at Position\n";
        cout << "6. Search\n";
        cout << "7. Find Length\n";
        cout << "8. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                head = create();
                break;

            case 2:
                display(head);
                break;

            case 3: {
                int data;
                cout << "Enter data: ";
                cin >> data;

                head = insertHead(head, data);
                break;
            }

            case 4: {
                int data;
                cout << "Enter data: ";
                cin >> data;

                head = insertTail(head, data);
                break;
            }

            case 5: {
                int data, pos;

                cout << "Enter data: ";
                cin >> data;

                cout << "Enter position: ";
                cin >> pos;

                head = insertPos(head, data, pos);
                break;
            }

            case 6: {
                int target;

                cout << "Enter element to search: ";
                cin >> target;

                if(search(head, target))
                    cout << "Element found\n";
                else
                    cout << "Element not found\n";

                break;
            }

            case 7:
                cout << "Length = " << len(head) << endl;
                break;

            case 8:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 8);

    return 0;
}
