//=================================
// include guard
#ifndef ACO_VERTEX_H
#define ACO_VERTEX_H

//=================================
// forward declared dependencies
// NONE

//=================================
// included dependencies
#include <map>
#include "edge.h"

class Vertex {
private:
    static int _count;
    std::map<Vertex*, Edge> _edges;
public:
    int _id;
    Vertex(void);
    Vertex(std::map<Vertex*, Edge>);
    bool addNeighbor(Vertex*, double);
    std::map<Vertex*, Edge> getNeighbors(void);
    bool isNeighbor(Vertex*);
    double getNeighborWeight(Vertex*);
    bool operator<(const Vertex& b) const;
};


#endif //ACO_VERTEX_H
