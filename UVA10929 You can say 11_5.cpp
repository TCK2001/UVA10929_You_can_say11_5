/*
Sample Input
112233
30800
2937
323455693
5038297
112234
0
Sample Output
112233 is a multiple of 11.
30800 is a multiple of 11.
2937 is a multiple of 11.
323455693 is a multiple of 11.
5038297 is a multiple of 11.
112234 is not a multiple of 11.
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	while(cin>>s)
	{
		int odd=0,even=0;
		if(s=="0")
		{
			break;
		}
		for(int i=0;i<s.length();i++)
		{
			if((i+1)%2==1) //홀수 값 다 더 하기; 
			{
				odd+=(int)s[i]-'0';
			}
			else //짝수 값 다 더하기; 
			{
				even+=(int)s[i]-'0';
			}
		}
		if((odd-even)%11==0) //그리고 빼기; 
		{
			cout<<s<<" is a multiple of 11 "<<endl;
		}
		else
		{
			cout<<s<<" is not a multiple of 11 "<<endl;
		}
	}

return 0;
}

