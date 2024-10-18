/*Program to run one D
Author: lisa nyaguthii njeru 
Date: 13/10/2024
REG no: CT102/G/24501/24

*/

#include<stdio.h>
int main (){
	//initialize p
	int p;
	int sum=0;
	int points[6] = {20,50,80,85,54,86};
	
	for(p=0;p<6;p++){
		//print the points
		printf("points[%d] = %d \n",p,points[p]);
		//formula to calculate the sum of the points, include[p]
		sum = sum + points[p];
		
	}
	//print the sum output
	printf("the sum is %d", sum);
	return 0;
}