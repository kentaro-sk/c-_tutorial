#include <iostream>

using namespace std;

int main(){
    string s,t;
    
    //姓と名の入力
    cout << "姓を入力：";
    cin >> s;
    cout << "名を入力：";
    cin >> t;


    //入力に対する出力
    cout << "名前は「" << s+t << "」です．" << endl;

    return 0;

}