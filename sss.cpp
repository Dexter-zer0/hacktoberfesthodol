#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string s;
	    cin>>n;
	    cin>>s;
	    int x = 0;
	    bool flag = 1;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
	        {
	            x=0;
	        }
	        else
	        {
	            x++;
	            if(x>=4)
	            {
	                flag=0;
	                break;
	            }
	        }
	    }
	    if(flag)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
