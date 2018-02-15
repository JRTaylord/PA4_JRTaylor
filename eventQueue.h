//
// Created by student on 2/11/18.
//

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
};

class eventQueue {
    private:
        node *head, *tail;
    public:
        eventQueue(){

        }
        bool add(event *value);
        void createNode(event *e);
        void display();
        void insert_start(event *value);
        void insert_end(event *value);
        void insert_position(int pos, event *value);
        void delete_first();
        void delete_last();
        void delete_position(int pos);
};


#endif //PA4_JRTAYLOR_EVENTQUEUE_H
