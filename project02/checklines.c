
/*** Name: Miles Levine 
 *** Login ID: mlevin65     
 *** UID: 117903881
 *** Discription: Program  will check for lines in its input 
                  that are more than 80 characters. If line has
                  more than 80 characters, then X will be printed
                  at beginning.
 *** Pledge: I pledge on my honor that I have not given or received
             any unauthorized assistance on this assignment,
             Miles Levine

*/

#include <stdio.h>

int main() {
  char input[10000];
  int count = 0;/*counts the charcters */
  int total_lines = 0;
  int error_lines = 0;/*line with more than 80 chars*/
  int i = 0;
  int total_space = 0;
  while(scanf("%c", &input[count]), !feof(stdin)) {
    /* while loop that stores charcters until stdin is true*/
    if(input[count] == '\t') {
      total_space += 8-(total_space%8)-1 ;

    }
    if(input[count] == '\n') {

      total_lines++; 
      if(count <= 80) {
          printf("%6d> ", total_space);
      }
      else { 
        printf("X%5d> ", total_space); 
        error_lines++; 
      }
      for(i = 0; i <= count; i++) {
	/*prints each value of the char array */
	printf("%c", input[i]);
	
      }
      count = 0; 
      count--;
      total_space = 0;
      total_space--;

    }
    count++;
    total_space++;
  }
  /*print total lines and lines that have 80 or more char*/
  printf("%d %d\n", total_lines, error_lines); 
  return 0;
}
