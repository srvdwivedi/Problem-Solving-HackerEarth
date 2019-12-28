
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    while(n--)
    {
        string s1;
        cin>>s1;
        int l = s1.length();
        for(int i=0;i<l;i++)
        {
            int ans1 = s1[i]-'a';
            int ans2 = s1[l-i-1] - 'a';
            
            int ans3 = (ans1 + ans2+ 1)%26 + 'a';
            printf("%c",ans3);
        }
        cout<<endl;
    }
}
