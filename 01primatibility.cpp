#include<iostream>
using namespace std;
bool isPrime(int num){
    if(num == 1){
        return false;
    }
    for(int i = 2 ; i*i <= num ; i++){
        if((num % i) == 0){
            return false;
        }
    }
    return true;
}
int main(){
    for(int i = 1 ; i <= 100 ; i++){
        cout<<i<<" ";
        isPrime(i)?cout<<"Prime"<<endl:cout<<"Composit"<<endl;
    }

}


