#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//�Ͻ����� ī��Ŭ����
class Card
{
private:
	int mHealth;
	int mAttack;
	int mAfter;
	string mName;
public:
	Card(const int& atk, const int& health, const string& name, const int after)//������
		:mAttack(atk), mHealth(health), mName(name), mAfter(after)
	{
	}

	int getHealth() const { return mHealth; }
	int& getHealth() { return mHealth; }
	int getAttack() const { return mAttack; }
	int& getAttack() { return mAttack; }


	//friend Card operator - (const Card &c1, Card& c2) // C1������  C2���ݴ��
	//{
	//	return Card(c2.getHealth() - c1.getAttack());
	//}

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

//Card operator - (const Card &c1, Card& c2) // C1������  C2���ݴ��
//{
//	return Card(c2.getHealth() - c1.getAttack());
//}

int main()
{

	Card c1(6, 7, "���ָԿ����", 7);
	Card c2(3, 2, "ȭ������", 2);

	Card c3(0, 0, "", 0);
	//cin >> c3;
	cout << c3 << endl;

	cout << c1 << endl;
	cout << "���ָԿ���Ŵ� ȭ�������� �����ߴ�..!" << endl;
	cout << c1 - c2 << endl;
	//cout << Card(1, 1, "1", 1) << endl;
	//cout << c1 - c2 << endl;

	return 0;
}

