//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//������ Ŭ���� Card�� ������� Card�� �̸���, ���ݷ�, ������� ��������� ���´�.
//class Card
//{
//public:
//   string mName;
//   int mAttack;
//   int mDefence;
//
//public:
//   Card( const string& name_in, const  int& attack_in, const int& defence_in)
//      : mName(name_in)
//      , mAttack(attack_in)
//      , mDefence(defence_in)
//   {}   //�ʱ�ȭ �κ�..
//   Card(const  int& atk, const int& df, const  string& name)
//   {
//	   mAttack = atk;
//	   mName = name;
//	   mDefence = df;
//
//   }
//   ��������� �����ε�.. (���ǿ��� ���� �״�� �����߽��ϴ�.)
//    Card operator + (Card& card2) 
//    {
//	    int a = mAttack + card2.mAttack;
//	    int d = mDefence + card2.mDefence;
//	    string s = mName + card2.mName;
//		Card c(a,d,s);
//		return c;
//    }
//
//   ��¿�����
//	friend ostream& operator << (ostream &out, const Card& card1)
//	{
//		out << "( " << card1.mAttack << ", " << card1.mDefence << ", " << card1.mName << " )";
//		return out;
//	}
//
//   �Է� ������
//   friend istream& operator >> (istream &in, Card &card1)
//   {
//      in >> card1.mName >> card1.mAttack >> card1.mDefence;
//      return in;
//   }      
//};
//
//int add(int &a, int &b)
//{
//	return a + b;
//}
//  ostream& operator << (ostream &out, Card card1)
//   
//int main()
//{
//	int a = 1, b = 2;
//	add(a, b);
//
//	
//	Card c1(1,1,"aaa"), c2(1,1,"bbb");
//	cout << c1 << endl;
//
//
//	cout << c1 + c2 << endl;      // �ȵ� �̤�
//	
//
//
//	return 0;
//}