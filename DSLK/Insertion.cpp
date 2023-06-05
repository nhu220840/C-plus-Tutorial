#include <bits/stdc++.h>

using namespace std;

struct Student{
    string ID;
    string name;
    double gpa;
    void input(){
        getline(cin, ID);
        getline(cin, name);
        cin >> gpa;
        cin.ignore();
    }
    void output(){
        cout << ID << " " << name << " " << fixed << setprecision(2) << gpa << endl;
    }
};

typedef Student St;

struct node{
    St data;
    node *next;
};

node* makeNode(St x){
    node* newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void pushFront(node *&head, St x){
    node* newNode = makeNode(x);
    newNode->next = head;
    head = newNode;
}

void pushBack(node *&head, St x){
    node* newNode = makeNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void insert(node *&head, St x, int k){
    node* newNode = makeNode(x);
    if(k == 1){
        pushFront(head, x);
        return;
    }
    node* tmp = head;
    for(int i = 1; i <= k - 2; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void duyet(node* head){
    while(head != NULL){
        head->data.output();
        head = head->next;
    }
}

int main(){
    int n; cin >> n;
    node* head = NULL;
    while(n--){
        int tt; cin >> tt;
        cin.ignore();
        if(tt == 1){
            St x;
            x.input();
            pushFront(head, x);
        }
        else if(tt == 2){
            St x; x.input();
            pushBack(head, x);
        }
        else{
            int k; cin >> k;
            cin.ignore();
            St x; x.input();
            insert(head, x, k);
        }
    }
    duyet(head);
}