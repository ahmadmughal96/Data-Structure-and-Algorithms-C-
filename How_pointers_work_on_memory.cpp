//Ahmad Amjad mughal
//Regg No:121672
//Class:BSCS-6C
//Task2


#include<iostream>               //including library
using namespace std;          

int sum(int *a, int size)     //function sum that uses pointer and size as a variable
{
	int res = 0;              
	for (int i = 0; i<size; i++)   //loop that continues till i = 10
		res += a[i];            
	return res;                   //it returns result to the calling function 
}

int check(int *a, int *b, int size){   //another function with parameters pointers *a and *b and size as an interger variable
	int *res;                          //definition of pointer
	res = new int[size];               //the use of New clause this is dynamic memory allocation
	for (int i = 0; i<size; i++)
	{
		res[i] = a[i] + b[i];          //performing addition
	}
	return sum(res, size);             //returns a function call
}

int main(void){                         //main function
	const int s = 10; 

	int res;
	int array1[s] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int array2[s] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 }; 
	res = check(array1, array2, s); 
	cout << "the result is " << res << endl;
	return 0;
}
