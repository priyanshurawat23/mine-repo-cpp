// // character array

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	char a[100];
// 	cin.getline(a,100); // // // // // // //
// 	cout<<a;

// }

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     char a[100];
//     cin.getline(a, 100);
//     cout << a;
//     int x=strlen(a); // // // // // // //
//     cout<<"\n"<<x;

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	char s1[100], s2[100];
// 	cin.getline(s1, 100);
// 	cin.getline(s2, 100);

// 	strcat(s1,s2); // concatenation //
// 	cout<<s1;

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	char a[100],b[100];
// 	cin.getline(a,100);
// 	cin.getline(b,100);

// // 	strcpy(a,"hello");
//     strcpy(a,b);

// 	cout<<a;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	char a[100],b[100];
// 	cin.getline(a,100);
// 	cin.getline(b,100);

// 	int x = strcmp(a,b); // comparision

// 	// if string is same, output 0.
// 	cout<<x;
// }

// // wap to input 2 strings if the length of string 1 is greater than string 2, then concatitate[join] them, otherwise print second string number of times as its length.
// // wap to find out whether the given string is palindrome or not.
// // wap to input 2 strings and find their length. if the length of s1 = length of s2, then copy the string with your name, otherwise if lne s1 > len s2, then find the comparision between strings and print it. and if len s2 > len s1, find the reverse string of s2 and check with s1, if both are palindrome or not.
//
//
//
//

// #include <bits/stdc++.h>
// using namespace std;
//
// int main() {
// 	char a[100],b[100];
// 	int x,y;
// 	cin.getline(a,100);
// 	cin.getline(b,100);
// 	x=strlen(a);
// 	y=strlen(b);
// 	if(x>y){
// 	    cout<<strcat(a,b);
//
// 	}
// 	else{
// 	    for(int i=0;i<y;i+=1){
// 	        cout<<b;
// 	    }
// 	}
//
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	char a[100],b[100];
// 	int j = 0;
// 	cin.getline(a,100);
// 	int x = strlen(a);
// 	for(int i = x-1; i>=0; i-=1){
// 	    b[j]=a[i];
// 	    j+=1;
// 	}
//         cout<<b;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	char a[100],b[100];
// 	cin.getline(a);
// 	cin.getline(b);
// 	int x = strlen(a);
// 	int y = strlen(b);
// 	if(x==y){
// 	    cout<<strcpy(a,"priyanshu")
// 	}
// 	if(x>y){
// 	    int z = strcpm(a,b);
// 	    cout<<z;

// 	}
// 	if(y>x){
// 	    int p = 0;
// 	    for(int i = )
// 	}

// }

// // //

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// // 	string s = {"hello"};
// // 	string s1{"hello"};
// // 	string s2{s1};
// // 	string s3  = {s1,3};
// // 	cout<<s<<"\n"<<s1<<"\n"<<s2<<"\n"<<s3<<"\n";
// // 	string s4 = {s1,2};
// // 	cout<<s4;

// //   string s5 = {"wel come", 5};
// //   cout<<s5;

// //     string s7(5,'a');
// //     cout<<s7;

// // 	string s6(50,'abghgfjuvjugvhj');
// // 	cout<<s6;

//     // string s8(5,"a"); //error
//     // cout<<s8;

// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	string s;
// // 	cin>>s; // wrong
// // 	cout<<s;
// 	getline(cin,s);
// 	cout<<s;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	// your code goes here
// 	string s;
// 	getline(cin,s);
// 	for (char ch: s){
// 	   // cout<<ch<<endl;
// 	   cout<<ch<< " ";
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	string s;
// 	int b;
// 	b=0;
// 	getline(cin,s);
// 	for (char c:s){
// 	    if (c=='a'){
// 	        b+=1;
// 	    }
// 	}
// 	cout<<b;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	string s;
// 	int b=0;
// 	getline(cin,s);
// 	for (int c:s){
// 	    if(c>100){
// 	        b+=1;
// 	    }
// 	}
// 	cout<<b;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	string s1,s2;
// 	getline(cin,s1);
// 	getline(cin,s2);
// 	cout<<s1+s2<<"\n";
// 	cout<<s1+"class"<<"\n";
// 	cout<<"hello"+s2<<"\n";
// // 	cout<<"hello"+"class";
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	string s1,s2;
// 	getline(cin,s1);
// 	getline(cin,s2);
// 	if (s1==s2) // gives 1 if same.
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	string s1,s2;
// 	getline(cin,s1);
// 	getline(cin,s2);
// 	if (s1==s2){
// 	    cout<<"equal";
// 	}
// 	else{
// 	    if(s1<s2){
// 	        cout<<"s1 is smaller";
// 	    }
// 	    else{
// 	        cout<<"s2 is smaller";
// 	    }
// 	    }
// }

