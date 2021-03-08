#include "String_list.h"
#include "node.h"
#include <string>
#include <iostream>

using namespace std;

String_list::String_list(){
    head = NULL;
    tail = NULL;
}

void String_list::create_list(string value) {
    struct node *temp = new node();
    temp->info = value;
    temp->next = NULL;
    if(head == NULL){
        temp->prev = NULL;
        head = temp;
        tail = temp;
    }
    else{
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void String_list::list_display() {
    struct node *temp = new node();
    temp = head;
    while(temp != NULL){
        cout << temp->info << endl;
        temp = temp->next;
    }
}

void String_list::insert_beg(string value) {
    struct node *temp = new node();
    temp->info = value;
    temp->prev = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
}


void String_list::insert_end(string value) {
    struct node *temp = new node();
    temp->info = value;
    temp->prev = tail;
    temp->next = NULL;
    tail->next = temp;
    tail = temp;
}

void String_list::insert_middle(string posi_value, string value) {
    node *temp = new node();
    node *current = new node();
    node *before = new node();
    current = head;
    while(current->info != posi_value){
        before = current;
        current = current->next;
    }
    temp->info = value;
    before->next = temp;
    temp->prev = before;
    temp->next = current;
    current->prev = temp;
}

void String_list::delete_begin() {
    head = head->next;
}

void String_list::delete_end() {
    node *temp = new node();
    temp = tail;
    tail = temp->prev;
    delete temp;
}

void String_list::delete_middle(string value) {
    node *temp = new node();
    node *before = new node();
    node *after = new node();
    temp = head;
    while(temp->info != value){
        temp = temp->next;
    }
    before = temp->prev;
    after = temp ->next;
    before->next = after;
    after->prev = before;
    delete temp;
}

