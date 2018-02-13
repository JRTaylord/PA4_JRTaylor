//
// Created by student on 2/11/18.
//

#include "eventQueue.h"
#include <iostream>

void eventQueue::createNode(event e){
    node *temp = new node;
    temp->data = e;
    temp->next = NULL;
    if (head==NULL){
        head=temp;
        tail=temp;
        temp=NULL;
    } else {
        tail->next=temp;
        tail=temp;
    }
}

void eventQueue::display(){
    node *temp;
    temp=new node;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}

void eventQueue::insert_start(event value) {
    node *temp;
    temp=new node;
    temp->data=value;
    temp->next=head;
    head=temp;
}

void eventQueue::insert_end(event value) {
    node* temp;
    temp=new node;
    temp->data=value;
    temp->next=NULL;
    tail=temp;
}