// 1 0 1 0 1
//   1 0 1 0
//     1 0 1
//       1 0
//         1

#include <iostream>
using namespace std;

void printPattern(){
    for(int i=5; i>=1; i--){
        for(int s=5; s>i; s--){
            cout << "  ";
        }
        for(int j=1; j<=i; j++){
            cout << (j % 2) << " ";
        }
        cout << endl;
    }
}

int main(){
    printPattern();
    return 0;
}