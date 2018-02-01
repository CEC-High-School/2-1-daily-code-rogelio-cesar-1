#include <iostream>

#include <Windows.h>
using namespace std;

int main() {

	int input;

	cout << " Pick a sound" << endl; 
	cin >> input;

	if (input == 1)
		PlaySound(TEXT("cats.wav"), NULL, SND_FILENAME);



	else if (input == 2) {
		//PlaySound(TEXT("recycle.wav"), NULL, SND_FILENAME);
		PlaySound(TEXT ("soundone.wav"), NULL, SND_FILENAME);

		
	}
	else if (input == 3) {


		cout << "You are sound 3!" << endl;
		PlaySound(TEXT("sound2.wav"), NULL, SND_FILENAME);
	}


	else if (input == 4) {
		cout << " You are sound 4!" << endl;
		PlaySound(TEXT("sound3.wav"), NULL, SND_FILENAME);
	}
}