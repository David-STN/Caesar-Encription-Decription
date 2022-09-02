///The point of this code is to encrypt a general text according to the Caesar's encryption
///This encryption consists in moving each letter of the alphabet by a certain number of letters.
///In this case for simplicity I chose as number of places (key of encryption) the number 1
///Any suggestion is welcome


#include <iostream>
#include <string>

using namespace std;


int encryption(string alphabet,string clear_text, string cif_text){

    //Here below i convert every char to lower so that i won't have problem during the conversion due to the case
    for (int j=0;j<clear_text.size();j++){
            char letter = clear_text.at(j);
        clear_text.at(j)= tolower(letter);
    }
    cif_text = clear_text; //so that the second string will have the same size

    for(int i=0; i<clear_text.size(); i++){
        for (int k=0;k<alphabet.size(); k++){
                //here i check every letter and convert it to the encrypted symbol
                int first = clear_text.at(i);
                int second = alphabet.at(k);

            if(first == second){
                cif_text.at(i) = alphabet.at(k+1);
                cout << "The encrypted letter is: " << cif_text.at(i) << endl;
                break;
                }
            }
        }
        //then i convert every encrypted char to upper case because that's the font usually used to encrypted texts
        for (int j=0;j<cif_text.size();j++){
            char letter = cif_text.at(j);
        cif_text.at(j)= toupper(letter);

        }
        cout << "The clear text: " << "\n" << clear_text << "\n" << "Became the encripted text: " << "\n" << cif_text << endl;

}
int main()
{
    //here below there is the alphabet that i will use to encrypt the message
    string Ana = "abcdefghijklmnopqrstuvwxyz!£$%&/()=?'^-.,;:_+*[] @#°§{}<>12345678901";
    string clear_text;
    string cif_text;
    cout << "Enter the text that needs to be encrypted: " << endl;
    getline(cin, clear_text);
    encryption(Ana,clear_text,cif_text);

    return 0;
}

///Created the 26th-27th-28th of August 2022
///By TheWinterSoldier
