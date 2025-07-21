#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    int result=0;
    cin >> A >> B >> C;
    
    if (C % 2)
    {
        result = A ^ B;
    }
    else
    {
        result = (A ^ B) ^ B;
    }
    cout << result << '\n';
}
