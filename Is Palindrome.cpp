
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int i;
  string s,s1="";

  cin>>s;
  s1=s;
  reverse(s.begin(),s.end());

  if (s==s1)
    printf("Yes");
  else
    printf("No");

  return 0;
}
