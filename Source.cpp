//Ahmad Amjad Mughal
//Reg No: 121672
//Class:BSCS-6C

#include<iostream>        //including library input/output stream
using namespace std;      //for cin and cout statments


//Function for the Addition of two Matrices
void Addition(){
	int i, j, r, d;
	cout << "You have selected matrix Addition" << endl;
	cout << "Enter the number of Rows of Matrices" << endl;  //for No of rows of Matrices
	cin >> r;
	cout << "Enter the number of Columns of Matrices" << endl; //for No of columns of Matrices
	cin >> d;
	//2D Array Declaraion using pointers
	int **a = new int*[r];                    //a,b,c are pointers that points a 2D Arrays called Matrices
	for (int i = 0; i < r; ++i)
		a[i] = new int[d];
	int **b = new int*[r];
	for (int i = 0; i < r; ++i)
		b[i] = new int[d];
	int **c = new int*[r];
	for (int i = 0; i < r; ++i)
		c[i] = new int[d];

	//Storing of Elements in Matix A
	cout << "Enter the elements of 1st Matrix:" << endl;
	for (i = 0; i < r; i++)                    //for loop for entering a elements in corresponding location in Matrix A
		for (j = 0; j < d; j++){
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];                        //Display of elements in A
		}
	//Storing of Elements in matrix B
	cout << endl << "Enter elements of 2nd Matrix: " << endl;
	for (i = 0; i < r; ++i)                    //for loop for entering a elements in corresponding location in Matrix B
		for (j = 0; j < d; ++j){
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];							//Display of elements in B
		}
	//Addition of two Matrices
	for (i = 0; i < r; ++i){
		for (j = 0; j < d; ++j)
			c[i][j] = a[i][j] + b[i][j];        //Formula for Matrix Addition
	}
	//Displaying of resultant matrices
	cout << endl << "Sum of two matrix is: " << endl;
	for (i = 0; i < r; ++i){
		for (j = 0; j < d; ++j)

			cout << c[i][j] << "  ";
	}
}
//Function for the Subtraction of two Matrices
void Subtraction()
{
	int i, j, r, d;
	cout << "You have selected Matrix Subtraction" << endl;
	cout << "Enter the number of Rows of Matrices" << endl;
	cin >> r;
	cout << "Enter the number of Columns of Matrices" << endl;
	cin >> d;
	//2D Array Declaraion using pointers
	int **a = new int*[r];
	for (int i = 0; i < r; ++i)
		a[i] = new int[d];
	int **b = new int*[r];
	for (int i = 0; i < r; ++i)
		b[i] = new int[d];
	int **c = new int*[r];
	for (int i = 0; i < r; ++i)
		c[i] = new int[d];

	//Storing of Elements in Matix A
	cout << "Enter the elements of 1st Matrix:" << endl;

	for (i = 0; i < r; i++)				//for loop for entering a elements in corresponding location in Matrix A
		for (j = 0; j < d; j++){
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}
	//Storing of Elements in matrix B
	cout << endl << "Enter elements of 2nd Matrix: " << endl;
	for (i = 0; i < r; ++i)				//for loop for entering a elements in corresponding location in Matrix B
		for (j = 0; j < d; ++j){
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
	//Subtraction of two Matrices
	for (i = 0; i < r; ++i){
		for (j = 0; j < d; ++j)
			c[i][j] = a[i][j] - b[i][j];  //Formula for Matrix Subtraction
	}
	//Displaying of resultant matrices
	cout << endl << "Diff of two matrix is: " << endl;
	for (i = 0; i < r; ++i){
		for (j = 0; j < d; ++j)

			cout << c[i][j] << "  ";
	}

}
void Menu()                      //function Menu that is bacically for selection b/w Addition and Subtraction 
	{
	int select;
	cout << "You have an option" << endl;  //prompt 
	cout << "Select"<< endl;
	cin >> select;
	if (select == 1)               //if condition 1 for Matrix Subtraction  2 for Addition
		{
		Subtraction();             //function call Subtraction();
		}
	else
	if (select == 2)
		Addition();                //another function call Addition();
		
	}
int main()                         //main function
	{
		cout << "You are doing Addition and Subtraction of matrices" << endl;
		Menu();                    //it is calling Menu function that performs selection task
		return 0;                  //returns successfully
	}

