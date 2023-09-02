#include<bits/stdc++.h>
using namespace std;

/*
Given an integer N, write a program to count the number of digits in N.
*/

class Q1{
    int n;
    public:
        Q1(int a)
        {
            n=a;
        }
        void soln1()
        {
            int t=n,count=0;
            while(t)
            {
                count++;
                t/=10;
            }
            cout << "Number of digits in " << n << " = " << count  << endl;
        }
        void soln2()
        {
            string s=to_string(n);
            cout << "Number of digits in " << n << " = " << s.length()  << endl;
        }
        void soln3()
        {
            cout << "Number of digits in " << n << " = " << int(ceil(log10(n))) << endl;
        }
};

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    Q1 *obj=new Q1(n);
    obj->soln1();
    obj->soln2();
    obj->soln3();
    return 0;
}