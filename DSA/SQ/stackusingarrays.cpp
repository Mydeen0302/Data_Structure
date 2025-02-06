#include<bits/stdc++.h>
using namespace std;
class Stack{
  public : int arr[10];
  int topi =-1;

   void push(int x)
   {  
    if(topi >= 10) cout<<"satck is Full"; 
     else  {
        topi++;
      arr[topi]=x;
     } 
   }

   void pop()
   {if(topi == -1 )cout<<"stack is Empty\n";
   else topi--;
   }
    
     int top()
     {
         return arr[topi];
     }

     int size()
     {
          return topi;
     }
     bool isEmpty()
     {
        if(topi == -1 ) return true;
        else return false;
     }

};

int main() {
    Stack s1;
    int num;
    char choice;

    while (true) {
        std::cout << "\nStack Operations Menu:\n";
        std::cout << "1. Push\n";
        std::cout << "2. Pop\n";
        std::cout << "3. Top\n";
        std::cout << "4. Is Empty\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case '1':  // Push
                std::cout << "Enter number to push: ";
                std::cin >> num;
                s1.push(num);
                std::cout << num << " pushed onto the stack.\n";
                break;

            case '2':  // Pop
                s1.pop();
                break;

            case '3':  // Top
                num = s1.top();
                if (num != -1)
                    std::cout << "Top element is: " << num << std::endl;
                break;

            case '4':  // Check if empty
                if (s1.isEmpty())
                    std::cout << "Stack is empty.\n";
                else
                    std::cout << "Stack is not empty.\n";
                break;

            case '5':  // Exit
                std::cout << "Exiting...\n";
                return 0;

            default:
                std::cout << "Invalid choice! Try again.\n";
                break;
        }
    }
    return 0;
}