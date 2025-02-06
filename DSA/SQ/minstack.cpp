#include<bits/stdc++.h>
using namespace std;
/*class Stack
{
      stack<pair<int, int>> mystack;
     
    public:
    void push(int x)
    { 
         if(mystack.empty())
         {
            mystack.push({x,x});
         }    
         else{
            mystack.push({x,min(mystack.top().second,x)});
         }
    }
    void pop()
    {
        mystack.pop();
    }
    int getminstack()
   {
      return mystack.top().second;
    }
};
*/
class Stack
{
    
    private :
      int mine=INT_MAX;   
    public:
       stack<int>mystack;
    void push(int x)
    { if(mystack.empty())
    {
         mine = x;
         mystack.push(x);
    }
    else{
        if(x<mine)
        {
            int newval= 2*x - mine;
            mine= x;
            mystack.push(newval);
        }
        else{
            mystack.push(x);
        }
    }
        
    }
    void pop()
    {if(mystack.top()<mine)
        {
              mine= 2*mine - mystack.top();
            mystack.pop();
        }
        else{
             mystack.pop();
        }
    }
     int top()
     {
        return max(mystack.top(),mine);
     }
    int getminstack()
   {
      return mine;
    }
};
int main()
{
    Stack s;
    
    // Pushing values into the stack
    s.push(5);
    cout << "Min after pushing 5: " << s.getminstack() << endl;
    
    s.push(2);
    cout << "Min after pushing 2: " << s.getminstack() << endl;
    
    s.push(8);
    cout << "Min after pushing 8: " << s.getminstack() << endl;
    
    s.push(1);
    cout << "Min after pushing 1: " << s.getminstack() << endl;
    
    // Popping top element
    s.pop();
    cout << "Min after popping: " << s.getminstack() << endl;
    
    s.pop();
    cout << "Min after popping: " << s.getminstack() << endl;

    return 0;
}
