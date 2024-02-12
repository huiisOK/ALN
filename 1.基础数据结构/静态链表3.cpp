//洛谷1996题
#include<iostream>
using namespace std;
const int N=105;
int nodes[N];
int main(){
	int n,m;//n表示个数，m表示几个几个 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		nodes[i]=i+1;
	}
	nodes[n]=1;
	int now=1,pre=1;
	while(n>1){
		for(int i=1;i<m;i++){
			pre=now;
			now=nodes[now];
		}
		cout<<now<<" ";
		nodes[pre]=nodes[now];
		now=nodes[pre];
		n--;
	}
	cout<<nodes[now];
} 
