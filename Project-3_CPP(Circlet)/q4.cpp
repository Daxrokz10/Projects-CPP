//          5
//        4 5
//      3 4 5
//    2 3 4 5
//  1 2 3 4 5

//first make this
// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

//then
//         5
//       4 5 
//     3 4 5 
//   2 3 4 5  
// 1 2 3 4 5 

//then
// 4
// 4 3
// 4 3 2
// 4 3 2 1

#include <iostream>
using namespace std;

void printPattern() {
    for (int i = 5; i >= 1; i--) {
        
        for (int s = 1; s < i; s++) {
            cout << "  ";
        }
        for (int j = i; j <= 5; j++) {
            cout << j << " ";
        }

        if (i <= 4) {
            for (int j = 4; j >= i; j--) {
                cout << j << " ";
            }
        }

        cout << endl;
    }
}

int main() {
    printPattern();
    return 0;
}