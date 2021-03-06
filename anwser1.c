#include <stdio.h>
#include <stdbool.h>

bool isSubset(int *arr1, int *arr2, int m, int n );
bool isSubset1(int *arr1, int *arr3, int l );
bool isSubset2(int *arr4, int *arr5, int o, int p );

int main(void){
	//Declare every array for the specific charactors
	int arr1[5] = {'A','B','C','D','E'};
	int arr2[5] = {'A','E','D'};
	int arr3[5] = {'A','D','Z'};
	int arr4[5] = {'A','D','E'};
	int arr5[5] = {'A','A','D','E'};
	
	int m = sizeof(arr1)/ sizeof(arr1[0]);//compare the first address in the array	
	int n = sizeof(arr2)/ sizeof(arr2[0]);
	int l = sizeof(arr3)/ sizeof(arr3[0]);
	int o = sizeof(arr4)/ sizeof(arr4[0]);
	int p = sizeof(arr5)/ sizeof(arr5[0]);
	
	isSubset(arr1, arr2, m, n );//Call isSubset function here
	printf("isSubset([A,B,C,D,E], [A,E,D]) = true");
	printf("\n");
	isSubset(arr1, arr3, l );//Call isSubset1 function here
	printf("isSubset([A,B,C,D,E], [A,D,Z]) = false");
	printf("\n");
	isSubset(arr1, arr2, m, n );//Call isSubset2 function here
	printf("isSubset([A,D,E], [A,A,E,D]) = true");
	
	getchar();
	return 0;
}
	

bool isSubset(int *arr1, int *arr2, int m, int n ){
	//initialised i,j vatiable
		int i = 0;
		int j = 0;
		
		for(i = 0; i < n; i++)
		{
			if(arr2[i] == arr1[j] )
			{
					break;
					return true;
			}
			else
					return false;
		}
}

bool isSubset1(int *arr1, int *arr3, int l ){
	//initialised i,j vatiable
		int i = 0;
		int j = 0;
		
		for(i = 0; i < n; i++)
		{
			if(arr3[i] == arr1[j] )
			{
					break;
					return true;
			}
			else
					return false;
		}
}

bool isSubset2(int *arr4, int *arr5, int o, int p ){
	//initialised i,j vatiable
		int i = 0;
		int j = 0;
		
		for(i = 0; i < p; i++)
		{
			if(arr5[i] == arr4[j] )
			{
					break;
					return true;
			}
			else
					return false;
		}
}