#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int sum = 0;
    int num = 0;
    int val;
    scanf("%d", &val);

    while (val > -1){
        sum = sum + val;
        num = num + 1;

    }

    int avg = sum /num;
    
    printf("Average: %d", avg);

    printf("Hello world.\n");

    return 0;

}
  