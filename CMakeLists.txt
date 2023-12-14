cmake_minimum_required(VERSION 3.25)
project(graph_puzzle_game_Krofken)

set(CMAKE_CXX_STANDARD 14)

include_directories(Graph)

add_executable(graph_puzzle_game_Krofken
        Graph/AbstractGraph.cpp
        Graph/AbstractGraph.h
        Graph/DisjointSet.cpp
        Graph/DisjointSet.h
        Graph/Edge.cpp
        Graph/Edge.h
        Graph/Graph.cpp
        Graph/Graph.h
        Graph/Heap.cpp
        Graph/Heap.h
        Graph/HeapNode.cpp
        Graph/HeapNode.h
        Graph/MinHeap.cpp
        Graph/MinHeap.h
        Graph/Node.cpp
        Graph/Node.h
        Graph/Path.cpp
        Graph/Path.h
        Graph/Queue.cpp
        Graph/Queue.h
        Graph/Set.cpp
        Graph/Set.h Graph/Project.h Graph/Project.cpp Graph/Main.cpp)
