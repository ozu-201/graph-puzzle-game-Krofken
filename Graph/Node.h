//
// Created by to024376 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_KROFKEN_NODE_H
#define GRAPH_PUZZLE_GAME_KROFKEN_NODE_H
#include <string>

using namespace  std;

class Node {
private:
    int data;
    Node* next;
public:
    explicit Node(int data);
    void setNext(Node* _next);
    Node* getNext();
    int getData();
    string to_string();
};


#endif //GRAPH_PUZZLE_GAME_KROFKEN_NODE_H
