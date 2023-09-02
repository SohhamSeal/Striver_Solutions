#include<bits/stdc++.h>
using namespace std;

/*
Given a number N reverse the number and print it.
*/

class Q2{
    int n;
    public:
        Q2(int a)
        {
            n=a;
        }
        void soln1()
        {
            cout << "Reversed number = ";
            int t=n;
            while(t)
            {
                cout << t%10;
                t/=10;
            }
            cout << endl;
        }
        void soln2()
        {
            int t=n,rev=0;
            while(t)
            {
                rev=rev*10+(t%10);
                t/=10;
            }
            cout << "Reversed number = " << rev << endl;
        }
        void soln3()
        {
            string s=to_string(n);
            reverse(s.begin(), s.end());
            cout << "Reversed number = " << s << endl;
        }
};

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    Q2 *obj=new Q2(n);
    obj->soln1();
    obj->soln2();
    obj->soln3();
    return 0;
}