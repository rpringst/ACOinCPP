#include "graph.h"

bool operator<(const Vertex &lhs, const Vertex &rhs) {
    return lhs.id < rhs.id;
}

Graph::Graph(void)
    : _vertices{std::set<Vertex>()} {}

Graph::Graph(std::set<Vertex> vertices)
    : _vertices{vertices} {}

std::pair<std::set<Vertex>::iterator, bool> Graph::addVertex(Vertex vertex) {
    return _vertices.insert(vertex);
}

void Graph::connectVertices(Vertex v1, Vertex v2, double weight) {

}

std::set<Vertex> Graph::getVertices(void) {
    return _vertices;
}