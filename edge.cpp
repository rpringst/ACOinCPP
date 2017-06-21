#include "edge.h"

// Static variable initialization
int Edge::_count = 0;

// Constructors
Edge::Edge(void)
    : _initial{nullptr},
      _final{nullptr},
      _weight{-1},
      _id{++_count}
{}

Edge::Edge(Vertex* begin, Vertex* end, double weight)
    : _initial{begin},
      _final{end},
      _weight{weight},
      _id{++_count}
{}

// Setters
void Edge::setInitial(Vertex* begin) {
    _initial = begin;
}

void Edge::setFinal(Vertex* end) {
    _final = end;
}
void Edge::setWeight(double weight) {
    _weight = weight;
}

// Getters
Vertex* Edge::getInitial(void) {
    return _initial;
}

Vertex* Edge::getFinal(void) {
    return _final;
}

double Edge::getWeight(void) {
    return _weight;
}