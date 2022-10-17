#include <iostream>
#include <string>

using namespace std;

int main(){
    string o,p,q,r,s,t,u,v,w,x,y;
    cout << "今から漢字テストを5問出題します．" << endl;
    
    //第1問
    cout << endl << "第1問；齷齪" << endl;
    x = "あくせく";     //答え
    cout << "読みは？：";
    cin >> o;   //回答の入力
    cout << boolalpha   //正解ならtrueを，不正解ならfalseを返す．
        << (o==x) << endl;      //答え合わせ．
    
    //第2問
    cout << endl << "第2問；齟齬" <<endl;
    w = "そご";
    cout << "読みは？：";
    cin >> p;
    cout << boolalpha
        << (p == w) << endl;

    //第3問
    cout << endl << "第3問；咀嚼" << endl;
    u = "そしゃく";
    cout << "読みは？：";
    cin >> q;
    cout << boolalpha
        << ( u == q) << endl;

    //第4問
    cout << endl << "第4問；歯齦" << endl;
    y = "しぎん"; 
    cout << "読みは？：";
    cin >> r;
    cout << boolalpha
        << (y == r) << endl;

    //第5問
    cout << endl << "最終問題；齲蝕" << endl;
    cout << "読みは？：";
    t = "うしょく";
    cin >> s;
    cout << boolalpha
        << (s == t) << endl;

     return 0;   
}