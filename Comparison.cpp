#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
class Card
{......};
*/

/*
template <typename T>
void Comparison(T v1, T v2)
{
	cout<<"player: "<<v1<<" VS ai: "<<v2<<endl;
	.......
		
	return;
}
*/

void Comparison(int int_player, int int_ai)
{
	cout<<"player: "<<int_player<<" VS ai: "<<int_ai<<endl;
	
	if(int_player >= int_ai)
		cout<<"Player勝利~出去小心被隕石砸到啊~\n"<<endl;
	else
		cout<<"Player失敗~你連史萊姆哥布林都打不過!?\n"<<endl;
		
	return;
}

int Comparison(int int_player, int int_ai)
{
	cout<<"player: "<<int_player<<" VS ai: "<<int_ai<<endl;
	return int_player >= int_ai ? 1 : 0;
}

void Comparison1(float float_player, float float_ai)
{
	cout<<"player: "<<float_player<<" VS ai: "<<float_ai<<endl;
	
	if(float_player >= float_ai)
		cout<<"Player勝利~出去小心被隕石砸到啊~\n"<<endl;
	else
		cout<<"Player失敗~你連史萊姆哥布林都打不過!?\n"<<endl;
		
	return;
}

int main()
{
	//比大小	
	//random seed
	srand(time(NULL));
	
	char mode;
	int int_player, int_ai, con = 1;
	float float_player, float_ai;
	
	while(con)
	{
		cout<<"比大小遊戲\n請輸入比較模式 \"i\" => integer mode  \"f\" => float \"e\" => ending"<<endl;
	
		cin>>mode;
	
		switch(mode)
		{
			case 'i':
				cout<<"比賽開始!!"<<endl;
				int_player = rand();
				int_ai = rand();
				Comparison(int_player, int_ai);
			break;
		
			case 'f':
				cout<<"比賽開始!!"<<endl;
				float_player = rand()/(float)(RAND_MAX + 1);
				float_ai = rand()/(float)(RAND_MAX + 1);
				Comparison1(float_player, float_ai);
			break;
			
			case 'e':
				cout<<"再會了，沒勇氣的小屁孩\n"<<endl;
				con = 0;
			break;
		
			default:
				cout<<"看不懂中文字?\n"<<endl;
		}
	}
	
	//mycard = aicard;
	//Card* c = &mycard;
	//cout<<(mycard, aicard)<<endl;
	
	/*
	while(con)
	{
		cout<<"比大小遊戲\n請輸入模式 \"s\" => start the game  \"e\" => ending"<<endl;
		......
		Comparison(mycard, aicard);
		......
	}
	*/
	return 0;
}
