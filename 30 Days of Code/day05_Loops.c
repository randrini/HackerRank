#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    unsigned int i;
    scanf("%d",&n);
    i = 0;
    while (++i < 10){
      printf("%d x %u = %d\n", n,  i, n * i); 
    }
    return 0;
}
