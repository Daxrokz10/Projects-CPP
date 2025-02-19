// * * * * *
// *       *
// * * * * *
// *
// *
// *

#include<iostream>
using namespace std;

int printPattern(){
    for(int i=1;i<=6;i++){
        for(int j = 1; j<=5;j++){
            if(i == 1 || i == 3 || j == 1 || (j == 5 && i <= 3)){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;

}
int main(){
    printPattern();
}