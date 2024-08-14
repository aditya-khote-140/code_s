// // #include<iostream>
// // using namespace std;

// // class defaultConstucter{
// //     public:
// //     // int a=10;
// //     defaultConstucter(){
// //         cout<<"hello"<<endl;
// //     }
// // };

// // int main(){
    

// //     // cout<<"Default "<< od.a<<endl;
// //     defaultConstucter ob;
// //     return 0;
// // }



// #include<iostream>
// using namespace std;

// // class conscube{
// //     public :
// //     int num; //Instanse of variable :
// //     conscube(){
// //         cout <<"Enter the number"<<endl;
// //         cin >>num;
// //         cout <<"Result is : "<<num*num*num<<endl;
// //     }



// // };


// // class copyConst{
// //     public:
// //     copyConst(copyConst& temp){
// //         cout << "Constructor called" << endl;
// //     }
// // };


// // int main (){
// //     copyConst ob(10);
// //     copyConst ob2 = ob;
// //     return 0;
// // }







// class copyConst{
//     public:
//     int w,h;
//     copyConst(int width,int height){
//         w=width;
//         h=height;
//     }

//     copyConst(copyConst& ob){
//         w=ob.w;
//         h=ob.h;
//     }

//     void printarea(){
//         cout <<"Area = "<<2*w*h;
//     }
// };

// int main (){
//     copyConst obj1(5,4);
//     copyConst obj2(obj1);   // calling the copyConst constructor of class copyConst to create object.
//     obj1.printarea();
//     obj2.printarea();
    
//     return 0;
// }

