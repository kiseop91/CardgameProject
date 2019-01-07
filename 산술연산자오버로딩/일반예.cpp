//#include <iostream>
//using namespace std;
//class morgiana {
//
//public:
//	int x, y, z;
//	friend ostream&operator<<(ostream&stream, morgiana obj);
//	morgiana(const int a, const int b, const int c) { x = a; y = b; z = c; }
//
//
//};
//
//ostream&operator<<(ostream&stream, morgiana obj)
//{
//	stream << obj.x << " ";
//	stream << obj.y << " ";
//	stream << obj.z << endl;
//	return stream;
//}
//morgiana operator - (morgiana &c1, morgiana& c2)
//{
//	return morgiana(c1.x - c2.x, c1.y - c2.y, c1.z - c2.z);
//}
//
//int main()
//{
//	morgiana a(1, 2, 3), b(4, 5, 6), c(7, 8, 9);
//	cout << a << b << c;
//
//	cout << a - b << endl;
//
//	return 0;
//}