#include<iostream>
#include <string>

using namespace std;


struct time
{
public:
	int h, m, s;
	time(int h1, int m1, int s1) {
		if ((h1 >= 24) || (h1 < 0)) {
			h = 0;
		}
		else {
			h = h1;
		}
		if ((m1 >= 60) || (m1 < 0)) {
			m = 0;
		}
		else {
			m = m1;
		}
		if ((s1 >= 60) || (s1 < 0)) {
			s = 0;
		}
		else {
			s = s1;
		}
	}
	time() {

	}
	void print() {
		if (h < 10) {
			cout << "0" << h << " : ";
		}
		else {
			cout << h << " : ";
		}
		if (m < 10) {
			cout << "0" << m << " : ";
		}
		else {
			cout << m << " : ";
		}
		if (s < 10) {
			cout << "0" << s << " : ";
		}
		else {
			cout << s << " : ";
		}
		cout << endl;
	}
	void jame(time t);
	void tafrigh(time t);
	void tabdilst(int k);
	void tabdilts();
};

void time::jame(time t) {
	int hh, mm, ss;
	hh = mm = ss = 0;
	mm += t.m + m;
	if (mm > 59) {
		mm -= 60;
		hh++;
	}
	ss += t.s + s;
	if (ss > 59) {
		ss -= 60;
		mm++;
	}
	hh += t.h + h;
	if (hh > 23) {
		hh -= 24;
	}
	time r(hh, mm, ss);
	r.print();
};

void time::tafrigh(time t) {
	int hh, mm, ss;
	hh = mm = ss = 0;
	ss += s - t.s;
	if (ss < 0) {
		ss += 60;
		mm--;
	}
	mm += m - t.m;
	if (mm < 0) {
		mm += 60;
		hh--;
	}
	hh += h - t.h;
	if (hh < 0) {
		hh += 24;
	}
	time r(hh, mm, ss);
	r.print();
};

void time::tabdilst(int k) {
	int hh, mm, ss;
	ss = k % 60;
	mm = k / 60;
	if (mm > 59) {
		hh = mm / 60;
		mm = mm % 60;
	}
	else {
		hh = 0;
	}
	if (hh > 23) {
		int d = hh / 24;
		hh = hh % 24;
		cout << d << " days and  ";
	}
	time r(hh, mm, ss);
	r.print();
};

void time::tabdilts() {
	int k;
	k = h * 60 * 60 + m * 60 + s;
	cout << k << endl;
}

int main()
{
	int h1, h2, m1, m2, s1, s2, k;
	cout << "please enter the time1: h:  m:  s:\n";
	cin >> h1 >> m1 >> s1;
	cout << "please enter the time2: h:  m:  s:\n";
	cin >> h2 >> m2 >> s2;
	time t1(h1, m1, s1);
	time t2(h2, m2, s2);
	cout << "sum:   ";
	t1.jame(t2);
	cout << "tafrigh:   ";
	t1.tafrigh(t2);
	cout << "please enter a sanie:\n";
	cin >> k;
	cout << "tabdil s->t:   ";
	t1.tabdilst(k);
	cout << "tabdil t->s:   ";
	t1.tabdilts();
	return 0;
}