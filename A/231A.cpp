#include<iostream>
using namespace std ;

int main(){
    int n;
    cin >> n;
    int knows[n][3];
    int a,b,c;
    for (int i = 0; i <= (n - 1); i++){
        cin >> a >> b >> c; //inputamos a,b,c
        knows[i][0] = a;
        knows[i][1] = b;
        knows[i][2] = c;
    }
    //contar problemas que van a resolver
    int count = 0;
    int suma;
    for (int i = 0; i <= (n-1); i++){
        suma = knows[i][0] + knows[i][1] + knows[i][2];
        if (suma > 1){
            count++;
        }

    }

    cout << count << endl;




}
