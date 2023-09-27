#include<bits/stdc++.h>
using namespace std;
bool comp(int elm1, int elm2)
{
if(elm1 < elm2)
{
     return true;
}
else
{
     return false;
}
}

int main()
{
// comparator

int arr[5];

// sort(arr ,arr+5 , comparator fn )  comparator fn returns true or false
sort(arr ,arr+5 , comp() );

    sort(arr ,arr+5 , greater<int>() );  // inbuitlt comparator for descending order   
  return 0;
}