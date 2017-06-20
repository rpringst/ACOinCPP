//=================================
// include guard
#ifndef ACO_GRAPH_H
#define ACO_GRAPH_H

//=================================
// forward declared dependencies
// NONE

//=================================
// included dependencies
#include "vertex.h"
#include "edge.h"
#include <iostream>

class Graph {
    std::set<Vertex> _vertices;
public:
    Graph(void);
    Graph(std::set<Vertex>);
    std::pair<std::set<Vertex>::iterator, bool> addVertex(Vertex);
    void connectVertices(Vertex, Vertex, double);
    std::set<Vertex> getVertices(void);
};


#endif //ACO_GRAPH_H
