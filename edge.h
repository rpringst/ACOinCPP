//=================================
// include guard
#ifndef ACO_EDGE_H
#define ACO_EDGE_H

//=================================
// forward declared dependencies
class Vertex;

//=================================
// included dependencies
// NONE

class Edge {
private:
    Vertex* _initial;
    Vertex* _final;
    double _weight;
public:
    Edge(void);
    Edge(Vertex*, Vertex*, double);
    void setInitial(Vertex*);
    void setFinal(Vertex*);
    void setWeight(double);
    Vertex* getInitial(void);
    Vertex* getFinal(void);
    double getWeight(void);
};


#endif //ACO_EDGE_H
