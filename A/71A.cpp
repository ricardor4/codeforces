#include<iostream>
#include <string>
using namespace std ;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        string word;
        cin >> word;
        if (word.length() < 11){
            cout << word <<endl;}
        else{
        char initial = word.front();
        char last = word.back();
        int middle = word.length() - 2;
        cout << initial << middle << last <<endl;
        }


    }



    }





