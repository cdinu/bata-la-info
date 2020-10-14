#include <iostream>

using namespace std;

// repetăm 
//    calculatorul alege întâmplător opțiunea sa "R", "P", "S"
//     citim câte o opțiune R - piatră, P - hârtie, S - foarfece, X - ieșire
//    ne plângem dacă opțiunea nu este R/P/S/X
//    altfel arătăm cine a câștigat (ai câștigat, ai pierdut)
//    facem și un scor ()
// atât timp cât opțiunea nu este X

string NtoRPS(int n) {
	if (n == 0) return "Piatră";
	if (n == 1) return "Hârtie";
	return "Foarfece";
}
string whoWon(int r) {
	if (r == 0) return "Sunteți Egali";
	if (r == 1) return "Ai câștigat";
	return "Ai pierdut";
}

int main() {
	// computer choice 
	// R = 0, P = 1, S = 2
	// R < P < S < R
	int computer_choice;
	int user_choice;
	int result; // -1 daca pierdem, 0 dacă egal, 1 daca am câștigat

	unsigned int computer_score = 0;
	unsigned int user_score= 0;


	char choice; // alegere
	do {
		computer_choice = rand() % 3;

		cout << endl << endl;
		cout << "Scor: " << user_score << " : " << computer_score << endl;
		cout << "Alege (R - piatră, P - hârtie, S - foarfece, X - ieșire): ";
		cin >> choice;

		if (
			choice != 'R' && choice != 'r' &&
			choice != 'P' && choice != 'p' &&
			choice != 'S' && choice != 's' &&
			choice != 'X' && choice != 'x'
		) {
			cout << "Opțiunea " << choice << " nu e validă. Alege R/P/S/X." << endl;	
			continue; // se întarce la linia cu "do"	
		}
		
		result = 0;
		if(choice == 'R' || choice == 'r') {
			user_choice = 0;
			if (computer_choice == 0) {
				result = 0;
			} else if (computer_choice == 1) {
				result = -1;
			} else {
				result = 1;
			}
		}
		if(choice == 'P' || choice == 'p') {
			user_choice = 1;
			if (computer_choice == 0) {
				result = 1;
			} else if (computer_choice == 1) {
				result = 0;
			} else {
				result = -1;
			}
		}
		if(choice == 'S' || choice == 's') {
			user_choice = 2;
			if (computer_choice == 0) {
				result = -1;
			} else if (computer_choice == 1) {
				result = 1;
			} else {
				result = 0;
			}
		}

		if (result == -1) {
			computer_score++;
		}
		if (result == 1) {
			user_score++;
		}

		cout << 
			"Tu: " << NtoRPS(user_choice) <<
			", computer: " << NtoRPS(computer_choice) << 
			". " << whoWon(result) <<endl;

	} while (choice != 'x' && choice != 'X');

	return 0;
}
