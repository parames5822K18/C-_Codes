#include<bits/stdc++.h>
using namespace std;
class Queue{
    private:
    queue <int> q;
    public:
    void add(int val){
        q.push(val);
    }
    void del(){
        if(q.empty()){
            cout<<"Queue is Empty!!\n";
            return;
        }
        q.pop();
        return;
    }
    int AtTop(){
        return q.front();
    }
    void rev_queue(){
        int n=q.size();
        vector <int> arr;
        for(int i=0;!q.empty();i++){
            arr.push_back(q.front());
            q.pop();
        }
        for(int i=n-1;i>=0;i--){
            q.push(arr[i]);
        }
    return;
    }
   
};
int main(){
    ios::sync_with_stdio();
    cin.tie(NULL);
    Queue Q;
    Q.add(1);
    Q.add(2);
    Q.add(3);
    Q.add(4);
    Q.rev_queue();
    for(int i=0;i<4;i++){
                        cout<< Q.AtTop();
                        Q.del();
                    }
return 0;
}