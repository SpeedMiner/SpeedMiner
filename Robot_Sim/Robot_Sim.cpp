// Robot_Sim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StateMachine.h"
#include "MazeSim.h"
#include "WallPresence.h"


int main()
{
	char wait;
	StateMachine machine;
	//machine.Start();
	ifstream infile("MazeFile.txt");
	//MazeSim mazesim(infile);
	WallPresence wallpr;
	std::cin >> wait;
	std::cin.get();
	return 0;
}

