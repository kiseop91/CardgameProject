//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//나만의 클래스 Card를 만들었다 Card는 이름과, 공격력, 수비력을 멤버변수로 갖는다.
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
//   {}   //초기화 부분..
//   Card(const  int& atk, const int& df, const  string& name)
//   {
//	   mAttack = atk;
//	   mName = name;
//	   mDefence = df;
//
//   }
//   산술연산자 오버로딩.. (강의에서 배운것 그대로 구현했습니다.)
//    Card operator + (Card& card2) 
//    {
//	    int a = mAttack + card2.mAttack;
//	    int d = mDefence + card2.mDefence;
//	    string s = mName + card2.mName;
//		Card c(a,d,s);
//		return c;
//    }
//
//   출력연산자
//	friend ostream& operator << (ostream &out, const Card& card1)
//	{
//		out << "( " << card1.mAttack << ", " << card1.mDefence << ", " << card1.mName << " )";
//		return out;
//	}
//
//   입력 연산자
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
//	cout << c1 + c2 << endl;      // 안됨 ㅜㅜ
//	
//
//
//	return 0;
//}