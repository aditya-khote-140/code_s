// Write a program to implement the concept of class and object.

// #include <iostream>
//     using namespace std;
// class demo
// {
// public:
//     int x, y;
// };
// int main()
// {
//     demo ob;
//     cout << "Enter first number:";
//     cin >> ob.x;
//     cout << "Enter second number:";
//     cin >> ob.y;
//     cout << "Product=" << ob.x * ob.y;
//     return 0;
// }


// Write a program to swap two numbers using two variables.

// #include <iostream>
//     using namespace std;
// class demo
// {
// public:
//     int x, y;
// };
// int main()
// {
//     demo ob;
//     cout << "Enter first number:";
//     cin >> ob.x;
//     cout << "Enter second number:";
//     cin >> ob.y;
//     cout << "Before swapping x=" << ob.x << " and y=" << ob.y << endl;
//     ob.x = ob.x + ob.y;
//     ob.y = ob.x - ob.y;
//     ob.x = ob.x - ob.y;
//     cout << "After swapping x=" << ob.x << " and y=" << ob.y;
//     return 0;
// }

// Write a program to implement member functions inside a class.

// #include <iostream>
//     using namespace std;
// class demos
// {
// public:
//     char name[20];
//     char address[20];
//     void takeinput()
//     {
//         cout << "Enter name:";
//         cin >> name;
//         cout << "Enter address:";
//         cin >> address;
//     }
//     void print()
//     {
//         cout << "Your information....." << endl;
//         cout << "Name:" << name << endl
//              << "Address:" << address;
//     }
// };
// int main()
// {
//     demos ob;
//     ob.takeinput();
//     ob.print();
//     return 0;
// }

// Write a program to implement member functions outside a class.

// #include <iostream>
// using namespace std;
// class outside
// {
// public:
//     char *message();
// };
// char *outside::message()
// {
//     return "C++ is an object oriented as well as procedural oriented programming language. C++ is developed by Bjarne Stroustrup in 1979 at AT and T's Bell Laboratory.";
// }
// int main()
// {
//     outside ob;
//     cout << "Your message is:" << endl
//          << ob.message();
//     return 0;
// }


// Create a C++ class for student having following members. 
// Rollno - Name - Number of subjects - Marks of each subject (Number of subjects varies for each student). 
// Write a parameterized constructor which initializes rollno, name & Number of subjects and creates the array of marks
// dynamically. 
// Display the details of all students with percentage and class obtained.



// #include <iostream>
// // #include <conio.h>
// #include <string.h>
// using namespace std;
// class student
// {
//     int rno, ns, s;
//     float per;
//     char name[20];
//     int *m;

// public:
//     student(int no, char *nm, int nos)
//     {
//         rno = no;
//         strcpy(name, nm);
//         ns = nos;
//         m = new int[ns];
//     }
//     void get();
//     void cal();
//     void disp();
// };
// void student::get()
// {
//     for (int i = 0; i < ns; i++)
//     {
//         cout << "\n\nEnter the subject " << i + 1 << " Marks :- ";
//         cin >> m[i];
//     }
// }
// void student::cal()
// {
//     s = 0;
//     for (int i = 0; i < ns; i++)
//     {
//         s = s + m[i];
//     }
//     per = s / ns;
// }
// void student::disp()
// {
//     cal();
//     cout << "\n\nRoll no: " << rno;
//     cout << "\n\nName: " << name;
//     for (int i = 0; i < ns; i++)
//     {
//         cout << "\n\nMarks of " << i + 1 << " Subject: " << m[i];
//     }
//     cout << "\n\nTotal Marks:" << s << "\n\npercentage: " << per << "%";
// }
// int main()
// {
//     int no, nos;
//     char nm[20];
//     cout << "\nEnter roll no :- "<<endl; 
//     cin >> no;
//     cout <<"Enter Name :- "<<endl; 
//     cin >> nm; 
//     cout <<"No of subject:\n"<<endl;
//     cin >> nos;
   
   
    
//     student st(no, nm, nos);
//     st.get();
//     st.disp();
//     // getch();
//     return 0;
// }


// Write a program to perform arithmetic operations using inline function.

// #include <iostream>
// #include <conio.h>
//     using namespace std;
// inline void add(float a, float b)
// {
//     float c = a + b;
//     cout << a << " + " << b << " = " << c << endl;
// }
// inline void subtract(float a, float b)
// {
//     float c = a - b;
//     cout << a << " - " << b << " = " << c << endl;
// }
// inline void multi(float a, float b)
// {
//     float c = a * b;
//     cout << a << " * " << b << " = " << c << endl;
// }
// inline void divide(float a, float b)
// {
//     float c = a / b;
//     cout << a << " / " << b << " = " << c << endl;
// }
// int main()
// {
//     float n1, n2;
//     cout << "Enter two values to perform arithmetic operations : ";
//     cin >> n1 >> n2;
//     cout << endl;
//     add(n1, n2);
//     subtract(n1, n2);
//     multi(n1, n2);
//     divide(n1, n2);
//     getch();
//     return 0;
// }



