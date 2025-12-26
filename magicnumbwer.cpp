// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // int main() {
// // //     int a,b,s,p,r;
// // //     cin>>a;
// // //     b=a;
// // //     s=0;
// // //     while(a>0){
// // //         s=s+(a%10);
// // //         a=a/10;
// // //     }
// // //     p=s;
// // //     r=0;
// // //     while(s>0){
// // //         r=r*10;
// // //         r=r+(s%10);
// // //         s=s/10;
// // //     }
// // //     if((p*r)==b){
// // //         cout<<"magic number";
// // //     }
// // //     else{
// // //         cout<<"not magic";
// // //     }
// // // }




// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     int a, p;
// //     string s, r;
// //     cin >> a;
// //     while (a > 0)
// //     {
// //         p = a % 10;

// //         switch (p)
// //         {

// //         case 1:
// //             s = "one";
// //             break;

// //         case 2:
// //             s = "two";
// //             break;

// //         case 3:
// //             s = "three";
// //             break;

// //         case 4:
// //             s = "four";
// //             break;

// //         case 5:
// //             s = "five";
// //             break;

// //         case 6:
// //             s = "six";
// //             break;

// //         case 7:
// //             s = "seven";
// //             break;

// //         case 8:
// //             s = "eight";
// //             break;

// //         case 9:
// //             s = "nine";
// //             break;

// //         case 0:
// //             s = "zero";
// //             break;
// //         }

// //         a = a / 10;
// //         r = s + r;
// //     }
// //     cout << r;
// // }
// // // wap to input digit, print it in words.



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int m,n,a,b;
// 	cin>>m;
// 	cin>>n;
// 	cin>>a>>b;
// 	for(int i=m;i<=n;i+=1){
// 	    if((i%a)==0){
// 	        if((i%b)==0){
// 	            cout<<i<<" ";
// 	        }
// 	    }
// 	}
// }
// // wap to input all numbers from m to n. find all the no between m to n which are divisible by a and b.




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int a[3][3],i,j;
// 	for(i=0;i<3;i+=1){
// 	    for(j=0;j<3;j+=1){
// 	        cin>>a[i][j];
	        
// 	    }
// 	}
// 	for(i=0;i<3;i+=1){
// 	    for(j=0;j<3;j+=1){
// 	        cout<<a[i][j];
	        
// 	    }
// 	    cout<<"\n";
	    
// 	}
// 	cout<<"\n";
// 	for(i=0;i<3;i+=1){
// 	    for(j=0;j<3;j+=1){
// 	        if(i!=j){
// 	            cout<<a[i][j]<<" ";
// 	        }
// 	    }

//     }
// }
// //wap to input 2d matrix. print all the elements of a matrix which are not in diagnol.




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int a[3][3],i,j,s=0;
// 	for(i=0;i<3;i+=1){
// 	    for(j=0;j<3;j+=1){
// 	        cin>>a[i][j];
	        
// 	    }
// 	}
// 	for(i=0;i<3;i+=1){
// 	    for(j=0;j<3;j+=1){
// 	        cout<<a[i][j];
	        
// 	    }
	    
// 	}
// 	for(i=0;i<3;i+=1){
// 	    for(j=0;j<3;j+=1){
// 	        if((i%2)==0){
// 	            s+=a[i][j];
// 	        }
	        
// 	    }
// 	}
// 	cout<<s;
// }
// //wap to input 2d matrix. find the sum of all even no rows.
