#include<bits/stdc++.h>
using namespace std;
int main()
{
     map<string , int> m;
     m.emplace("vikas" ,1);
     m.emplace("vik" ,2);
     m.emplace("v" ,3);
     m.emplace("abc" ,4);

     m.erase("vikas");

     for(auto it = m.begin() ; it!=m.end(); it++)
     {
          cout << (*it).first <<" = "<<(*it).second <<endl;
     }
  return 0;
}