#include "edge.h"

Edge::Edge(void)
    : _initial{nullptr}, _final{nullptr}, _weight{-1} {}

Edge::Edge(Vertex* begin, Vertex* end, double weight)
    : _initial{begin}, _final{end}, _weight{weight} {}

void Edge::setInitial(Vertex* begin) {
    _initial = begin;
}

void Edge::setFinal(Vertex* end) {
    _final = end;
}
void Edge::setWeight(double weight) {
    _weight = weight;
}

Vertex* Edge::getInitial(void) {
    return _initial;
}

Vertex* Edge::getFinal(void) {
    return _final;
}

double Edge::getWeight(void) {
    return _weight;
}