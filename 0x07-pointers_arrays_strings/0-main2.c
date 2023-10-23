#include <stdio.h> 
#include "main.h" 
  
int main() 
{ 
    char str[50] = "GeeksForGeeks is for programming geeks."; 
    printf("\nBefore memset(): %s\n", str); 
  
    /* Fill 8 characters starting from str[13] with '.' */
    _memset(str + 13, '.', 8*sizeof(char)); 
  
    printf("After memset():  %s\n", str); 
    return 0; 
} 
