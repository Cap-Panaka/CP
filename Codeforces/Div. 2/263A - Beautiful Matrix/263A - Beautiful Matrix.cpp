#include<bits/stdc++.h>
using namespace std;
int main() {

    int array[6][6];
    int result = 0;
    int row = 0 , column = 0;
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++) {
            cin >> array[i][j];
        }
    }
    for(int i = 0 ; i < 5 ; i++){
        row++;
        for(int j = 0 ; j < 5 ; j++){
            column++;
            if(array[i][j] == 1){
                result = abs(row - 3) + abs(column - 3);
            }
            if(column == 5){
                column = 0;
            }
        }
    }
    cout << result << endl;
    return 0;
}