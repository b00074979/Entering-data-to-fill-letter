#include <iostream>

using namespace std;

int main()
{
   char friend_sex = 0

    cout << "Enter the name you wish to write to:\n\n\n";
	string first_name; //declaring variable first_name as type string
	cin >> first_name; // enter first_name

	cout<< "Enter recipients friends name:";
	string friend_name;
	cin >> friend_name;

	cout << "Enter friends sex: male(m) or female(f), Please enter m for male and f for female:";
	string friend_sex;
	cin >> friend_sex;

	cout << "\nDear " << first_name <<",\n\n" ;
	cout << "\t Thank you for your letter. How are you? I am fine. I miss you. I really enjoyed your letter, Paris seems like so much fun. I can't wait to hear all   about it when you're back next week\n";
    cout << "Have you seen "<<friend_name<<" lately?\n";
    if (friend_sex = m){
        cout<< "If you see " <<friend_name<< "please ask him to call me";
    else if (friend_sex = f)
        cout<< "If you see " <<friend_name<< "please ask her to call me";
    }


    return 0;
}

