#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* next;
};

node* makeNode(int x){
    node* newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void duyet(node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int dem(node *head){
    int ans = 0;
    while(head != NULL){
        ans++;
        head = head->next;
    }
    return ans;
}

void pushback(node *&head, int x){
    node *newNode = makeNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void pushfront(node *&head, int x){
    node *newNode = makeNode(x);
    newNode->next = head;
    head = newNode;
}

void pushrandom(node *&head, int x, int k){
    if(k < 1 || k > dem(head) + 1) return;
    node *newNode = makeNode(x);
    if(k == 1){
        pushfront(head, x); return;
    }
    node *tmp = head;
    for(int i = 1; i <= k - 2; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void eraseStart(node *&head){
    if(head == NULL) return;
    node *del = head;
    head = head->next;
    delete del;
}

void eraseEnd(node *&head){
    if(head == NULL) return;
    node *tmp = head;
    if(tmp->next == NULL){
        head = NULL;
        delete tmp;
        return;
    }
    while(tmp->next->next != NULL){
        tmp = tmp->next;
    }
    node *del = tmp->next;
    tmp->next = NULL;
    delete del;
}

void eraseRandom(node *&head, int k){
    if(k < 1 || k > dem(head)) return;
    node *tmp = head;
    if(k == 1){
        eraseStart(head);
        return;
    }
    for(int i = 1; i <= k - 1; i++){
        tmp = tmp->next;
    }
    node *del = tmp->next;
    tmp->next = del->next;
    delete del;
}

int main(){
    node *head = NULL;
    for(int i = 1; i <= 5; i++){
        pushback(head, i);
    }
    duyet(head);
}