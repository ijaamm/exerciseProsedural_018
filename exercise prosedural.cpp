#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double r){
	if (r >= 70){
		return "lulus";
	}
	else {
		return "gagal";
	}
}

string status2(double r, double n) {
	if (r >= 70 && n >= 80) {
		return "lulus";
	}
	else {
		return "gagal";
	}
}

string status3(double r, double n){
	if (r >= 70 || n >= 80) {
		return "lulus";
	}
	else {
		return "gagal";
	}
}

int main() {
	float asroni, lia, joko;
	int pilihan;

	cout << "=========================";
	cout << "\n========M E N U=========";
	cout << "\n========================";

	cout << "\n1 asroni" << endl;
	cout << "2 lia" << endl;
	cout << "3 joko" << endl;
	cout << "4 exit" << endl;

	cout << "masukan pilihan" << endl;
	cout << "\npilihan (1/2/3/4) : ";
	cin >> pilihan;
}
	
int main(){
		double nilmath, nilbin;

    cout << "Masukan Nilai Matematika : ";
    cin >> nilmath;
    cout << "Masukan Nilai B.indonesia : ";
    cin >> nilbin;

    cout << "Nilai Rerata : " << rerata(nilmath, nilbin);
    cout << "\nStatus Kelulusanya :" << status(rerata(nilmath, nilbin));
    cout << "\nStatus Kelulusanya :" << status2(rerata(nilmath, nilbin), nilmath);
    cout << "\nStatus Kelulusanya :" << status3(rerata(nilmath, nilbin), nilmath);
	}
