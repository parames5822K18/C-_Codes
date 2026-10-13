#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
vector <int> parent;
int find(int x){
    while(parent[x]!=x)x=parent[x];
    return x;
}
bool compareW(const pair <pair<int,int>,int> &p1,const pair <pair <int,int> ,int> &p2){
    return p1.second<p2.second;
}
int main(){
    int v;
    cin>>v;
    int e;
    cin>>e;
    cout<<"Enter Edges:\n";
    vector <pair <pair <int,int>, int>> edges(e);
    parent.resize(v);
    for(int i=0;i<v;i++)parent[i]=i;
    for(int i=0;i<e;i++)cin>>edges[i].first.first>>edges[i].first.second>>edges[i].second;
    sort(edges.begin() , edges.end(), compareW);
    int cnt=0;
    for(int i=0;i<e && cnt+1<v;i++){
        int u=find(edges[i].first.first);
        int v=find(edges[i].first.second);
        if(u!=v){
            cout<<edges[i].first.first<<'\t'<<edges[i].first.second<<'\t'<<edges[i].second;
            parent[u]=v;
            cout<<'\n';
            cnt++;
        }
    }
}