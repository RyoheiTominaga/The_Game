// The_Game.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include"Deck.h"
#include"Player.h"
#include"CardPuts.h"
#include"Common.h"

using namespace std;
void GameInformation();
int main()
{



    Player p;
    CardPuts puts;
    int i = 0;
    while (i != 1) {
        system("cls");
        GameInformation();
        cout << "\n\n理解したら1を押してゲームを始めてください\n数字を入力してください＞";
        cin >> i;
        system("cls");
    }

    //Deck deck;
   // puts.cardPutUp(p);
   // puts.showCard();
    //p.showCard();
    //puts.selectMove();
  //  p.pullOutACard();
    
   /* p.Turn();
    p.SetCard();
    puts.selectMove(p);
    p.useCardAfter();*/
    bool game = false;
    int maxNum = CARD_MAXNUM;
    while (!game) {
     
          
            puts.selectMove(p);

            if (puts.getFinishCard() >= maxNum) {
                cout << "GAMECLEAR" << endl;
                game = true;
                
            }
            if (p.GameOver()) {
                cout << "GAMEOVER" << endl;
                game = true;
            }
        
    }
    
}
void GameInformation() //ゲームの説明文
{
    printf("1→99のところには今置いてあるカードより大きい数字\n"
        "100→2のところには今置いてあるカードより小さい数字\n"
        "を置いていき、カードの残り枚数を０枚にしたら勝利となります\n"
        "次に特殊な置き方を紹介します\n"
        "例えば、１→99のところで55が置いてあった時普通でしたら56以上しか置くことはできませんが\n"
        "一の位の数字が同じで十の位の差が１の時置くことができます\n"
        "ここでいうと45を置くことができます\n"
        "100→2のところで55が置いてあった場合は65を置くことができます\n"
        "これをうまく利用して生き延びてください\n"
        "１ターンに2枚以上のカードを出さなければいけません\n"
        "ターンエンドした後は手札が常に８枚になるように補充を行います\n"
        "1ターンに３回出せないところに出してしまうとゲームオーバーになります\n"
        "なお出せないところに出した場合自動的にもどされているのでそこは安心してください");

}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
