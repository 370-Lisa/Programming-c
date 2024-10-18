/*Array for 2D
Author: lisa nyaguthii njeru 
Date: 14/10/2024
REG no: CT102/G/24501/24

*/
#include<stdio.h>
int main() {
	//initialize p and q
	int p,q;
	//initialize the data
	int points[2][3] = {{45,46,28},{46,38,37}};
	//create for loop
	for(p=0;p<2;p++){
		//create for loop to loop the second set of data
		for(q=0;q<3;q++){
			//print the output
			printf("points[%d][%d] = %d \n", p,q,points[p][q]);
		}
	}
	
	return 0;
}