// // factorial

// #include <bits/stdc++.h>
// using namespace std;

// int fact(int);

// int main()
// {

//     int n, p;
//     cin >> n;
//     p = fact(n);
//     cout << p;
// }

// int fact(int n)
// {
//     if (n == 1)
//     {
//         return (1);
//     }
//     else
//     {
//         return (n * fact(n - 1));
//     }
// }



// // fibonacci series using recurssion

// #include <bits/stdc++.h>
// using namespace std;

// int fibo(int);

// int main() {
// 	int n,i,r;
// 	cin>>n;
// 	for (i=0;i<n;i+=1){
// 	    r=fibo(i);
// 	    cout<<r<<"\n";
// 	}

// }

// int fibo(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
        
//     }
//     else{
//         return(fibo(n-1)+fibo(n-2));
//     }
// }
