//=================================
// include guard
#ifndef ACO_VERTEX_H
#define ACO_VERTEX_H

//=================================
// forward declared dependencies
class Edge;

//=================================
// included dependencies
#include <map>

class Vertex {
private:
    static int _count;
    std::map<int, std::pair<Vertex*, Edge*>> _edges;
public:
    int _id;
    Vertex(void);
    Vertex(std::pair<Vertex*, Edge*>);
};


#endif //ACO_VERTEX_H
