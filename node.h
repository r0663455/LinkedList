#pragma once

class Node {

    public:
        Node(int data);

    public:
        void set_next(Node * node);
        Node * get_next(void);

        int get_data(void);

    private:
        int data;
        Node * node;
};