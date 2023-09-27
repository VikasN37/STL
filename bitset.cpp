#include<bits/stdc++.h>
using namespace std;
int main()
{


     // int - 4bytes 
     // char - 1bytes


     // bitset --takes 1 bit

     // DECLARATION :

     bitset<4> b;   // forms a array only stores 0 or 1
     cin >> b;
     cout << b;

     /* functions : */
     
    // 1.all
cout << b.all() ; // returns true or false (if all 1 then true else false)

    // 2.any
     cout << b.any() ; // returns true or false (if atleast one bit si 1 then true else false)


     //3.count
     cout << b.count() ; // returns the number of 1 in bitset

     //4.flip
     cout << b.flip(2) ; //flips on particular index ( 1-->0  or 0--->1)

     //5.none
     cout << b.none() ; // returns true or false (if all 0 then true else false)

     //6.set
     cout << b.set() ; // sets the bits up(i.e makes them 1) here all will become 1
     
     cout << b.set(2) ; // sets the bit at index 2 up(i.e makes them 1) 
     cout << b.set(2,0) ; // sets the bit at index down(i.e makes them 0) 

     //7.reset  will make all index to 0

     //8.size
     cout <<b.size();

     //9.test
     cout << b.test(3);  // checks the index 3 .    
    


  return 0;
}