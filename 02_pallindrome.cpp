#include <iostream>
using namespace std;

int main()
{
    // std::cout<<"Hello World";
    int n;
    cout<<"Enter the number for which you want to check palindrome\n";
    cin>>n;
    
    int temp = n;
    int rev = 0;
    
    while(n > 0)
    {
        int rem = n%10;
        rev = rem + rev*10;
        n = n/10;
    }
    
    if(temp == rev)
    {
        cout<<"Yes, It is a Pallindrome\n";
    }
    else
    {
        cout<<"No, It is a Pallindrome\n";
    }

    return 0;
}