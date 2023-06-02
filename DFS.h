#pragma once
#include "Graph.h"
#include "Stack.h"
class DFS
{
private:
	Graph* graph;
	Stack<Location>* stack;

	Location* GetAdjacentUnVisited(Location* current);
public:
	DFS(Graph* graph);
	void Traverse(Location* current);
};

