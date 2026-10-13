#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;
int main(){
	int n,W;
	cin>>n>>W;
	//vector <int> w(n);
	vector <pair <double ,pair <int,int> > d(n);
	// value_density weight index 
	for(int i=0;i<n;i++)cin>>d[i].first;
	for(int i=0;i<n;i++)cin>>d[i].second.first;
	for(int i=0;i<n;i++){
		d[i].first/=d[i].second.first;
		d[i].second.second=i+1;
	}
	sort(d.start(),d.end());
	for(int i=0;i<n;i++){
		cout<<d[i].first<<' '<<d[i].second.first<<' '<<d[i].second.second<<'\n';
	}
}