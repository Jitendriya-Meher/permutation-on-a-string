#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void perm( string str, int ind, vector<string>& ans)
{
  // base case
  if( ind >= str.length())
  {
    ans.push_back(str);
    return;
  }

  // swap from ind to end of the string
  for( int j=ind; j<str.length(); j++)
    {
      swap( str[ind], str[j]);
      perm( str, ind+1, ans);
      // backtracking
      swap( str[ind] ,str[j]);
    }
  
}

int main() {

  cout<<endl;
  cout<<" enter a string : ";
  string str;
  getline( cin,str);

  vector<string> ans;
  string output="";

  perm( str, 0, ans);

  cout<<endl;
  cout<<" permutation of the string are : "<<endl;
  
  int i=1;
  for( auto it: ans)
    {
      cout<<i<<" : ";
      cout<<" "<<it<<endl;
      i++;
    }cout<<endl;
  
}