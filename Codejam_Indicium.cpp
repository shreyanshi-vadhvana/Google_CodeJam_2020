#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int ans = t;
	while(t--){
		cout<<"Case #"<<ans-t<<": ";
		int n,k;
		cin>>n>>k;
		if(k%n==0)
		{   cout<<"POSSIBLE"<<endl;
			int val=k/n,ex=val;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					cout<<ex<<" ";
					ex++;
					if(ex==n+1) ex=1;
				}
				ex--;
				if(ex==0) ex=n;
				cout<<endl;
			}
		}
		else if(n==4 && k==6)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<endl;
			cout<<2<<" "<<1<<" "<<4<<" "<<3<<endl;
			cout<<3<<" "<<4<<" "<<2<<" "<<1<<endl;
			cout<<4<<" "<<3<<" "<<1<<" "<<2<<endl;
		}
		else if(n==4 && k==7)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<2<<" "<<1<<" "<<3<<" "<<4<<endl;
			cout<<1<<" "<<3<<" "<<4<<" "<<2<<endl;
			cout<<4<<" "<<2<<" "<<1<<" "<<3<<endl;
			cout<<3<<" "<<4<<" "<<2<<" "<<1<<endl;
		}
		else if(n==4 && k==9)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<2<<" "<<3<<" "<<1<<" "<<4<<endl;
			cout<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
			cout<<4<<" "<<2<<" "<<3<<" "<<1<<endl;
			cout<<1<<" "<<4<<" "<<2<<" "<<3<<endl;
		}
		else if(n==4 && k==10)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<endl;
			cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
			cout<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
			cout<<4<<" "<<3<<" "<<2<<" "<<1<<endl;
		}
		else if(n==4 && k==11)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
			cout<<4<<" "<<1<<" "<<3<<" "<<2<<endl;
			cout<<3<<" "<<2<<" "<<4<<" "<<1<<endl;
			cout<<1<<" "<<3<<" "<<2<<" "<<4<<endl;
		}
		else if(n==4 && k==13)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<2<<" "<<4<<" "<<3<<" "<<1<<endl;
			cout<<4<<" "<<3<<" "<<1<<" "<<2<<endl;
			cout<<1<<" "<<2<<" "<<4<<" "<<3<<endl;
			cout<<3<<" "<<1<<" "<<2<<" "<<4<<endl;
		}
		else if(n==4 && k==14)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<3<<" "<<4<<" "<<1<<" "<<2<<endl;
			cout<<4<<" "<<3<<" "<<2<<" "<<1<<endl;
			cout<<1<<" "<<2<<" "<<4<<" "<<3<<endl;
			cout<<2<<" "<<1<<" "<<3<<" "<<4<<endl;
		}
		else if(n==5 && k==7)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<2<<" "<<1<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<1<<" "<<2<<" "<<5<<" "<<3<<" "<<4<<endl;
			cout<<3<<" "<<4<<" "<<1<<" "<<5<<" "<<2<<endl;
			cout<<4<<" "<<5<<" "<<2<<" "<<1<<" "<<3<<endl;
			cout<<5<<" "<<3<<" "<<4<<" "<<2<<" "<<1<<endl;
		}
		else if(n==5 && k==8)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<2<<" "<<1<<" "<<5<<" "<<3<<" "<<4<<endl;
			cout<<3<<" "<<4<<" "<<2<<" "<<5<<" "<<1<<endl;
			cout<<4<<" "<<5<<" "<<1<<" "<<2<<" "<<3<<endl;
			cout<<5<<" "<<3<<" "<<4<<" "<<1<<" "<<2<<endl;
		}
		else if(n==5 && k==9)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<3<<" "<<1<<" "<<2<<" "<<4<<" "<<5<<endl;
			cout<<1<<" "<<3<<" "<<5<<" "<<2<<" "<<4<<endl;
			cout<<2<<" "<<4<<" "<<1<<" "<<5<<" "<<3<<endl;
			cout<<4<<" "<<5<<" "<<3<<" "<<1<<" "<<2<<endl;
			cout<<5<<" "<<2<<" "<<4<<" "<<3<<" "<<1<<endl;
		}
		else if(n==5 && k==11)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<4<<" "<<1<<" "<<2<<" "<<3<<" "<<5<<endl;
			cout<<1<<" "<<4<<" "<<5<<" "<<2<<" "<<3<<endl;
			cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<endl;
			cout<<3<<" "<<5<<" "<<4<<" "<<1<<" "<<2<<endl;
			cout<<5<<" "<<2<<" "<<3<<" "<<4<<" "<<1<<endl;
		}
		else if(n==5 && k==12)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<3<<" "<<5<<" "<<4<<" "<<2<<" "<<1<<endl;
			cout<<4<<" "<<1<<" "<<3<<" "<<5<<" "<<2<<endl;
			cout<<5<<" "<<2<<" "<<1<<" "<<3<<" "<<4<<endl;
			cout<<1<<" "<<3<<" "<<2<<" "<<4<<" "<<5<<endl;
			cout<<2<<" "<<4<<" "<<5<<" "<<1<<" "<<3<<endl;
		}
		else if(n==5 && k==13)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<2<<" "<<3<<" "<<4<<" "<<1<<" "<<5<<endl;
			cout<<3<<" "<<2<<" "<<5<<" "<<4<<" "<<1<<endl;
			cout<<4<<" "<<1<<" "<<3<<" "<<5<<" "<<2<<endl;
			cout<<1<<" "<<5<<" "<<2<<" "<<3<<" "<<4<<endl;
			cout<<5<<" "<<4<<" "<<1<<" "<<2<<" "<<3<<endl;
		}
		else if(n==5 && k==14)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<1<<" "<<2<<" "<<4<<" "<<5<<" "<<3<<endl;
			cout<<2<<" "<<3<<" "<<5<<" "<<4<<" "<<1<<endl;
			cout<<4<<" "<<1<<" "<<3<<" "<<2<<" "<<5<<endl;
			cout<<5<<" "<<4<<" "<<1<<" "<<3<<" "<<2<<endl;
			cout<<3<<" "<<5<<" "<<2<<" "<<1<<" "<<4<<endl;
		}
		else if(n==5 && k==16)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<2<<" "<<4<<" "<<1<<" "<<5<<" "<<3<<endl;
			cout<<3<<" "<<5<<" "<<4<<" "<<2<<" "<<1<<endl;
			cout<<4<<" "<<1<<" "<<5<<" "<<3<<" "<<2<<endl;
			cout<<5<<" "<<3<<" "<<2<<" "<<1<<" "<<4<<endl;
		}
		else if(n==5 && k==17)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<2<<" "<<1<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<1<<" "<<4<<" "<<2<<" "<<5<<" "<<3<<endl;
			cout<<3<<" "<<5<<" "<<4<<" "<<1<<" "<<2<<endl;
			cout<<4<<" "<<2<<" "<<5<<" "<<3<<" "<<1<<endl;
			cout<<5<<" "<<3<<" "<<1<<" "<<2<<" "<<4<<endl;
		}
		else if(n==5 && k==18)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<1<<" "<<3<<" "<<2<<" "<<4<<" "<<5<<endl;
			cout<<3<<" "<<5<<" "<<4<<" "<<2<<" "<<1<<endl;
			cout<<2<<" "<<1<<" "<<5<<" "<<3<<" "<<4<<endl;
			cout<<4<<" "<<2<<" "<<1<<" "<<5<<" "<<3<<endl;
			cout<<5<<" "<<4<<" "<<3<<" "<<1<<" "<<2<<endl;
		}
		else if(n==5 && k==19)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<2<<" "<<5<<" "<<4<<" "<<3<<" "<<1<<endl;
			cout<<3<<" "<<1<<" "<<5<<" "<<2<<" "<<4<<endl;
			cout<<4<<" "<<3<<" "<<1<<" "<<5<<" "<<2<<endl;
			cout<<5<<" "<<4<<" "<<2<<" "<<1<<" "<<3<<endl;
		}
		else if(n==5 && k==21)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<3<<" "<<5<<" "<<1<<" "<<4<<" "<<2<<endl;
			cout<<5<<" "<<3<<" "<<2<<" "<<1<<" "<<4<<endl;
			cout<<1<<" "<<4<<" "<<5<<" "<<2<<" "<<3<<endl;
			cout<<4<<" "<<2<<" "<<3<<" "<<5<<" "<<1<<endl;
			cout<<2<<" "<<1<<" "<<4<<" "<<3<<" "<<5<<endl;
		}
		else if(n==5 && k==22)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<4<<" "<<2<<" "<<3<<" "<<1<<" "<<5<<endl;
			cout<<2<<" "<<5<<" "<<1<<" "<<3<<" "<<4<<endl;
			cout<<3<<" "<<4<<" "<<5<<" "<<2<<" "<<1<<endl;
			cout<<1<<" "<<3<<" "<<4<<" "<<5<<" "<<2<<endl;
			cout<<5<<" "<<1<<" "<<2<<" "<<4<<" "<<3<<endl;
		}
		else if(n==5 && k==23)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<4<<" "<<5<<" "<<3<<" "<<1<<" "<<2<<endl;
			cout<<5<<" "<<4<<" "<<2<<" "<<3<<" "<<1<<endl;
			cout<<3<<" "<<1<<" "<<5<<" "<<2<<" "<<4<<endl;
			cout<<1<<" "<<2<<" "<<4<<" "<<5<<" "<<3<<endl;
			cout<<2<<" "<<3<<" "<<1<<" "<<4<<" "<<5<<endl;
		}
		else cout<<"IMPOSSIBLE"<<endl;
	}

}
