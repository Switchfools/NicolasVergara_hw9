//
//  NicolasVergara_GenerarTiempos.cpp
//  
//
//  Created by Nicolas Felipe Vergara Duran on 4/04/18.
//
#include <iostream>
#include <ctime>
using namespace std;
int fibonacci(int N){

    if(N==0|| N==1){
        return 1;
        }
    else{
        
        return fibonacci(N-1)+fibonacci(N-2);
    }
}
int get_time(int N){
    clock_t t;
    t = clock();
    fibonacci(N);
    t = clock() - t;
    float time = ((float)t)/CLOCKS_PER_SEC;
    cout<< time<<endl;
    return 0;
}
int main(){
    for( int n = 1; n <= 36; n++) {
        get_time(n);
    }
    return 0;
}

