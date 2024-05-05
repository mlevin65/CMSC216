#include "functions.h"
#include <stdio.h>


int is_valid_triangle(int side1, int side2, int side3) {
  int sum1 = side1 + side2;
  int sum2 = side2 + side3;
  int sum3 = side1 + side3;

  if(sum1 > side3 && sum2 > side1 && sum3 > side2){
    return 1;
  }
  else if(side1 <= 0 || side2 <= 0 || side3 <= 0){
    return -1;
  }
  else
  return 0;
}

int has366(int y) {
  if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)){
    return 1;
      
  }
  else if(y <= 1752){
    return -1;
  }
  else{
    return 0;
  }
  
}
/**/
int smallest_prime_between(int x, int y) {
  int num = -1;
  int i = 0;
  int j = 0;
  if((x >= y) || ((x < 0) && (y < 0))){
    return -1;
  }
  for (i = x; i <= y && num == -1; i++) {
    if (i > 1) {
      int is_prime = 1;
      for (j = 2; j * j <= i; j++) {
	if (i % j == 0) {
	  is_prime = 0;
	}
      }
      if (is_prime) {
	num = i;
      }
    }
  }
  return num;

}

