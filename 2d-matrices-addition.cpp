#include <iostream>

using namespace std;

const int ROWS = 2;

const int COLS = 2;

void addMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
    
	// Function implementation will go here
	
for (int i=0; i<ROWS; i++)

	{
		for (int j=0; j<COLS; j++)
		
		{
		
		result[i][j] = matrix1[i][j] + matrix2[i][j];
		
	cout<<result[i][j]<<" ";
		
}

cout<<endl;
	
	
	}	

}


int main() {
	
	//Test Cases
	
	//Test Case 1
	
    int matrix1[ROWS][COLS] = {{-1, -2}, {-3, -4}};
    
    int matrix2[ROWS][COLS] = {{-5, -6}, {-7, -8}};
    
    int expected[ROWS][COLS] = {{-6, -8}, {-10, -12}};
    
    int result[ROWS][COLS]= {{0, 0}, {0, 0}};

    cout << "Test Case 1: Both matrices contain negative numbers\n" << endl;
    
    addMatrices(matrix1, matrix2, result);
    
    if (result[0][0]==expected[0][0] 
	
	&&
	
	result[0][1]==expected[0][1]
	
	&&
	
	result[1][0]==expected[1][0]
	
	&&
	
	result[1][1]==expected[1][1] )
	
	{
        cout << "\nTest Case is Passed\n" << endl;
    } 
	
	else {
        cout << "Test Case is Failed\n" << endl;
       
    }
    
    //Test Case 2
	
    int matrix3[ROWS][COLS] = {{1, 2}, {3, 6}};
    
    int matrix4[ROWS][COLS] = {{8, 9}, {4, 6}};
    
    int expected1[ROWS][COLS] = {{9, 11}, {7, 12}};
    
    int result1[ROWS][COLS]= {{0, 0}, {0, 0}};

    cout << "Test Case 2: Both matrices contain positive numbers\n" << endl;
    
    addMatrices(matrix3, matrix4, result1);
    
    if (result1[0][0]==expected1[0][0] 
	
	&&
	
	result1[0][1]==expected1[0][1]
	
	&&
	
	result1[1][0]==expected1[1][0]
	
	&&
	
	result1[1][1]==expected1[1][1])
	
	{
        cout << "\nTest Case is Passed\n" << endl;
    } 
	
	else {
		
        cout << "\nTest Case is Fail" << endl;
    }
    
//Test Case 3
	
    int matrix5[ROWS][COLS] = {{10, 2}, {7, 6}};
    
    int matrix6[ROWS][COLS] = {{-2, -1}, {-5, -1}};
    
    int expected2[ROWS][COLS] = {{8, 1}, {2, 5}};
    
    int result2[ROWS][COLS]= {{0, 0}, {0, 0}};

    cout << "Test Case 3: Matrix 1 contain positive and matrix 2 contain negative numbers\n" << endl;
    
    addMatrices(matrix5, matrix6, result2);
    
    if (result2[0][0]==expected2[0][0] 
	
	&&
	
	result2[0][1]==expected2[0][1]
	
	&&
	
	result2[1][0]==expected2[1][0]
	
	&&
	
	result2[1][1]==expected2[1][1] )
	{
        cout << "\n\nTest Case is Passed" << endl;
    } 
	
	else {
		
        cout << "Test Case is Fail\n" << endl; 
    }
    
//Test Case 4
	
    int matrix7[ROWS][COLS] = {{-1, -8}, {-7, -8}};
    
    int matrix8[ROWS][COLS] = {{1, 5}, {6, 1}};
    
    int expected3[ROWS][COLS] = {{0, -3}, {-1, -7}};
    
    int result3[ROWS][COLS]= {{0, 0}, {0, 0}};

    cout << "Test Case 4: Matrix 1 contain negative and matrix 2 contain positive numbers\n" << endl;
    
    addMatrices(matrix7, matrix8, result3);
    
    if (result3[0][0]==expected3[0][0] 
	
	&&
	
	result3[0][1]==expected3[0][1]
	
	&&
	
	result3[1][0]==expected3[1][0]
	
	&&
	
	result3[1][1]==expected3[1][1] )
	
	{
        cout << "\nTest Case is Passed\n" << endl;
    } 
	
	else {
        cout << "Test Case is Fail\n" << endl;
       
    }
    
//Test Case 5
	
    int matrix9[ROWS][COLS] = {{0, 0}, {0, 0}};
    
    int matrix10[ROWS][COLS] = {{0, 0}, {0, 0}};
    
    int expected4[ROWS][COLS] = {{0, 0}, {0, 0}};
    
    int result4[ROWS][COLS]= {{0, 0}, {0, 0}};

    cout << "Test Case 5: Both matrix and empty \n" << endl;
    
    addMatrices(matrix9, matrix10, result4);
    
    if (result4[0][0]==expected4[0][0] 
	
	&&
	
	result4[0][1]==expected4[0][1]
	
	&&
	
	result4[1][0]==expected4[1][0]
	
	&&
	
	result4[1][1]==expected4[1][1] )
	
	{
        cout << "\nTest Case is Passed\n" << endl;
    } 
	
	else {
        cout << "\nTest Case is Fail\n" << endl;
       
    }
    



    return 0;
}