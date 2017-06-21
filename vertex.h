//=================================
// include guard
#ifndef ACO_VERTEX_H
#define ACO_VERTEX_H

//=================================
// forward declared dependencies
class Edge;

//=================================
// included dependencies
#include <vector>

class Vertex {
private:
    static int _count;
    std::vector<Edge*> _edges;
public:
    int _id;
    Vertex(void);
};


#endif //ACO_VERTEX_H
