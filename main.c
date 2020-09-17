//Author: Sam Snavely sjs7082@psu.edu
//Collaborator:Kelly Mcveigh kam7563@psu.edu
//Collaborator:Finn Burns kbq5701@psu.edu
//Collaborator:Jolisma Sandoval jas8681@psu.edu
//Section:006
//Breakout:
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>


int sum_n(int n) {
    if (n <=0){
     return 0;
   }
   else{
     return n + (sum_n(n-1));
   }
}
void print_n(const char*s, int n){
  if (n<=0){
     return;
  }
  else{
    printf("%s\n",s);
    print_n(s,n-1);
  }
}

int main(void) {
 char *x= readline("Enter an int: ");
 int n = atoi(x);
 printf("sum is %d.\n" ,sum_n(n));
 char *s = readline("Enter a string: ");
 print_n(s,n);
  return 0;
}