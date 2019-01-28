#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {

	string Tweets;
	ifstream inFile;
	inFile.open("sampleTweets.csv");
	vector<string> options = { "1. Total Number of Tweets", "2. Number of Tweets that mention money", "3. Number of Tweets that mention politics", "4. Show Tweets containing the word 'Paris'", "5. Show Tweets containing the word 'DreamWorks'", "6. Show Tweets containing the word 'Uber'", "7. Show Tweets Containing the word 'Dog'", "8. Show Tweets that contain '@katyperry'", "9. Count Tweets that contain '@kendalljenner'",  "10. Count Tweets Containing the word 'Music'" };

	if (inFile.good()) {
		cout << "Welcome to SwiftSift!" << endl;
		cout << "Please enter the number of a Search option from 1 - 10" << endl;
		
		for (int i = 0; i < options.size(); i++) {
			cout << options[i] << endl;
		}

		/*while(!inFile.eof()) {

			getline(inFile, Tweets);
			cout << Tweets << endl;

		}*/
		inFile.close();
	}
	else {
		cout << "Error with file" << endl;
	}
	system("pause");
	return 0;
}