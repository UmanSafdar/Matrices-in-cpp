#include <iostream>
using namespace std;

void myfun(int array_A[2][2], int array_B[2][2], int result[2][2])
{

  					for(int i=0; i<2; i++)
  					{
  						for(int j=0; j<2; j++)
  						{
  							result[i][j]=array_A[i][j] + array_B[i][j];
  							cout<<" ";
						  }
						cout<<endl;
 	
}
}
void printfun(int result[2][2])
{
	for(int i=0; i<2; i++)
  					{
  						for(int j=0; j<2; j++)
  						{
  							cout<<result[i][j];
  							cout<<" ";
						  }
						  cout<<endl;
}
}

int main() {
  int array_A[2][2]={{1,2},{3,4}};
  int array_B[2][2]={{1,2},{3,4}};
  int result[2][2];
  myfun(array_A, array_B, result);
  cout<<"Array_A:"<<endl;
  printfun(array_A);
  cout<<"Array_B"<<endl;
  printfun(array_B);
  cout<<"Addition Result:"<<endl;
  printfun(result); 
   return 0;
  
  
}
  
 

