#include<iostream>
using namespace std;

class Myclass {
public:
	void Update();
	void a();
	void b();
	void c();
	
	static void(Myclass::*table[])();
private:

	int index = 0;
};
void Myclass::a() {
	cout << "“G‚ÌÚ‹ßI" << endl;
}
void Myclass::b() {
	cout << "“G‚ÌUŒ‚I" << endl;
}
void Myclass::c() {
	cout << "“G‚ÌŒã‘ÞI" << endl;
}
void Myclass::Update() {
	(this->*table[index])();
	int num;
	puts("ŽŸ‚ÌUŒ‚‚Ö");
	scanf_s("%d", &num);

	if (num == 0) {
		index++;
		if (index > 2)
			index = 0;
	}
}
void(Myclass::* Myclass::table[])() = {
	&Myclass::a,
	&Myclass::b,
	&Myclass::c,
};
int main() {
	Myclass my;
	while (1) {
		my.Update();
		return 0;
	}
}