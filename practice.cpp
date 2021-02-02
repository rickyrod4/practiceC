#include <iostream>
#include <string>

using namespace std;


void showTable(){
    int array1[2][2];
    array1[0][0] = 1;
    cout << array1[0][0] << endl;

}
int main(){

    int sum =0;

    for(int i =0; i <= 100; i++){
        if(i%5 == 0 && i%8 == 0){
            sum = sum + i;
        }
    }

    cout << sum << endl;
    showTable();


    return 0;
}
//This concludes the main function