// wap to input 2 strings s1,s2. if s1=s2, concatinate them. if s1>s2, find occurence of a and b in s2. if s1<s2, then find which string is greater.

// wap to input 2 strings s1,s2. if s1=s2,then add last three characters of s1 to the starting of s2. if s1>s2, then print all asky value of all characters of s1. if s1<s2, then find out the no of occurence of 'k' in s2.

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     string s1, s2;
//     int a = 0, b = 0;
//     int x=0,y=0;
//     getline(cin, s1);
//     getline(cin, s2);
//     a = s1.length();
//     b = s2.length();
//     if (a == b) {
//         cout << s1 + s2;
//     }
//     if (a > b) {
//         for (char c: s2) {
//             if (c == 'a') {
//                 x += 1;
//             }
//             if (c == 'b') {
//                 y += 1;
//             }
//         }
//         cout << "a is " << x;
//         cout << "b is " << y;
//     }
//     if (b > a) {
//         if (s1 < s2) {
//             cout << "s1 is smaller";
//         }
//         else {
//             cout << "s2 is smaller";
//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	string s1,s2;
// 	getline(cin,s1);
// 	getline(cin,s2);
// 	int a = 0, b = 0;
// 	 a = s1.length();
// 	 b = s2.length();
// 	 if (a==b){
// 	     string x={s1,a-3};
// 	     string y=x+s2;
// 	     cout<<y;
// 	 }
// 	 if(a>b){
// 	     for(int c:s1){
// 	     }
// 	 }
// }

// wap to input 2 string s1 and s2= hello and insert string two at the location of hi
//  wap '' '' '' replace string 2 at the place of hi
//  wap to count no of vowels and no of digits and no of spaces and no of consonents in a given string.

// wap to input 2 cities adn find the city in ascending order then concatinate them with respect of order.
// wap to input 2 strings and find the location of "hello" in substring 1. erase it and then concatinate them with s2.
// wap to find whether a given string is annergan or not (making up another meaningful words with the help of letters of other word eg. eat= tea)

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s,s1,c,d;
//     int a,b,e;
//     cin>>s;
//     cin>>s1;
//     a=s.length();
//     b=s1.length();
//     if(a!=b){
//         cout<<"not annergram";
//     }
//     else{
//         sort(s.begin(),s.end());
//         sort(s1.begin(),s1.end());
//         if (s==s1){
//             cout<<"annergram";
//         }
//         else{
//             cout<<"not annergram";
//         }
//     }
// }

// wap to convert a given string into lower case letters.
// wap to convert a given string to uppercase letter.
// wap to count all the vowels in a given string.

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	string s;
// 	getline(cin,s);
// 	for(char c:s){
// 	    c=tolower(c);
// 	    cout<<c;
// 	}
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	string s;
// 	getline(cin,s);
// 	for(char c:s){
// 	    c=toupper(c);
// 	    cout<<c;
// 	}
// }



//wap to input 2 strings, replace first A and last A of string 1 with string 2.
// // " " " " " " " "" "" "" " " " " all A with string 2.



// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s1, s2;
//     getline(cin, s1);
//     getline(cin, s2);
//     int x = s1.find('a');
//     s1.replace(x, 1, s2);
//     int y = s2.rfind('a');
//     s2.replace(y, 1, s2);
//     cout << s1;
// }