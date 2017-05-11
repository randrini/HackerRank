#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

  unsigned int T;
  unsigned int i;
  unsigned int row;
  char ch;
  char *str;
  scanf("%d", &T);
  char *ptr_str[T];

  row = 0;
  while (row < T + 1){
    i = 1;

    str = (char *)malloc(i * sizeof(char) + sizeof(char));
    while ((ch = getchar()) != '\n'){
      str[i - 1] = ch; 
      str = (char *)realloc(str, ++i * sizeof(char) + sizeof(char));
    }
    str[i + 1]= '\0';
    ptr_str[row] = str;
    row++;
  }
  
  row = 0;
  while (row++ < T){
    i = 0;
    while (i < strlen(ptr_str[row])){
      printf("%c", ptr_str[row][i]);
      i += 2;
    } 
    i = 0;
    printf("%s", "  ");
    while (i < strlen(ptr_str[row])){
      printf("%c", ptr_str[row][i + 1]);
      i += 2;
    }
  printf("%c", '\n');
  }
  return (0);
}

/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
/********************************************************
  unsigned int T;
  unsigned int i;
  unsigned int j;
  unsigned int counter;
  char ch;
  char *str;
  scanf("%d", &T);

  counter = 0;
  while (counter++ < T){
    i = 0;
    j = 1;

    str = (char *)malloc(j * sizeof(char) + 1);
    while ((ch = getchar()) != '\n'){
      if (i++ % 2 == 0)
        printf ("%c", ch);
     // ch++;
    str[j -1] = ch; 
    str = (char *)realloc(str, ++j * sizeof(char));
    }
    printf("%s", "  ");
    str[j + 1]= '\0';
    i = 0;
    while (str[i++] != '\0'){
      if (i % 2 != 0)
        printf("%c", str[i]); 
    }
  }
  //printf("\n%lu", strlen(str));
  //printf("\n%s", str);
  return 0;
*******************************************************/
  /*printf("\n----- %s -----\n",ptr_str[1]);*/
  /*printf("\n----- %s -----\n",ptr_str[2]);*/
  /*printf("\n----- %s -----\n",ptr_str[3]);*/
  /*printf("\n----- %s -----\n",ptr_str[4]);*/
  /* while (counter < T - 2){
    j = 0;
    while (ptr_str[counter]){
      if (j % 2 == 0){
        printf("%c", ptr_str[counter][j]); 
        j++;
      }
    }
    printf("\n----- %s -----\n",ptr_str[counter]);
    printf("%s", "  ");
    j = 0;
    while (ptr_str[counter][j]){
      if (j % 2 != 0){
        printf("%c", ptr_str[counter][j]); 
        j++;
      }
    }
    printf("%c", '\n');
    counter++;
  }
  */
