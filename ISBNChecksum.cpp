#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cout << "input the 9 digit integer";
    cin >> n;

    for(int i = 2; i <= 10; i++) {
            int digit = n % 10;
            sum = sum + i * digit;
            n = n / 10;
        }

        if(sum % 11 == 1){
            cout << "X";
        }

        else if(sum % 11 == 0){
            cout << "0";
        }

        else {
            int out = 11 - (sum % 11);
            cout << out;
        }
}
