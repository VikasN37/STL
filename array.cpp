#include<bits/stdc++.h>

// using bits/stdc++.h in an interview is not recommended as in industry importing all the libraries takes up a lot of time.

// if anything is defined globally it by defaults gets value 0 and if anything is defined within int main it gets a garbage value by default.

using namespace std;
// namespace is used to declare something inside a scope so c++ has included all their functions inside a namespace names as std;



int main()
{


// conatainers - 1. Array

//  another way of declaring an array is 

array<int,5> arr = {1,2,3,4,5} ;
   // equivalent to  int arr[5]; the non initilised index are made 0 by default.

// function to fill all index with a value --> fill;




/* iterators - begin() , end() , rbegin() , rend();

begin() will point on the first index;
rbegin() means reverse begin it will point on the last index;

end() - it will be point to the right after the last index;
rend() - will point on the index before the start. 

*/

for(auto it = arr.begin() ; it!= arr.end() ;it++)
{
cout << (*it) << " ";
}
cout <<endl;


// for each loop 
for(auto it :arr)
{
     cout << it <<" ";
}

     return 0;
}