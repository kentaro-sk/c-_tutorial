#include <iostream>
#include <string>

using namespace std;

int main(){
    float st, nd;

    //数字の読み込み
    cout << "１つ目の数字：";
    cin >> st;
    cout << "２つ目の数字：";
    cin >> nd;

    //実際の演算とその出力
    cout << st << "+" << nd << "=" << st + nd << endl;
    cout << st << "-" << nd << "=" << st - nd << endl;

    return 0;
}
