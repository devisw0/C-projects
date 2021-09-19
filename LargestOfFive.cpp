#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cout << "input 1st number";
    cin >> a;
    cout << "input 2nd number";
    cin >> b;
    cout << "input 3rd number";
    cin >> c;
    cout << "input 4th number";
    cin >> d;
    cout << "input 5th number";
    cin >> e;

    if(((a > b) && (a > c)) && ((a > d) && (a > e))){
        cout << a;
    }

    else if(((b > a) && (b > c)) && ((b > d) && (b > e))){
        cout << b;
    }

    else if(((c > a) && (c > b)) && ((c > d) && (c > e))){
        cout << c;
    }

    else if(((d > a) && (d > b)) && ((d > c) && (d > e))){
        cout << d;
    }

    else{
        cout << e;
    }



}
