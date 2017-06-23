#include "vertex.h"

// Static variable initialization
int Vertex::_count = 0;

// Operator overloading
bool Vertex::operator<(const Vertex& b) const {
    return this->_id < b._id;
}

// Constructors
Vertex::Vertex(void)
    : _id{++_count},
      _edges(std::map<Vertex*, Edge>()) {}

Vertex::Vertex(std::map<Vertex*, Edge> edges)
    : _id{++_count},
      _edges{edges} {}

// Setters
bool Vertex::addNeighbor(Vertex* neighbor, double weight) {
    //incorrect, must add neighbor to both

    return _edges.insert(
        std::pair<Vertex*, Edge>(neighbor,
                                 Edge(this, neighbor, weight))).second;
}

// Getters
std::map<Vertex*, Edge> Vertex::getNeighbors(void) {
    return _edges;
}

bool Vertex::isNeighbor(Vertex* vertex) {
    std::map<Vertex*, Edge>::iterator it;
    it = _edges.find(vertex);
    if (it != _edges.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}

double Vertex::getNeighborWeight(Vertex* vertex) {
    if (this->isNeighbor(vertex)) {
        return _edges[vertex].getWeight();
    }
    else {
        return 0;
    }
}