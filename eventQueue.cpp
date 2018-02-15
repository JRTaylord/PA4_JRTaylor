//
// Created by student on 2/11/18.
//

#include "eventQueue.h"
#include <iostream>

void eventQueue::createNode(event *e) {
	node *temp = new node;
	temp->data = e;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
		tail = temp;
		temp = NULL;
	} else {
		tail->next = temp;
		tail = temp;
	}
}


 void eventQueue::display(){
 node *temp;
 temp=new node;
 temp=head;
 while(temp!=NULL){
 cout << temp->data->time << "\t";
 temp=temp->next;
 }
 }


void eventQueue::insert_start(event *value) {
	node *temp;
	temp = new node;
	temp->data = value;
	temp->next = head;
	head = temp;
}

void eventQueue::insert_end(event *value) {
	node* temp;
	temp = new node;
	temp->data = value;
	temp->next = NULL;
	tail = temp;
}

/* Adds event to the correct position in the tree
 * @param event being inserted
 * @return void
 */
void eventQueue::add(event *value) {
	node *pre;
	node *cur;
	node *temp;
	pre = new node;
	cur = new node;
	temp = new node;
	cur = head;
//	while (tail != NULL || value->arrTime < ){
//		return NULL;
//	}



}

void eventQueue::insert_position(int pos, event *value) {
	node *pre;
	node *cur;
	node *temp;
	pre = new node;
	cur = new node;
	temp = new node;
	cur = head;
	for (int i = 1; i < pos; ++i) {
		pre = cur;
		cur = cur->next;
	}
	temp->data = value;
	pre->next = temp;
	temp->next = cur;
}

void eventQueue::delete_first() {
	node *temp;
	temp = head;
	head = head->next;
	delete temp;
}

void eventQueue::delete_last() {
	node *cur = new node;
	node *prev = new node;
	cur = head;
	while (cur->next != NULL) {
		prev = cur;
		cur = cur->next;
	}
	tail = prev;
	prev->next = NULL;
	delete cur;
}

void eventQueue::delete_position(int pos) {
	node *cur = new node;
	node *prev = new node;
	cur = head;
	for (int i = 1; i < pos; ++i) {
		prev = cur;
		cur = cur->next;
	}
	prev->next = cur->next;
}
