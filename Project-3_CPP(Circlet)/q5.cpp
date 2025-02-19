// 1 2 3 4 5 4 3 2 1
//   1 2 3 4 3 2 1
//     1 2 3 2 1
//       1 2 1
//         1

#include<iostream>
using namespace std;

int printPattern() {
    for (int i = 0; i < 5; i++) {
    
        for (int s = 0; s < i; s++) {
            cout << "  ";
        }
        
        for (int j = 1; j <= 5 - i; j++) {
            cout << j << " ";
        }
      
        for (int j = 4 - i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

int main() {
    printPattern();
}