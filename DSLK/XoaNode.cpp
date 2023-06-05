#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};

void pushBack(node *&head, int x){
    node* newNode = new node(x);
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

void erase(node *&head, int x){
    if(head == NULL){
        return;
    }
    node* tmp = head;
    node* prev = NULL;
    while(tmp != NULL){
        if(tmp->data == x){
            if(prev != NULL){
                prev->next = tmp->next;
                tmp = prev->next;
            }
            else{
                head = tmp->next;
                tmp = head;
            }
        }
        else{
            prev = tmp;
            tmp = tmp->next;
        }
    }
}

void duyet(node *head){
    if(head == NULL){
        cout << "EMPTY";
    }
    else{
        node* tmp = head;
        while(tmp != NULL){
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
    }
}

int main(){
    int n, x; cin >> n >> x;
    node* head = NULL;
    for(int i = 1; i <= n; i++){
        int k; cin >> k;
        pushBack(head, k);
    }
    erase(head, x);
    duyet(head);
}