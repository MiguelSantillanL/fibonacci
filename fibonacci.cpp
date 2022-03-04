#include <iostream>
using namespace std;

int main(){
    int num = 10; //NUmero que queremos
    unsigned long long int fib[num] = {0,1};
    
    for (int i = 2 ; i <= num ; i++)
        fib[i] = fib[i-1] + fib[i-2];
    
    //Serie
    for(int i = 0 ; i <= num ; i++)
        cout << "No. " << i << ": "<< fib[i] << "\n" ;
    

}