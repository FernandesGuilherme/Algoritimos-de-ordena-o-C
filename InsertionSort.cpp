/* 
	Guilherme Fernandes Lima
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#define MAX 200
  	 	  
  	 	  	  
void insertion_sort(int *a);
 
int main(int argc, char** argv) {
 int i, vet[MAX] ={5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,7,19,32,33,1,34,55,66,77,44,4,43,34,45,46,65,45,34,33,31,32,199,122,223,23,23,23,454,5,44,33,44,55,66,77,188,18888,2212,232,343,54,565,676,44,55,22,456,56,65,678,4344,545,56,76,23,56,23,56,76,34,65,65,87,3,2,
5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,7,19,32,33,1,34,55,66,77,44,4,43,34,45,46,65,45,34,33,31,32,199,122,223,23,23,23,454,5,44,33,44,55,66,77,188,18888,2212,232,343,54,565,676,44,55,22,456,56,65,678,4344,545,56,76,23,56,23,56,76,34,65,65,87,3,2};

 insertion_sort(vet);
 for(i = 0; i < MAX; i++){
  printf("Vet [%d]\n", vet[i]);
 }
  return 0;
}

void insertion_sort(int *a) {
 int i, j, tmp;
  
 for(i = 1; i < MAX; i++){
  tmp = a[i];
  for(j = i-1; j >= 0 && tmp < a[j]; j--) {
   a[j+1] = a[j];
  }
  a[j+1] = tmp;
 }
}