#include "vertex.h"

// Static variable initialization
int Vertex::_count = 0;

// Constructors
Vertex::Vertex(void)
    : _id{++_count},
      _edges(std::vector<Edge*>())
{}

Vertex::Vertex(Vertex* neighbor, double weight) {

}

Vertex::Vertex(std::vector<Vertex*> neighbors, std::vector<double> weights) {

}

// Setters

// Getters