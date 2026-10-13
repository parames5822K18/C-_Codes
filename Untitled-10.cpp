#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
bool fun(const pair <int,int> &pl1,const pair <int,int>  &pl2){
	
	return pl1.second < pl2.second;
}
int main(){
	int n;
	cin>>n;
	vector <pair <int,int> > a(n);
	for(int i=0;i<n;i++)cin>>a[i].first>>a[i].second;
	sort(a.begin(),a.end(),fun);
	vector <bool> status(n,false);
	status[0]=true;
	int lastFinish=a[0].second;
	for(int i=0;i<n-1;i++){
		/*if(status[i]==false)continue;
		for(int j=0;j<n;j++){
			if(i==j || status[j]==false)continue;
			else if(a[i].first<a[j].first && a[j].first<a[i].second)status[j]=false;
			else if(a[i].first<a[j].second && a[j].second<a[i].second)status[j]=false;
		}*/
		if(a[i+1].first>=lastFinish){
		status[i+1]=true;
		lastFinish=a[i+1].second;
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++)if(status[i])cnt++;
	cout<<cnt<<'\n';
}