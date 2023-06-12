#include <iostream>

using namespace std;

void garis(){
    cout << endl;
    cout << "======================" << endl;
}

int fak(int n){
    if(n==0)
        return 1;
    else
        return n * fak(n-1);
}


int main()
{
    cout << "=====Welcome To Factorial Input=====" << endl;
    int a;
    int q;
    int q2;

    garis();
    cout << "Wanna Try It? " << endl;
    cout << "Yes = 1" << endl;
    cout << "No  = 0" << endl;
    cin >> q;

    if(q==1){
    do{
        if(q==1){
            garis();
            cout << "Input Number: ";
            cin >> a;
            cout << fak(a) << endl;
            garis();
        } else if(q==0){
            cout << "Thanks for try it, have a nice day!" << endl;
            garis();
        }
        cout << "Wanna Try It Again?" << endl;
        cout << "Yes = 1" << endl;
        cout << "No  = 0" << endl;
        cin >> q2;
    }
    while(q2==1);
    garis();
    cout << "Thanks for try it, have a nice day!" << endl;
    }
    else{
        garis();
        cout << "Thanks for try it, have a nice day!" << endl;
    }


    return 0;
}
