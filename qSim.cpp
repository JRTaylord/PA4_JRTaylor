//
// Created by student on 2/10/18.
//
#include <iostream>
#include <queue>
#include "event.h"

using namespace std;

int printQueue(priority_queue<event> q){
    while (!q.empty()){
        printf("%d\n",q.top().time);
        q.pop();
    }
    return 0;
}

int main(){
    priority_queue<event> events;
    events.push(new event(1));
    events.push(1);
    events.push(new event(3));
    events.push(new event(2));
    printQueue(events);
    return 0;
}