#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double t;
    double v;
    cout << "input the  temperature (in Fahrenheit)";
    cin >> t;
    cout << "input the velocity (in miles per hour)";
    cin >> v;
    double w;
    w = 35.74 + 0.6215*t + (0.4275*t - 35.75)*pow(v, 0.16);


    cout << "The wind chill at " << v << " miles per hour is " << w << " degrees Fahrenheit.";


}
