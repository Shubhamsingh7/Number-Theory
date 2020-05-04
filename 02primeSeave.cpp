#include<iostream>
using namespace std;

bool* primeSeave(int n){
    bool *isPrime = new bool[n+1];
    for(int i = 0 ; i <= n ;i++){
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i*i <= n ;i++){
        if(isPrime[i]){
            for(int j = i*i ; j <= n ; j+=i){
                isPrime[j] = false;
            }
        }
    }
    return isPrime;

}


int main(){
    bool *ptr = primeSeave(100);
    for(int i = 2 ; i <= 100; i++){
        cout<<i<<" ";
        ptr[i]?cout<<"Prime"<<endl:cout<<"Composit"<<endl;
    }
}