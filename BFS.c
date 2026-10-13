#include<stdio.h>
#include<stdlib.h>
#define Max 100
int matrix[Max][Max];
int visited[Max];
int queue[Max];
int n;
void BFS(int value){
    int front=0,rear=0;
    queue[rear++]=value;
    visited[value]=1;
    while(rear>front){
        int v=queue[front++];
        printf("%d ",v);
        for(int i=0;i<n;i++){
            if(matrix[v][i]==1 && visited[i]==0){
                queue[rear++]=i;
                visited[i]=1;
            }
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
    BFS(x);
     
}