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
private:
    std::map<int, Vertex*> _vertices;
public:
    Graph(void);
};


#endif //ACO_GRAPH_H
