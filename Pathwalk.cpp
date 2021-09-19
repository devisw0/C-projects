#include <iostream>
using namespace std;

int numPaths(int row1, int column1, int row2, int column2){
    if(row2 == row1 || column2 == column1){
        return 1;
    }
        return numPaths(row1, column1, row2 - 1, column2) + numPaths(row1, column1, row2, column2 - 1);
}

int main() {
    cout << "Enter 1st coordinate" << endl; //(0,0)
    int x1;
    int y1;
    cin >> x1;
    cin >> y1;
    cout << "Enter 2nd coordinate" << endl; //(7,4)
    int x2;
    int y2;
    cin >> x2;
    cin >> y2;

    cout << "# of Paths: " + numPaths(x1,y1,x2,y2) << endl;
}
