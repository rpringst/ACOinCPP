#include "vertex.h"

// Static variable initialization
int Vertex::_count = 0;

// Operator overloading
namespace std
{
    template<> struct less<Vertex>
    {
        bool operator() (const Vertex& lhs, const Vertex& rhs) const
        {
            return lhs._id < rhs._id;
        }
    };
}

// Constructors
Vertex::Vertex(void)
    : _id{++_count},
      _edges(std::map<int, std::pair<Vertex*, Edge*>>())
{}

Vertex::Vertex(std::pair<Vertex*, Edge*>) {

}

// Setters

// Getters