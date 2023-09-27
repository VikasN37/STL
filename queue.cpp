#include<bits/stdc++.h>
using namespace std;
int main()
{

     // queue 

     /* fn:
     
     front()
     pop()
     push()
     empty()     Time complexity : O(1)
     */

     queue<int> q;
     q.push(4);
     q.push(3);
     q.push(8);
     q.push(9);
     q.push(10);
     cout << q.front();
  return 0;
}