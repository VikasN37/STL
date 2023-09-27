#include<bits/stdc++.h>
using namespace std;
int main()
{
     // -----> PRIORITY QUEUE <------
//  stores in sorted order and time complexity is O(log n) for all operations


priority_queue<int> pq;
pq.emplace(4);
pq.emplace(2);
pq.emplace(9);
pq.emplace(10);
// will store the maximum element at the top

pq.pop();
cout << pq.top();

priority_queue<pair<int , int>> p;
p.emplace(1,2);
p.emplace(1,15);
p.emplace(1,8);

// order will be :  {1,15} {1,8} {1,2}  first it will compare first value


priority_queue<int ,vector<int>, greater<int>> q;  // minimum priority queue
q.emplace(4);
q.emplace(2);
q.emplace(9);
q.emplace(10);
cout << q.top();



// ---------> deque  <---------

/*
push_front()
push_back()
pop_front()
pop_back()
size()
empty()
clear()
*/



// -----> list

list<int> l;
/*
push_front()
push_back()
pop_front()
pop_back()
size()
empty()
clear()
remove ()---O(1)

*/
  return 0;
}