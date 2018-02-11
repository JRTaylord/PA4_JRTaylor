//
// Created by student on 2/10/18.
//

#ifndef PA4_JRTAYLOR_EVENT_H
#define PA4_JRTAYLOR_EVENT_H


class event {
    public:
        int time;
        bool compare(event other){
            if (other.time<this->time){
                return true;
            } else{
                return false;
            }
        }
};


#endif //PA4_JRTAYLOR_EVENT_H
