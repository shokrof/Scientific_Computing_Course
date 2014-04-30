/*
 * Newton.cpp
 *
 *  Created on: Apr 30, 2014
 *      Author: mostafa
 */

#include "Newton.h"
#include <iostream>
using namespace std;

Newton::Newton() {
	// TODO Auto-generated constructor stub

}
vector<Point> Newton::solve(vector<Point> data,int start,int end,int step)
{
	///replace this dummy code with Cubic Spline Algorithm
	vector<Point> res;
	while(start<end)
	{
		res.push_back(Point(start,0));
		start+=step;
	}
	return res;
}
Newton::~Newton() {
	// TODO Auto-generated destructor stub
}

