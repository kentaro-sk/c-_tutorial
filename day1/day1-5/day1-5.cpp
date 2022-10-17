#include <iostream>
#include <string>

using namespace std;

int main(){
    string s,t,u,v,w;
    t = "入力された";
    t += "文字は、";
    cout << "文字列を入力：";
    cin >> s;
    cout << t+s << "です。" << endl;

    u = "こんにちは";
    v = "こんにちは";
    w = "こんばんは";

    cout << "こんにちは=こんにちは:" <<(u == v) << endl;
    cout << "こんにちは=こんばんは:" << (u == w) << endl;
    cout << "こんにちは≒こんばんは" << (u != w) << endl;
    cout << "こんにちは>こんばんは" << (u > w) << endl;
    cout << "文字列を入力<こんばんは" << (t < w) << endl;


    cout  << boolalpha //1のときにはtrueを，0のときにはfalseを返す．
         << "The true expression 3 != 2 yields: "
         << (3 != 2) << endl
         << "The false expression 20 == 10 yields: "
         << (20 == 10) << endl;
    return 0;
}