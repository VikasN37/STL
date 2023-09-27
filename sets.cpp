#include<bits/stdc++.h>
using namespace std;
int main()
{
     // given n elements if we want to get unique elements then sets can help

     // set<datatype> name ; all the elements will be unique wrt to the datatype

     set<int> st;

     int a[5]={1,2,3,1,2};

     for(int i=0 ;i<5;i++)
     {
          int x;
          cin >> x;
          st.insert(x); // time taken - O(log n) where n is size of set

          // after inserting all the elements of arr set st will have - {1,2,3};
     }

/* sets stores unique elements in ascending orders
use iterators to access

*/


st.erase(st.begin()); // will delete the first element time : O(logn)

st.erase(st.begin() , st.end()); // -- > [)  

st.erase(2); // will delete the particular key.


// almost similar to vectors

set<int> s2 = {2,34,4};
// set<int>s3(s2);


auto it = s2.find(34); // returns an iterator that points on the key 34. Time : O(log n)

auto it2=s2.find(440) ; // if element does not exists then it will return st.end()

// some fn : emplace() , size() ;




// to print
for(auto x = st.begin() ; x!=st.end() ;x++){
     cout << *x <<endl;
}





//------> unordered set  <-------

unordered_set<int> s;
s.insert(222);
s.insert(22);
s.insert(42);

// unordered sets are not ascending in order

/*

average time complexity : O(1);
worst case : O(n);

if ascending order is not needed then go for unordered_set due to its time complexity.
if getting tle then switch to ordered set

*/  



//------> multiset    <-------

// in multiset we can store all the elements(not necessarily unique) in ascending order.

multiset<int> ms;
ms.insert(2);
ms.insert(3);
ms.insert(3);
ms.insert(4);
ms.insert(4);  // ms-->{2,3,3,4,4}


ms.count(3) ;  // return the no of times  3 occured


ms.erase(4); // all 4s will be delete

auto s = ms.find(3) ;  // returs the iterator where first 3 was encountered
ms.clear();  // will clear entire set


// Time : O(log n)

  return 0;
}