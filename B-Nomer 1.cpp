//Nama : Alif Aulia Akbar
//NIM  : 20051397003
//Kelas: 2020A - D4 Manajemen Informatika

#include <iostream>

#define MAX 10
using namespace std;

struct Stack {
	int top, data[MAX];
} Tumpukan;

void init() {
	Tumpukan.top = -1;
}

bool isEmpty() {
	return Tumpukan.top == -1;
}

bool isFull() {
	return Tumpukan.top == MAX - 1;
}

void push() {
	if (isFull()) {
		cout << "\nTumpukan penuh" << endl;
	} else {
		Tumpukan.top++;
		cout << "\nMasukkan data = ";
		cin >> Tumpukan.data[Tumpukan.top];
		cout << "Data " << Tumpukan.data[Tumpukan.top] << " masuk ke stack"
			 << endl;
	}
}

void pop() {
	if (isEmpty()) {
		cout << "\nData kosong\n" << endl;
	} else {
		cout << "\nData " << Tumpukan.data[Tumpukan.top] << " sudah terambil"
			 << endl;
		Tumpukan.top--;
	}
}

void printStack() {
	if (isEmpty()) {
		cout << "Tumpukan kosong";
	} else {
		cout << "\nTumpukan : ";
		for (int i = Tumpukan.top; i >= 0; i--)
			cout << Tumpukan.data[i] << ((i == 0) ? "" : ",");
	}
}

int main() {
	int pilihan, data;
	init();
	do {
		printStack();
		cout << "\n1. Input (Push)\n"
			 << "2. Hapus (Pop)\n"
			 << "3. Keluar\n"
			 << "Masukkan Pilihan: ";
		cin >> pilihan;
		switch (pilihan) {
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		default:
			cout << "Pilihan tidak tersedia" << endl;
			break;
		}
	} while (pilihan != 3);
}
