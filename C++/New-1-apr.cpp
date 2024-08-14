#include<iostream>
#include<fstream>

using namespace std;

// int main() {


    ////////////// open a file ////////

    // fstream F; // F is object and fstream is default stream file

    // F.open("Aditya.cpp", ios:: out); // open is a function name 

    // if(!F) {
    //     cout << "Aditya.cpp is not exist : " ;
    // }else {
    // cout <<"Aditya.cpp File has been created : " ;
    // }

    // F.close(); //optional to close file


    // fstream File;
    // File.open("/Users/adityakhote/Desktop/port/Name of file.txt", ios::out);

    // if(!File){
    //     cout << "File dose not Exist : ";
    // }else {
    //     cout << "File has been created : " ;

    //     File << "Write message for writing in file :- " ;
    // }

    // File.close(); // Optional close



    class demo {
        char name[20];
        char address[30];


        void ip(){
            cout << "Enter Name : "<<endl;
            cin >> name;
            cout << "Enter Address : "<<endl;
            cin >> address;
        }
    };

    int main(){
        int n;
        cout << "Enter Record : "<<endl;
        cin >> n;
        demo A[n];


  return 0;
    }

  
// }




