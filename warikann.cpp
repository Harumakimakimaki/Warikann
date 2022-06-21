// nikkko.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<stdio.h>
using namespace std;

unsigned int sum, num;


class Ave{
		unsigned int a, b;
	public:
		void divide();
		void add();
};

void Ave::divide() {
	a = sum / num;
	cout <<" 代表者以外は "<< a <<" 円です。" << endl;
}

void Ave::add() {
	b = a + sum % num;
	cout <<"代表者は"<< b<<"円です。"<<endl;
}

class Date {
	long long ratio;
	long long l;
	unsigned int m, n;
public:
	void dating();
};
void Date::dating() {
	cout << "割合を設定してください（％）" << endl;
	cin >> ratio;
	l = sum * ratio * 0.01;
	m = round(l);
	n = sum - m;
	cout << "あなたのお会計額は" << m << "円です。" << endl;
	cout << "お相手のお会計額は" << n << "円です。" << endl;
}

class Roulette {
	long long* a_heap;
	long long *param;
	unsigned int sum2,num2, accumulate,i,j;
public:
	void fighting();
};

void Roulette::fighting(){
	cout << "皆さんのお会計はこんなもんです" << endl;
	num2 = num - 1;
	a_heap = new long long [num];
	param = new long long [num2];
	srand(time(NULL));
	double Min = 0;
	double Max = 1;
	for (i = 0; i < num; i++) {
		a_heap[i] = rand();
	}
	sum2 = 0;
	for (i = 0; i < num; i++) {
		sum2 += a_heap[i];
	}
	for (i = 0; i < num2; i++) {
		param[i] = a_heap[i] * sum / sum2;
		cout << param[i] << endl;
	}
	accumulate = 0;
	for (i = 0; i < num2; i++) {
		accumulate += param[i];
	}
	j = sum - accumulate;
	cout << j << endl;
	delete[]a_heap;
	delete[]param;
}
int main() {
	int c;
	unsigned int choice;
	cout << "機能を選択してください(1.通常　2.任意割合　3.ロシアンルーレット)" << endl;
	cin >> choice;
	cout << "お会計総額を入力してください" << endl;
	cin >> sum;
	cout << "人数を入力してください" << endl;
	cin >> num;
	if (choice == 1) {
		Ave ave;
		ave.divide();
		ave.add();
	}
	else if (choice == 2) {
		Date date;
		date.dating();
	}
	else {
		Roulette roulette;
		roulette.fighting();
	}
	c = getchar();
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
