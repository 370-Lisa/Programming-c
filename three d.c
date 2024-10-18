/*Arrays for 3D
Author: lisa nyaguthii njeru 
Date: 14/10/2024
REG no: CT102/G/24501/24

*/
#include<stdio.h>
int main() {
	//initialize data for the 3D array
	int p,q,r;
	int points[2][2][3] = {{{56,36,83},{26,35,87}},{{98,37,78},{28,97,65}}};
	
	//Three loops representing three sets of data
	for(p=0;p<2;p++){
		for(q=0;q<2;q++){
			for(r=0;r<3;r++){
				//print outcome
				printf("points[%d][%d][%d] = %d \n", p,q,r,points[p][q][r]);
			}
		}
	}
	return 0;
}