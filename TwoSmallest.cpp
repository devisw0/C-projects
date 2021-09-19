#include <iostream>

using namespace std;


int main (){
    int inp;
    cout << "numbers: ";
    cin >> a;
    int arr [a];


    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }


    bool dup = false;

    for(int i = 0; i<a; i++){

        for(int j = i+1; j<n-1; j++){

            if(arr[i] == arr[j])
                dup = true;
        }
    }


    if (dup)
        cout << "\nTrue";

    else
        cout << "\nFalse";
}
