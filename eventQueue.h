/*
 * PA4_the_murder - Jacob Tutlis - jjtutlis - James Taylor - jrtaylor
 * Created by jrtaylor on 2/11/18.
 */

#include <iostream>
#include <queue>
#include "event.h"

#ifndef PA4_JRTAYLOR_EVENTQUEUE_H
#define PA4_JRTAYLOR_EVENTQUEUE_H

using namespace std;

// got code from tutorial at:
// https://www.codementor.io/codementorteam/a-comprehensive-guide-to-implementation-of-singly-linked-list-using-c_plus_plus-ondlm5azr
struct node {
    event *data;
    node *next;
    float arrTime; // arrTime;
};

class eventQueue {
    private:
        node *head, *tail;
    public:
        eventQueue(){
        	head = NULL;
        	tail = NULL;

        }
        event *getFirst();
        event *getIndex(int index);
        void priorityAdd(event *value);
        void createNode(event *e);
        void display();
        void insert_start(event *value);
        void insert_position(int pos, event *value);
        void delete_first();
};


#endif //PA4_JRTAYLOR_EVENTQUEUE_H
