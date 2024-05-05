#include <stdio.h>

/* REMOVE THIS COMMENT, then write your implementations of the functions in
 * this source file. 
 * Skeleton versions of the functions already appear below.
 *
 * Besides writing it and submitting it, you are prohibited from putting
 * your code for this project anywhere online.
 */
int is_valid_triangle(int,int,int);

int main(){
    printf(is_valid_triangle(3,4,6));
}

int is_valid_triangle(int side1, int side2, int side3) {
  int sum1 = side1 + side2;
  int sum2 = side2 + side3;
  int sum3 = side1 + side3;

  if(sum1 > side3 || sum2 > side1 || sum3 > side2){
    
    return 1;

      }
  else if(sum1 <= 0 || sum2 <= 0 || sum3 <= 0){
    return -1;
  }
  else
  return 0;
}

int has366(int y) {
  return 216216;
}

int smallest_prime_between(int x, int y) {
  return 216216216;
}