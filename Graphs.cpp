// Graphs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>
#include "Graph.h"
#include "Location.h"
#include "DFS.h"

int main()
{
    Graph graph(9);

    Location* a = new Location(0, 'A');
    Location* b = new Location(1, 'B');
    Location* c = new Location(2, 'C');
    Location* d = new Location(3, 'D');
    Location* e = new Location(4, 'E');
    Location* f = new Location(5, 'F');
    Location* g = new Location(6, 'G');
    Location* h = new Location(7, 'H');
    Location* i = new Location(8, 'I');

    graph.AddVertex(a);
    graph.AddVertex(b);
    graph.AddVertex(c);
    graph.AddVertex(d);
    graph.AddVertex(e);
    graph.AddVertex(f);
    graph.AddVertex(g);
    graph.AddVertex(h);
    graph.AddVertex(i);

    graph.AddEdge(a->key, e->key, 1);
    graph.AddEdge(a->key, d->key, 1);
    graph.AddEdge(d->key, g->key, 1);
    graph.AddEdge(g->key, i->key, 1);
    graph.AddEdge(a->key, c->key, 1);
    graph.AddEdge(a->key, b->key, 1);
    graph.AddEdge(b->key, f->key, 1);
    graph.AddEdge(f->key, h->key, 1);

    DFS dfs(&graph);
    dfs.Traverse(a);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
