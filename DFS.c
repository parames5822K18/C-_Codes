#include<stdio.h>
#include<stdlib.h>
#define Max 100
int matrix[Max][Max];
int visited[Max];
int n;
void DFS(int value){
    printf("%d",value);
    visited[value]=1;
    for(int i=0;i<n;i++){
        if(matrix[value][i]==1 && visited[i]==0){
            DFS(i);
        }
    }
}
int main(){
    printf("Enter number of Elements: ");
    scanf("%d",&n);
    printf("Enter Adjacency Matrix: ");
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d", &matrix[i][j]);
    }
    visited[i]=0;
    }
    int x;
    printf("Enter Starting Point: ");
    scanf("%d", &x);
    DFS(x);
     
}