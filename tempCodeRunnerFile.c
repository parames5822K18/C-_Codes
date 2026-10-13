#include<stdio.h>
#define BUFFER_SIZE 100
#ifdef BUFFER_SIZE 
    BUFFER_SIZE=1000
#endif
int main(){
    printf("%d\n", BUFFER_SIZE);
}