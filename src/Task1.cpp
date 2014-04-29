//============================================================================
// Name        : Task1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Linear_Equ_Solving_Algorithms/Solvers.h"
#include <vector>
using namespace std;
void help()
{

}
int main(int argc,char* argv[]) {
	if(argc>1 &&string("--help").compare(argv[1])==0)
	{
		help();
		return -1;
	}
	if(string("--solve").compare(argv[1])==0)
	{
		cout<<"sss"<<endl;
		const int n=2;
		GAUSSIAN_ELIMINATION_Solver solver=GAUSSIAN_ELIMINATION_Solver();


		vector<vector<double> > m(2);
		m[0]=vector<double>(3);
		m[0][0]=3,m[0][1]=2,m[0][2]=18;

		m[1]=vector<double>(3);
		m[1][0]=-1,m[1][1]=2,m[1][2]=2;
		vector<double> res=solver.solve(m,n);
		for(int i=0;i<n;i++)
		{
			cout<<res[i]<<" ";
		}
		cout<<endl;
	}
	else if(string("--interpolate").compare(argv[1])==0)
	{

	}
	else if(string("--regress").compare(argv[1])==0)
	{

	}
	else{
		cerr<<"Wrong parameters"<<endl;
		help();
		return -1;
	}
	return 0;
}
