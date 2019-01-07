#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//하스스톤 카드클레스
class Card
{
private:
	int mHealth;
	int mAttack;
	int mAfter;
	string mName;
public:
	Card(const int& atk, const int& health, const string& name, const int after)//생성자
		:mAttack(atk), mHealth(health), mName(name), mAfter(after)
	{
	}

	int getHealth() const { return mHealth; }
	int& getHealth() { return mHealth; }
	int getAttack() const { return mAttack; }
	int& getAttack() { return mAttack; }


	//friend Card operator - (const Card &c1, Card& c2) // C1공격자  C2공격대상
	//{
	//	return Card(c2.getHealth() - c1.getAttack());
	//}

	Card operator - (Card& c2) const // C1공격자  C2공격대상 
	{
		int after = mHealth - c2.getAttack();
		return Card(mAttack, mHealth, mName, after);
	}

	friend std::ostream& operator << (std::ostream &out, const Card& card)
	{
		out << " 이름 : " << card.mName << endl << "  공 : " << card.getAttack() << " 현재체력 : " << card.mAfter << endl;
		return out;
	}

	friend std::istream& operator >> (std::istream &in, Card &card)
	{
		in >> card.mAttack >> card.mHealth >> card.mName;
		card.mAfter = card.mHealth;
		return in;
	}
};

//Card operator - (const Card &c1, Card& c2) // C1공격자  C2공격대상
//{
//	return Card(c2.getHealth() - c1.getAttack());
//}

int main()
{

	Card c1(6, 7, "돌주먹오우거", 7);
	Card c2(3, 2, "화염임프", 2);

	Card c3(0, 0, "", 0);
	//cin >> c3;
	cout << c3 << endl;

	cout << c1 << endl;
	cout << "돌주먹오우거는 화염임프를 공격했다..!" << endl;
	cout << c1 - c2 << endl;
	//cout << Card(1, 1, "1", 1) << endl;
	//cout << c1 - c2 << endl;

	return 0;
}

