#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan,interest,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int count = 1;

	while(1){
		double total,interest_P;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << count; 
		cout << setw(13) << left << loan;
		interest_P = loan*interest/100;
		cout << setw(13) << left << interest_P;
		total = loan + interest_P;
		cout << setw(13) << left << total;
		if(total < pay){
			pay = total;
		}
		cout << setw(13) << left << pay;
		loan = total - pay;
		cout << setw(13) << left << loan;
		cout << "\n";
		count++;
		if(loan == 0){
			break;
		}	
	}

	return 0;
}