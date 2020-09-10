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
    printf("Your letter grade for CMPSC 131 is A.");

  }
  else if ( 90.0 <= grade){
    printf("Your letter grade for CMPSC 131 is A-.");
    
  }
  else if (87.1 <= grade){
    printf("Your letter grade for CMPSC 131 is B+.");
  }
  else if (83.0 <= grade){
    printf("Your letter grade for CMPSC 131 is B.");
  }
  else if (81.5 <= grade){
    printf("Your letter grade for CMPSC 131 is B-.");
  }
  else if (79.5 <= grade){
    printf("Your letter grade for CMPSC 131 is C+.");
  }
  else if (73.8 <= grade){
    printf("Your letter grade for CMPSC 131 is C.");
  }
  else if (64.3 <= grade){
    printf("Your letter grade for CMPSC 131 is D.");
  }
  else {
    printf("Your letter grade for CMPSC 131 is F.");
  }
  return 0; 
}