// Write a C++ program for the banking management system using class and object having basic operations like:
// 1. OpenAccount () – It will take input account number, name and opening balance.
// 2. ShowAccount () – It will display the account details such as account number, name and balance.
// 3. Deposit () – It will ask for the amount to be added in available balance, and deposit the amount.
// 4. Withdrawal () – It will ask for the amount to be withdrawn from the available, will also check the
// available balance, if balance is available, it will deduct the amount from the available balance.
// 5. Search () – It will search for the record and display the account info.

// #include <iostream>
// using namespace std;
// class Bank
// {
// private:
//     int acno;
//     char name[30];
//     long balance;

// public:
//     void OpenAccount()
//     {
//         cout << "Enter Account Number: ";
//         cin >> acno;
//         cout << "Enter Name: ";
//         cin >> name;
//         cout << "Enter Balance: ";
//         cin >> balance;
//     }
//     void ShowAccount()
//     {
//         cout << "Account Number: " << acno << endl;
//         cout << "Name: " << name << endl;
//         cout << "Balance: " << balance << endl;
//     }
//     void Deposit()
//     {
//         long amt;
//         cout << "Enter Amount U want to deposit? ";
//         cin >> amt;
//         balance = balance + amt;
//     }
//     void Withdrawal()
//     {
//         long amt;
//         cout << "Enter Amount U want to withdraw? ";
//         cin >> amt;
//         if (amt <= balance)
//             balance = balance - amt;
//         else
//             cout << "Less Balance..." << endl;
//     }
//     int Search(int);
// };
// int Bank::Search(int a)
// {
//     if (acno == a)
//     {
//         ShowAccount();
//         return (1);
//     }
//     return (0);
// }
// int main()
// {
//     int n;
//     cout << "Enter no of records:";
//     cin >> n;
//     Bank C[n];
//     int found = 0, a, ch, i;
//     for (i = 0; i < n; i++)
//     {
//         C[i].OpenAccount();
//     }
//     do
//     {
//         cout << "\n\n1:Display All\n2:By Account No\n3:Deposit\n4:Withdraw\n5:Exit" << endl;
//         cout << "Please input your choice: ";
//         cin >> ch;
//         switch (ch)
//         {
//         case 1: // displaying account info
//             for (i = 0; i < n; i++)
//             {
//                 C[i].ShowAccount();
//             }
//             break;
//         case 2: // searching the record
//             cout << "Account Number? ";
//             cin >> a;
//             for (i = 0; i < n; i++)
//             {
//                 found = C[i].Search(a);
//                 if (found)
//                     break;
//             }
//             if (!found)
//                 cout << "Record Not Found" << endl;
//             break;
//         case 3: // deposit operation
//             cout << "Account Number To Deposit Amount? ";
//             cin >> a;
//             for (i = 0; i < n; i++)
//             {
//                 found = C[i].Search(a);
//                 if (found)
//                 {
//                     C[i].Deposit();
//                     break;
//                 }
//             }
//             if (!found)
//                 cout << "Record Not Found" << endl;
//             break;
//         case 4: // withdraw operation
//             cout << "Account Number To Withdraw Amount? ";
//             cin >> a;
//             for (i = 0; i < n; i++)
//             {
//                 found = C[i].Search(a);
//                 if (found)
//                 {
//                     C[i].Withdrawal();
//                     break;
//                 }
//             }
//             if (!found)
//                 cout << "Record Not Found" << endl;
//             break;
//         case 5: // exit
//             cout << "Have a nice day" << endl;
//             break;
//         default:
//             cout << "Wrong Option" << endl;
//         }
//     } while (ch != n);
  
//     return 0;
// }


// Write a program to calculate simple interest and compound interest using default argument.

