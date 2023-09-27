#include<bits/stdc++.h>
using namespace std;
int main()
{

     // map container is used to store key , value 

     /* 
     map only stores unique keys
     Time complexity is : O(logn)
     
     */

     map<int , string> mp;
     mp[2]= "vikas";
     mp[3]="pq";
     mp[4] = "vikas";

     // mp.insert(4,"abc");
     mp.emplace(5,"a");  

     // will store in ascending order (according to keys);

     // to delete just give the key

     mp.erase(2); 
     mp.erase(mp.begin()); //can delete with the help of iterators as well.
      mp.erase(mp.begin() , mp.end());// deletes a given range

     mp.clear();  // clears up the whole map

     auto it = mp.find(3);  // points where 3 lies.

     if(mp.empty())   // empty() returs a bool
     {
cout <<"yes empty";
     }


for(auto it : mp)    // for printing
{
     cout << it.first <<" "<< it.second ;
     cout <<endl;
}
for(auto it=mp.begin() ; it!=mp.end() ;it++)    // for printing
{
     cout << it->first <<" "<< it->second ;
     cout <<endl;
}







// ------>> UNORDERED MAPS <-------

// Time complexity : O(1) almost in all cases.....worst case : O(n).
// Do not store in any order .



// multimap : sorted and multiple keys
  return 0;
}