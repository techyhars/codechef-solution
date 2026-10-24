#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    getline (cin,str1);
    getline (cin,str2);
    cout << str1.size() << " " << str2.size() << endl;
    cout << str1 + str2 << endl;
    swap(str1[0],str2[0]);
    cout << str1 << " " << str2 << endl;
}
