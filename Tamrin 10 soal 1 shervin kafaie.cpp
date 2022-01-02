#include<iostream>
#include <string>

using namespace std;

class Kasr
{
public:
	int surat, makhraj;

	Kasr(int s, int m)
	{
		cout << "\nEnter surat:";
		cin >> s;
		surat = s;
		cout << "Enter makhraj:";
		cin >> m;
		makhraj = m;
	}
	void show(string jafar)
	{
		cout << jafar << "= " << this->surat << "/" << this->makhraj << endl;
	}
	void sum(Kasr kasr_digar);
	void zarb(Kasr kasr_digar);
	void tafrigh(Kasr kasr_digar);
	void taghsim(Kasr kasr_digar);
};

void Kasr::sum(Kasr kasr_digar)
{
	int s = surat * kasr_digar.makhraj + kasr_digar.surat * makhraj;
	int m = makhraj * kasr_digar.makhraj;
	cout << "\n Sum: " << s << "/" << m << endl;

};


void Kasr::zarb(Kasr kasr_digar)
{
	int s = surat * kasr_digar.surat;
	int m = makhraj * kasr_digar.makhraj;
	cout << "\n zarb: " << s << "/" << m << endl;
};

void Kasr::tafrigh(Kasr kasr_digar)
{
	int s = surat * kasr_digar.makhraj - kasr_digar.surat * makhraj;
	int m = makhraj * kasr_digar.makhraj;
	cout << "\n tafrigh: " << s << "/" << m << endl;
};

void Kasr::taghsim(Kasr kasr_digar)
{
	int s = surat * kasr_digar.makhraj;
	int m = makhraj * kasr_digar.surat;
	cout << "\n taghsim: " << s << "/" << m << endl;

};

int main()
{
	string name;
	name = "kasr1";
	cout << "kasr1: ";
	Kasr kasr1(0, 1);
	kasr1.show(name);

	name = "kasr2";
	cout << "kasr2: ";
	Kasr kasr2(0, 1);
	kasr2.show(name);

	kasr1.sum(kasr2);
	kasr1.tafrigh(kasr2);
	kasr1.zarb(kasr2);
	kasr1.taghsim(kasr2);
	return 0;
}