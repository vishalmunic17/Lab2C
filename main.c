// Author: Vishal Munic vqm5223@psu.edu
// Collaborator: Bakhtiar Reza bmr5782@psu.edu 
// Collaborator: Claire Kessel cmk6318@psu.edu 
// Collaborator: Bakhtiar Reza bmr5782@psu.edu
// Section: 4
// Breakout: 10

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {

  char *gradestr = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(gradestr);


   if ( 93.0 <= grade){
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if ( 90.0 <= grade){
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if (87.0 <= grade){
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if (83.0 <= grade){
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if (80.0 <= grade){
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if (77.0 <= grade){
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if (70.0 <= grade){
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if (60.0 <= grade){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else {
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0; 
}