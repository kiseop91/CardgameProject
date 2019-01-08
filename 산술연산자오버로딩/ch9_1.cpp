#include <iostream>
#include <fstream>
#include <string>
#include "Position2D.h"
#include <Windows.h>
using namespace std;
//�Ͻ����� ī��Ŭ����
class Card
{
private:
	int mHealth;
	int mAttack;
	int mAfter;
	string mName;
	Position2D pos;

public:
	Card(const int& atk, const int& health, const string& name, const int after)//������
		:mAttack(atk), mHealth(health), mName(name), mAfter(after)
	{
	}

	int getHealth() const { return mHealth; }
	int& getHealth() { return mHealth; }
	int getAttack() const { return mAttack; }
	int& getAttack() { return mAttack; }

	void setPosition(const int& x, const  int& y) { pos.setPosition(x, y); };
	Position2D getPosition() { return pos; };

	Card operator - (Card& c2) const // C1������  C2���ݴ�� 
	{
		int after = mHealth - c2.getAttack();
		return Card(mAttack, mHealth, mName, after);
	}

	friend std::ostream& operator << (std::ostream &out, const Card& card)
	{
		out << " �̸� : " << card.mName << endl << "  �� : " << card.getAttack() << " ����ü�� : " << card.mAfter << endl;
		return out;
	}

	friend std::istream& operator >> (std::istream &in, Card &card)
	{
		in >> card.mAttack >> card.mHealth >> card.mName;
		card.mAfter = card.mHealth;
		return in;
	}
};

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int dx = 0, dy = 30;
bool cd=true;
void update()
{
	Sleep(10);
	
	if (dx > 30) {
		dx++;
		dy++;
		gotoxy(dx, dy);
		cout << dx;
	}
	else  {
		dx++;
		dy--;
		gotoxy(dx, dy);
		cout << dx;
	}

}

int main()
{
	cout << "�α��Լ� �׷���" << endl;

	//Card c1(6, 7, "���ָԿ����", 7);
	//Card c2(3, 2, "ȭ������", 2);

	//Card c3(0, 0, "", 0);
	////cin >> c3;
	//cout << c3 << endl;

	//cout << c1 << endl;
	//cout << "���ָԿ���Ŵ� ȭ�������� �����ߴ�..!" << endl;
	//cout << c1 - c2 << endl;
	////cout << Card(1, 1, "1", 1) << endl;
	////cout << c1 - c2 << endl;

	//Position2D pos(2, 1);
	//Position2D pos2 = pos.getPosition();
	//pos2.setPosition(5, 5);
	//cout << pos2 << endl;
	//cout << pos2.getPositionX() << endl;

	//cout << pos + pos2 << endl;
	//c1.setPosition(99, 99);

	//cout << c1 << endl;
	//cout << c1.getPosition() << endl;;
	
		while (1)
		{

			update();

		}
	
	return 0;

}

