//
// Created by to024376 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_KROFKEN_SET_H
#define GRAPH_PUZZLE_GAME_KROFKEN_SET_H


class Set {
private:
    int data;
    int parent;
    int depth;
public:
    Set(int data, int index);
    Set();
    int getParent() const;
    int getDepth() const;
    void setParent(int parent);
    void incrementDepth();
};

#endif //GRAPH_PUZZLE_GAME_KROFKEN_SET_H
