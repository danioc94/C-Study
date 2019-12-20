#include <iostream>
#include <vector>
#include <array>

using namespace std;

// Defining variables:
int a = 20;

// Defining  arrays and vectors:
int static_arr[5]={1,3,5,7,9};     //Static Array
int *p = static_arr;               //Pointers. Note: "arr[i]” is equal to *(arr + i)
array <int,3> arr={2,4,6};         //Array using array class
vector <int> vect;                 //Vectors: are same as dynamic arrays with ability to resize itself

// Function declarations:
int sum(int a, int b);

int main() {
	// testing sum function:
	int b = 4;
	cout<<"The sum of a is: "<<sum(a,b)<<endl;
	
	// traversing static array:
	for (int i=0; i<5; i++)
	{
	    cout<<static_arr[i]<<" ";
	}
	
	
	
	return 0;
}

int sum(int a, int b)
{
    return a+b;
}