// #include <iostream>
// #include <conio.h>
// using namespace std;
// float simple_interest(float, float, float);
// void compound_interest(float, float);
// float simple_interest(float p, float t, float r = 3)
// {
//     float Si = (p * t * r) / 100;
//     cout << "Simple Interest of principle amount (" << p << "), time (" << t << ") and rate(" << r << ") is : "<<Si<<endl<<endl;
//         return Si;
// }
// void compound_interest(float p, float si)
// {
//     float ci = p + si;
//     cout << "Compound Interest is : " << ci << endl;
// }
// int main()
// {
//     float princ, time, rate;
//     cout << "Enter principle amount : ";
//     cin >> princ;
//     cout << "Enter Time (in months) : ";
//     cin >> time;
//     cout << "Enter Rate (im %) : ";
//     cin >> rate;
//     float simp_int = simple_interest(princ, time, rate);
//     compound_interest(princ, simp_int);
//     cout << endl
//          << endl;
//     cout << "With default rate ..." << endl;
//     cout << "Enter principle amount : ";
//     cin >> princ;
//     cout << "Enter Time (in months) : ";
//     cin >> time;
//     simp_int = simple_interest(princ, time);
//     compound_interest(princ, simp_int);
//     getch();
//     return 0;
// }


// Write a program to calculate area of circle, square, rectangle and tringle using function overloading.

// #include <iostream>
// #include <conio.h>
// using namespace std;
// class calculate
// {
//     float area;

// public:
//     void calculate_area(float);
//     void calculate_area(float, float);
//     void calculate_area(float, float, float);
// };
// void calculate ::calculate_area(float radius)
// {
//     area = 22 / 7.0 * radius * radius;
//     cout << "Area Of Circle with radius " << radius << " is : " << area << endl;
// }
// void calculate ::calculate_area(float length, float width)
// {
//     area = length * width;
//     if (length == width)
//         cout << "Area Of Square with side " << length << " is : " << area << endl;
//     else
//         cout << "Area Of Rectangle with sides " << length << " and " << width << " is : " << area << endl;
// }
// void calculate ::calculate_area(float half, float height, float length)
// {
//     area = half * height * length;
//     cout << "Area Of Tringle with height " << height << " and length " << length << " is : " << area << endl;
// }
// int main()
// {
//     calculate obj;
//     cout << endl;
//     obj.calculate_area(2);
//     cout << endl;
//     obj.calculate_area(4, 6);
//     cout << endl;
//     obj.calculate_area(5, 5);
//     cout << endl;
//     obj.calculate_area(0.5, 4, 6);
//     getch();
//     return 0;
// }


// Write a program to find factorial and check prime number with static member function.


// #include <iostream>
// #include <conio.h>
//     using namespace std;
// class Static_demo
// {
// public:
//     static double find_facto(double);
//     static void check_prime(int);
// };
// double Static_demo::find_facto(double n)
// {
//     if (n < 1)
//         return 1;
//     else
//         return n * find_facto(n - 1);
// }
// void Static_demo::check_prime(int a)
// {
//     int i, j;
//     int c = 0;
//     for (i = 1; i <= a; i++)
//     {
//         if (a % i == 0)
//             c++;
//     }
//     if (c <= 2)
//         cout << a << " is a prime number" << endl;
//     else
//         cout << a << " is not a prime number" << endl;
// }
// int main()
// {
//     double num;
//     cout << "Enter a number which factorial you want : ";
//     cin >> num;
//     double fact = Static_demo::find_facto(num);
//     cout << "Factorial is : " << fact << endl;
//     int n;
//     cout << "Enter a numbet to check whether it is prime or not : ";
//     cin >> n;
//     Static_demo::check_prime(n);
//     return 0;
// }


// Write a class complex having data members to store real and imaginary part provide following using operator overloading 1. Add two complex no using object as an argument.2. subtract two complex no using object as an argument.

#include <iostream>
// #include <conio.h>
    using namespace std;
class complex
{
public:
    float real, imag;
    void get_data();
};
void complex::get_data()
{
    cout << "Enter complex : " << endl;
    cout << "Real = ";
    cin >> real;
    cout << "Imaginary = ";
    cin >> imag;
}
complex add_complex(complex, complex);
complex sub_complex(complex, complex);
complex add_complex(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
complex sub_complex(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2.imag;
    return temp;
}
int main()
{
    complex comp1, comp2, add, sub;
    comp1.get_data();
    comp2.get_data();
    add = add_complex(comp1, comp2);
    cout << "Addition of complext no is : " << add.real << " + " << add.imag << "i" << endl;
    sub = sub_complex(comp1, comp2);
    cout << "subtraction of complext no is : " << sub.real << " + " << sub.imag << "i" << endl;
    // getch();
    return 0;        
}

// What will be the output of the following C code ? (Initial values : x = 7, y = 8)
// #include <stdio.h>

// int main()
// {
// float x;
// int y;
// printf("enter two numbers /n")
// scanf("%f%f"&x, &y) ;
// printf("%f, %d",x, у);
// return 0;
// }
