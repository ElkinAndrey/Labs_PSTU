#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	float af = 100.0, bf = 0.001;
	float answerf1 = (af - bf) * (af - bf) * (af - bf) * (af - bf);
	float answerf2 = af * af * af * af - 4 * af * af * af * bf;
	float answerf3 = answerf1 - answerf2;
	float answerf4 = 6 * af * af * bf * bf - 4 * af * bf * bf * bf + bf * bf * bf * bf;
	float answerf = answerf3 / answerf4;

	cout << answerf1 << endl << answerf2 << endl << answerf3 << endl << answerf4 << endl << answerf << endl << endl;

	double ad = 100.0, bd = 0.001;
	double answerd1 = (ad - bd) * (ad - bd) * (ad - bd) * (ad - bd);
	double answerd2 = ad * ad * ad * ad - 4 * ad * ad * ad * bd;
	double answerd3 = answerd1 - answerd2;
	double answerd4 = 6 * ad * ad * bd * bd - 4 * ad * bd * bd * bd + bd * bd * bd * bd;
	double answerd = answerd3 / answerd4;

	cout << answerd1 << endl << answerd2 << endl << answerd3 << endl << answerd4 << endl << answerd << endl << endl;;

	system("Pause");

	return 0;
}