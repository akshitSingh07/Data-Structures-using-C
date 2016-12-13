#include<stdio.h>
#include<stdlib.h>
struct AdjListNode
{
    int id; //id of the node
    struct AdjListNode* next;
};
 
// A structure to represent an adjacency list
struct AdjList
{
    struct AdjListNode *head;  // pointer to head node of list
};
 
// A structure to represent a graph. A graph is an array of adjacency lists.
// Size of array will be V (number of vertices in graph)
struct graph
{
   int* V; //number of nodes in the graph 
   struct AdjList* Neighbors; //array of adjacency lists 
};
graph *graphcreate()
