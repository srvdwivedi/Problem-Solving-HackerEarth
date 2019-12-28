#include <iostream>
using namespace std;
int main()
{
int x, count,j;
string s;
cin >> x;
while(x--)
{
count=0;
cin >> s;
j=0;
while(j<s.length())
{
if((s[j]=='W') && ((j>0 && s[j-1]=='B') || (j>1 && s[j-2]=='B') || (j<s.length()-1 && s[j+1]=='B') || (j<s.length()-2 && s[j+2]=='B')) )
count++;
j++;
}
cout << count << endl;
}
 
return 0;
}
