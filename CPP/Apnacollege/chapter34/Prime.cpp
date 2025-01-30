
#include <iostream>
#include <string.h>
#include<vector>

using namespace std;

class Prime
{
public:
    //  checking Prime Normal Function
    string isPrime(int n = -1)
    {
        if (n == -1)
        {

            cout << "Enter Number To Check Prime :" << endl;
            cin >> n;
        }

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return "Not Prime";
            }
        }

        return "Prime";
    }

    //   n Primes using the same
    void PrintPrimeN(int n=-1)
    { 
        if(n==-1){
        cout << "Enter The N to print 1 to N Prime" << endl;
        cin >> n;
        }
        for (int i = 2; i <= n; i++)
        {
            if (this->isPrime(i) == "Prime")
            {
                cout<<i<<' ';
            }
        }
        cout<<endl;
    }

    //  sieve of Eratosthenes 
   
    int steive(int n=-1){
        if(n==-1){
        cout << "Enter The N to print 1 to N Prime" << endl;
        cin >> n;
        }
        vector<int> isPrime(n+1,true);
        int answer=0;
        for(int i=2;i<n;i++){

            if(isPrime[i]){
               answer++;
               for(int j=i*2;j<n;j=j+i){
                   isPrime[j]=false;
               }
            }
        }

        //  we can also print here in O(n)
        return answer;
    }
};

int main()
{

    Prime obj;
    int input;
    cout<<"What you want to Do"<<endl;
    cout<<"1 to Check Prime"<<endl;
    cout<<"2 to print N prime"<<endl;
    cout<<"3 to find Number of Prime from 2 to N "<<endl;
    cin>>input;
    
    switch (input)
    {
    case 1:
        cout << obj.isPrime() << endl;
        break;
    case 2:
         obj.PrintPrimeN();
         break;
    case 3:
         cout<<obj.steive()<<endl;
         break;
    default:
        cout<<"Only 1 or 2 Allow"<<endl;
        break;
    }
  
    return 0;
}