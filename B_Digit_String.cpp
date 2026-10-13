    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t;
        cin>>t;
        while(t--){
            string s;
            cin>>s;
            bool Removed[s.size()];
            for(int i=0;i<s.size();i++)Removed[i]=false;
            for(int i=0;i<s.size();i++){
                if(s.at(i)=='4' )Removed[i]=true;
                else if(s.at(i)=='2'){
                    for(int k=i-1;k>=0;k--){
                        if((s.at(k)-'0')%2!=0 )Removed[k]=true;
                        else break;
                    }
                }
                else if(s.at(i)=='3' && s.at(i)=='1'){
                    for(int k=i+1;k<s.size();k++){
                        if(s.at(i)=='2' || s.at(i)=='1')Removed[k]=true;
                        else break;
                    }
                }
            }
            int out=0;
            for(int i=0;i<s.size();i++){
                if(Removed[i])out++;
            }
            cout<<out<<'\n';
        }
    return 0;
    }