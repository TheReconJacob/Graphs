#include "DFS.h"
#include <iostream>

DFS::DFS(Graph* graph)
{
    this->graph = graph;
    stack = new Stack<Location>(graph->GetNumberVertices());
}

Location* DFS::GetAdjacentUnVisited(Location* current)
{
	PriorityQueue<Location>* adjacentVerticies = graph->GetAdjacentVertices(current);
	while (!adjacentVerticies->IsEmpty()) {
		Location* adj = adjacentVerticies->Remove();
		if (!adj->wasVisited) {
			return adj;
		}
	}
	return NULL;
}

void DFS::Traverse(Location* current)
{
    current->wasVisited = true;
    std::cout << current->name << " " << std::endl;
    stack->Push(current);

    while (!stack->IsEmpty())
    {
        Location* topVertex = stack->Peek();
        Location* adjVertex = GetAdjacentUnVisited(topVertex);

        if (adjVertex == nullptr)
        {
            stack->Pop();
        }
        else
        {
            adjVertex->wasVisited = true;
            std::cout << adjVertex->name << " " << std::endl;
            stack->Push(adjVertex);
        }
    }
}