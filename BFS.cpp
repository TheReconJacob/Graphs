#include <iostream>
#include "BFS.h"

BFS::BFS(Graph* graph)
{
    this->graph = graph;
    queue = new PriorityQueue<Location>(graph->GetNumberVertices());
}

void BFS::Traverse(Location* start)
{
    start->wasVisited = true;
    queue->Insert(start);
    std::cout << start->name << " " << std::endl;

    while (!queue->IsEmpty())
    {
        Location* current = queue->Remove();
        PriorityQueue<Location>* adjQueue = GetAllAdjacentUnVisited(current);

        while (!adjQueue->IsEmpty())
        {
            Location* adj = adjQueue->Remove();
            adj->wasVisited = true;
            std::cout << adj->name << " " << std::endl;
            queue->Insert(adj);
        }
    }
}

PriorityQueue<Location>* BFS::GetAllAdjacentUnVisited(Location* current)
{
    PriorityQueue<Location>* unVisited = new PriorityQueue<Location>(graph->GetNumberVertices());
    PriorityQueue<Location>* adjacentVerticies = graph->GetAdjacentVertices(current);
    while (!adjacentVerticies->IsEmpty())
    {
        Location* adj = adjacentVerticies->Remove();
        if (!adj->wasVisited)
        {
            unVisited->Insert(adj);
        }
    }
    return unVisited;
}