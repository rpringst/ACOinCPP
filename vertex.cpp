#include "vertex.h"

// Static variable initialization
int Vertex::_count = 0;

// Constructors
Vertex::Vertex(void)
    : _id{++_count},
      _edges(std::vector<Edge*>())
{}