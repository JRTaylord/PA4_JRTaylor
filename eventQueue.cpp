//
// Created by jrtaylor on 2/11/18.
//

#include "eventQueue.h"
#include "event.h"

event *eventQueue::getFirst() {
    return head->data;
}

/**
 * for getting an event at the given index
 * @param index
 * @return
 */
event *eventQueue::getIndex(int index) {
    node *cur = new node;
    cur = head;
    for (int i = 0; i < index; ++i) {
        cur = cur->next;
    }
    return cur->data;
}

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

void eventQueue::display() {
	node *temp;
	temp = new node;
	temp = head;
	while (temp != NULL) {
		cout << temp->data->getArrTime() << "\t";
		temp = temp->next;
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
// Followed this example: http://www.sanfoundry.com/cpp-program-implements-priority-queue/
/* Adds event to the correct position in the tree
 * by checking the time of arrival
 * @param event being inserted
 * @return void
 */
void eventQueue::priorityAdd(event *value) {

	node *temp, *temp1, *temp2;
	temp = new node;
    temp1 = new node;
    temp2 = new node;
	temp->data = value;
	temp->arrTime = value->getArrTime(); // Priority
	if (head == NULL || value->getArrTime() < head->arrTime) {
		temp->next = head;
		head = temp;
	} else {
		temp1 = head;
		//q->link->priority <= priority)
        // TODO: Solve infinite loop here
		while (temp1->next != NULL && temp1->data->getArrTime() <= value->getArrTime()) {
            // checks if the input value's time is less than the next and greater than the previous
            if(temp->data->getArrTime() >= temp1->data->getArrTime()){
                // path for setting a new tail
                if(temp1->next == NULL){
                    temp->next = NULL;
                    temp1->next = temp;
                    tail = temp;
                }
                // path for inserting within the list
                else{
                    temp2 = temp1->next;
                    temp->next = temp2;
                    temp1->next = temp;
                }
                break;
            }
			temp1 = temp1->next;
			temp->next = temp1->next;
			temp1->next = temp;
		}
	}

//	node *pre;
//	node *cur;
//	node *temp;
//	pre = new node;
//	cur = new node;
//
//	cur = head;
//
//	if (head == NULL) {
//		std::cout << "test\n";
//	}
//
//	bool isDone = false;
//
//	while (!isDone) {
//		if (cur == NULL) {
//			temp->data = value;
//			temp->next = NULL;
//			head = temp;
//			return true;
//		}
//
//		if (value->arrTime < cur->data->arrTime) {
//			temp->data = value;
//			pre->next = temp;
//			temp->next = cur;
//			return true;
//		}
//
//		if (tail == NULL) {
//			temp->data = value;
//			temp->next = NULL;
//			tail = temp;
//			return true;
//		}
//
//		if (value->arrTime > cur->data->arrTime) {
//			pre = cur;
//			cur = cur->next;
//		}
//
//	}
//
//	return false;

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
