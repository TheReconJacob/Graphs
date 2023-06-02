#pragma once
#include "Graph.h"
#include "PriorityQueue.h"
class BFS
{
private:
	Graph* graph;
	PriorityQueue<Location>* queue;

	PriorityQueue<Location>* GetAllAdjacentUnVisited(Location* current);
public:
	BFS(Graph* graph);
	void Traverse(Location* start);
};

