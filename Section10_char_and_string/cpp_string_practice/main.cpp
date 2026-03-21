
#include <iostream>
#include <iomanip>
#include <string> // important

using namespace std;

int main() {
    
    string s0;                      // 여기서 string은 클래스이므로 하나의 객체임
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};                // Apple
    string s6 {s1, 0, 3};           // App 
    string s7 (10, 'X');            // XXXXXXXXXX


//    cout << s0;
//    cout << s0.length() << endl;
    

    
//    cout << "\nCheckout!\n";
//    cout << "s1 is initialized : " << s1 << "\n";
//    cout << "s2 is initialized : " << s2 << "\n";
//    cout << "s3 is initialized : " << s3 << "\n";
//    cout << "s4 is initialized : " << s4 << "\n";
//    cout << "s5 is initialized : " << s5 << "\n";
//    cout << "s6 is initialized : " << s6 << "\n";
//    cout << "s7 is initialized : " << s7 << "\n";



//    cout << "\nComparison!\n";
//    cout << boolalpha  ;         // cout true, false
//    cout << s1 << " == " << s5 << " : " << (s1 == s5) << "\n";
//    cout << s1 << " == " << s2 << " : " << (s1 == s2) << "\n";
//    cout << s1 << " != " << s2 << " : " << (s1 != s5) << "\n";
//    cout << s1 << " < " << s2 << " : " << (s1 < s5) << "\n";
//    cout << s4 << " < " << s5 << " : " << (s4 < s5) << "\n";
//    cout << s1 << " == " << "Apple" << " : " << (s1 == "Apple") << "\n";



//    cout << "\nAssignment!\n";
//    
//    s1 = "Cherrytomato";
//    cout << "s1 is now " << s1 << "\n";
//    s2 = s1;
//    cout << "s2 is now " << s2 << "\n";
//    
//    s3 = "Tyrion";
//    cout << "s3 is now " << s3 << "\n";
//
//    s3[0] = 'P';     // like array, easy but dangerous
//    cout << "s3 is changed as " << s3 << "\n";
//    
//    s3.at(0) = 'K';     // vector, slow but safe
//    cout << "s3 is changed as " << s3 << "\n";


//
//    cout << "\nConcaternation\n";
//    
//    s3 = s5 + " and " + s2 + " juice";
//    cout << "s3 is now " << s3 << "\n";
//
//    s3 = "not " + "understand" + s2 + " juice"


//
//    cout << "\nLooping\n";
//    s1 = "Apple";
//    for (size_t i {0}; i<s1.length(); i++) 
//        cout << s1.at(i);
//    cout << "\n";
//    
//    for (char c: s1)
//        cout << c;      
//    cout << "\n";



//    cout << "\nSubstring" << "---------------------\n";
//    s1 = "This is a test";
//    
//    cout << s1.substr(0, 4) << "\n";
//    cout << s1.substr(5, 2) << "\n";
//    cout << s1.substr(10, 4) << "\n";
//
//    cout << "\nSubstring" << "---------------------\n";
//    s1 = "This is a test";
//    s1.erase(0, 5);
//    cout << "s1 is now " << s1 << "\n";



//    cout << "\nGetline\n";
//    
//    string full_name {};
//    cout << "Enter your full name: ";
//    getline(cin, full_name);
//    
//    cout << "Your full name is " << full_name <<endl;



    cout << "\nfind\n";
    
    s1 = "The secret word is Boo";
    string word {};
    cout << "Enter the word to find: ";
    cin >> word;
    
    size_t position = s1.find(word);
    if(position != string::npos)
        cout << "Found" << word << "at position " << position << "\n";
    else
        cout << "Sorry" << word << "not Found\n"; 






    
    return 0;
}