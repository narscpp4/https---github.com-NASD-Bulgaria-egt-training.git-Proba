//============================================================================
// Name        : Matrix.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
static int const row = 3;
static int const col = 5;

	void sumMatrix(int arr[][col])
	{
		for(int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
				if(arr[i][j]==i+j) cout<<"row : "<<i<<"; col : "<<j<<"; a[row][col] : "<<arr[i][j];
		}
	}


	void sumArray(int arr[])
	{
		for(int i=0; i<row; i++)
		{
			int left = 0;
			int right = 0;
			if(i>0 && i<row-1)
			{
				left = arr[i-1];
				right = arr[i+1];
			}
			if(i==0)right = arr[i+1];
			if(i==row-1)left=arr[i-1];

			cout<<arr[i]+left+right<<endl;
		}
	}

int main()
{
	int a[row][col] = {
						{1,1,1,1,1},
						{2,2,2,2,2},
						{3,3,3,3,3}
				  };
	sumMatrix(a);

	int arr[row] = {1,3,2};

	sumArray(arr);

	return 0;
}
//finkciite ne bi trqbvalo da sa void a da vryshtat rezult