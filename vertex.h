//=================================
// include guard
#ifndef ACO_VERTEX_H
#define ACO_VERTEX_H

//=================================
// forward declared dependencies
class Edge;

//=================================
// included dependencies
#include <set>

class Vertex {
private:
    std::set<Edge> _edges;
public:
    static int _count;
    int _id;
};


#endif //ACO_VERTEX_H
