#include <iostream>
#include <vector>

using namespace std;
int main() {
	int N,X,H,data_param;
	int data;
	vector<int>winningkupon;
	vector<int>mydata;
	cout << "Undian Berhadia GemasTIK XIV (2021).\n";
	cout << "nilai kupon Pak Gema :";cin >> X;
	cout << "\n ========= \n";
	cout << "masukan jumlah peserta undian : ";cin >> H;
	cout << "Peserta kupon." << endl;
	for (int i = 0;i < H;i++) {
		cout << "No." << i + 1 << " ";cin >> N;
		mydata.push_back(N);
	}
	data = mydata[0];
	for (int i = 0;i < mydata.size();i++) {
		data_param = abs(mydata[i] - X);
		if (data_param < data) {
			data = data_param;
		}
	}
	for (int i = 0;i < mydata.size();i++) {
		data_param = abs(mydata[i] - X);
		if (data_param == data) {
			winningkupon.push_back(mydata[i]);
		}
	}
	cout << "\nPemenang diambil dari kupon yang mendekati nilai dari kupon \nPak Gema(" << X << ").\n atau\n";
	cout << "Pemenang yang no kuponnya sama dengan no kupon Pak Gema \nurutan pemenang Undian :";
	for (int i = 0;i < winningkupon.size();i++) {
		cout <<"No."<<i+1<<" " << winningkupon[i] << " , ";
	}
	cout << "\n\n";
	return 0;
}