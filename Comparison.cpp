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
		cout<<"Player�ӧQ~�X�h�p�߳Q�k�ۯ{���~\n"<<endl;
	else
		cout<<"Player����~�A�s�v�ܩi�����L�������L!?\n"<<endl;
		
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
		cout<<"Player�ӧQ~�X�h�p�߳Q�k�ۯ{���~\n"<<endl;
	else
		cout<<"Player����~�A�s�v�ܩi�����L�������L!?\n"<<endl;
		
	return;
}

int main()
{
	//��j�p	
	//random seed
	srand(time(NULL));
	
	char mode;
	int int_player, int_ai, con = 1;
	float float_player, float_ai;
	
	while(con)
	{
		cout<<"��j�p�C��\n�п�J����Ҧ� \"i\" => integer mode  \"f\" => float \"e\" => ending"<<endl;
	
		cin>>mode;
	
		switch(mode)
		{
			case 'i':
				cout<<"���ɶ}�l!!"<<endl;
				int_player = rand();
				int_ai = rand();
				Comparison(int_player, int_ai);
			break;
		
			case 'f':
				cout<<"���ɶ}�l!!"<<endl;
				float_player = rand()/(float)(RAND_MAX + 1);
				float_ai = rand()/(float)(RAND_MAX + 1);
				Comparison1(float_player, float_ai);
			break;
			
			case 'e':
				cout<<"�A�|�F�A�S�i�𪺤p����\n"<<endl;
				con = 0;
			break;
		
			default:
				cout<<"�ݤ�������r?\n"<<endl;
		}
	}
	
	//mycard = aicard;
	//Card* c = &mycard;
	//cout<<(mycard, aicard)<<endl;
	
	/*
	while(con)
	{
		cout<<"��j�p�C��\n�п�J�Ҧ� \"s\" => start the game  \"e\" => ending"<<endl;
		......
		Comparison(mycard, aicard);
		......
	}
	*/
	return 0;
}
