#include <iostream>
using namespace std;


int main()
{
	int row,col,sum;
	cout<<"Enter rows\n";
	cin>>row;
	cout<<"Enter Col\n";
	cin>>col;
    int array[row][col];
    cout<<"Enter elements in array"<<endl;
    
        for(int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
			{
			
			
			cin>>array[i][j];
				}
			}
		sum=0;
			 for(int i=0; i<row;i++)
		{
			for(int j=0; j<col; j++)
			{
			
			
			sum+=array[i][j];
				}
			}
		
					
    
    
cout<<"The Sum is:" <<sum<<endl;

        
  return 0;

}
