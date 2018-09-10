#ifndef __ASTARSEARCH_H__
#define __ASTARSEARCH_H__

#include <iostream>
#include <stdio.h>
#include <vector>
#include <malloc.h>
#include <assert.h>
#include "globalVariables.h"

class GridWorld;

//extern int goal_x, goal_y;
//extern int start_x, start_y;

//~ extern int numberOfExpandedStates;
//extern int numberOfVertexAccesses;

class AstarSearch { 
public: 
	
	AstarSearch(int rows_, int cols_);
	~AstarSearch();
	
	friend void copyMazeToDisplayMap(GridWorld &gWorld, AstarSearch* astar);
	friend void copyDisplayMapToMaze(GridWorld &gWorld, AstarSearch* astar);

	void initialise(int startX, int startY, int goalX, int goalY);
	
private: 
	vector<vector<AstarCell> > maze;
	vector<AstarCell> visited;

	AstarCell * start; 
	AstarCell * goal;

	int rows; 
	int cols;

};


#endif