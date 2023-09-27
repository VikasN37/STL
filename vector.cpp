#include<bits/stdc++.h>
using namespace std;
int main()
{

vector<int> v;  // has a dynamic size
v.push_back(2);
v.push_back(4);
v.pop_back(); //---> {2}


/* FUNCTIONS IN VECTORS

1. v.push_back(x); or  v.emplace_back(x); 
both works same but emplace takes lesser time than push_back

2. v.pop_back();

3. v.clear();   erases all elements at once

4.  vector<int> v(4, 0) ;  will declare a vector of size 4 intiliased with 0 ;

*/

 vector<int> v2(4, 2);
for(int i=0 ; i<4;i++)
{
     cout << v2[i]<<" ";
}


// copying the entire vector into another vector

vector<int> v3(v2);
// or
vector<int> v4(v2.begin() , v2.end());




// defining a 2D vector


vector<vector<int>> vec;

vector<int> x ;
x.push_back(3);
x.push_back(10);

vector<int> y;
y.push_back(2);
y.push_back(4);
y.push_back(10);
y.push_back(20);

vec.push_back(x);
vec.push_back(y);
int i=0;
cout <<endl;
for(auto it = vec.begin() ;it!=vec.end() ;it++)
{
     
     cout <<"Vector "<<i+1 <<" is = ";
     for(auto it2=vec[i].begin() ;it2!=vec[i].end() ;it2++)
     {
          cout << *it2<<" ";
     }
     cout <<endl;
     i++;
}




// to define vector of 10 x 20 size

vector<vector<int>> b(10,vector<int>(20,0)) ;

// array of vectors

vector<int> arr[4]; // every index has a vector.
  return 0;
}
