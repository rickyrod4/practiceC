#include <iostream>

using namespace std;

int main(){

    int sum =0;

    for(int i =0; i <= 100; i++){
        if(i%5 == 0){
            sum = sum + i;
        }
    }

    cout << sum << endl;


    return 0;
}

//This concludes the main function
