
///The point of this code is to decrypt a general text according to the Caesar's encription
///This encryption consists in moving each letter of the alphabet by a certain number of letters.
///In this case for simplicity I chose as number of places (key of encription) the number 1
///Any suggestion is welcome

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //here below there is the alphabet that i will use to decrypt the message (the reverse of the encrypting alphabet)
    string Ana = "98765432109><}{§°#@ ][*+_:;,.-^'?=)(/&%$£!zyxwvutsrqponmlkjihgfedcbaz";
    string cif_text;
    getline(cin, cif_text);
    string clear_text;
    //Here below i convert every char to lower so that i won't have problem during the conversion due to the case
    for (int j=0;j<cif_text.size();j++){
            char letter = cif_text.at(j);
        cif_text.at(j)= tolower(letter);

    }
    clear_text = cif_text;
    cout << cif_text << endl;
//here i check every encrypted symbol and decrypt it
    for(int i=0; i<cif_text.size(); i++){
        for (int k=0;k<Ana.size(); k++){
                int first = cif_text.at(i);
                int second = Ana.at(k);
        cout << first << "\t" << second << endl;
            if(first == second){
                clear_text.at(i) = Ana.at(k+1);
                cout << "The decripted letter is: " << clear_text.at(i) << endl;
                break;
                }
            }
        }
        //then i convert every decrypted char to lower case because that's the font usually used for the clear text
        for (int j=0;j<clear_text.size();j++){
            char letter = clear_text.at(j);
        clear_text.at(j)= tolower(letter);

        }
        cout << "The encrypted text: " << "\n" << cif_text << "\n" << "Became the clear text: " << "\n" << clear_text << endl;
        return 0;
}

///Created the 26th-27th-28th of August 2022
///By TheWinterSoldier
