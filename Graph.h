#pragma once
#include "Location.h"
#include "PriorityQueue.h"

class Graph
{
private:
	int** adjMat;
	static const int INF;
	int numberVertices;
	int size;

public:
	Location** vertices;

	void AddEdge(int start, int end, int weight);
	void AddVertex(Location* vertex);
	void Display();
	PriorityQueue<Location>* GetAdjacentVertices(Location* vertex);
	int GetNumberVertices();
	Graph(int size);
};

