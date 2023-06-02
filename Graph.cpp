#include <iostream>
#include "Graph.h"

const int Graph::INF = 1000000;

Graph::Graph(int size)
{
    this->size = size;
    adjMat = new int* [size];
    for (int i = 0; i < size; i++)
    {
        adjMat[i] = new int[size];
        for (int j = 0; j < size; j++)
        {
            adjMat[i][j] = INF;
        }
    }

    vertices = new Location * [size];
    numberVertices = 0;
}

void Graph::AddVertex(Location* vertex)
{
    vertices[numberVertices++] = vertex;
}

void Graph::AddEdge(int start, int end, int weight)
{
    adjMat[start][end] = weight;
}

int Graph::GetNumberVertices()
{
    return numberVertices;
}

void Graph::Display()
{
    for (int i = 0; i < numberVertices; i++)
    {
        std::cout << vertices[i]->name << ": ";
        for (int j = 0; j < numberVertices; j++)
        {
            if (adjMat[i][j] != INF)
            {
                std::cout << vertices[j]->name << " ";
            }
        }
        std::cout << std::endl;
    }
}

PriorityQueue<Location>* Graph::GetAdjacentVertices(Location* vertex)
{
    PriorityQueue<Location>* adjacent = new PriorityQueue<Location>(numberVertices);

    for (int i = 0; i < numberVertices; i++)
    {
        if (adjMat[vertex->key][i] != INF)
        {
            adjacent->Insert(vertices[i]);
        }
    }
    return adjacent;

}