#include<bits/stdc++.h>
using namespace std;
int main()
{

// stack

/* 
pop()
top()
size()
empty() ---  returns true or false
push and emplace
*/


stack<int> st;
st.push(4);
st.push(6);
st.push(9);
st.push(7);

cout << st.top() <<endl; //....prints 7
st.pop() ; //deletes

cout << st.size();
  return 0;
}