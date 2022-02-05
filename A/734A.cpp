#include<iostream>
using namespace std;

int main(){
    int n;
    string str;
    cin >> n >> str;
    int kA = 0;
    int kB = 0;
    for (int i = 0; i < str.length();i++)
    {
        if (str[i] == 'A'){
            kA++;
        }
        else{
            kB++;
        }
    }
    string result;
    if (kA > kB)
    {
        result = "Anton";

    }
    else if (kA < kB){
        result = "Danik";

    }
    else{
        result = "Friendship";
    }
    cout << result <<"\n";


}
