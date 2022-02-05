#include<iostream>
using namespace std ;

int main(){
    int n, h;
    cin >> n >> h;
    //cout << n << h;
    int lista[n];
    for (int i=0; i <n; i++){
        cin >> lista[i];
    }
    int k = 0;
    for (int j=0; j<n; j++){
        if (lista[j] > h){
            k++;
        }

    }
    cout << (n + k) << endl;



    }





