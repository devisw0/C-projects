#include <iostream>

using namespace std;

int main(){
    int w, x, y, z;
    bool var = true;
    cout << "Enter value for w";
    cin >> w;
    cout << "Enter value for x";
    cin >> x;
    cout << "Enter value for y";
    cin >> y;
    cout << "Enter value for z";
    cin >> z;
    if(((w < x) && (y < z)) ||  ((w > x) && (y > z))){
        cout << var;
    }else{
        var = false;
        cout << var;
    }
}
