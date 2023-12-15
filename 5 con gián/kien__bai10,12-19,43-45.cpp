#include<iostream>
#include<cmath>
using namespace std;

float giaithua(float n){ // 1*2*3*4*...*n
 	int t=1,i;
 	for(int i=1;i<=n;i++){
 		t*=i;
	 }
	 return t;
 }
 
int bai10(int x, int n){  //Bài 10: Tính T(x, n) = x^n
 	int T;
 	T=pow(x, n);
 	return T;
 }
 
int bai12(int x,int n){  //Bài 12: Tính T(x, n)  = x + x^2 + x^3 + … + x^n
 	int T=0,i;
    for (i=1;i<=n;i++){
    	T+=pow(x,i);
    }
    	return T;
 }
 
int bai13(int x, int n){  //Bài 13: Tính T(x, n)  = x^2 + x^4 + … + x^2n
    int T,i;
    T=0;
    for (i=1;i<=n;i++){
    	T+=pow(x,2*i);
	}
	return T;
 }
 
int bai14(int x, int n){ //Bài 14: Tính T(x, n)  = x + x^3 + x^5 + … + x^2n + 1
 	int T,i;
 	T=0;
 	for (i=0;i<=n;i++){
 		T+=pow(x,2*i+1);
	 }
	 return T;
 }

float bai15( int n){   //Bài 15: Tính S(n)  = 1 + 1/(1 + 2) + 1/ (1 + 2 + 3) + ….. + 1/ (1 + 2 + 3 + …. + N)
  	float s,p,h=1;
  	for(int i=1;i<=n;i++){
  		p+=i;
  		s+=1.0*h/p;
	  }
	return s;
	
  }

float bai16(int x, int n){   //Bài 16: Tính T(x, n)  = x + x^2/(1 + 2) + x^3/(1 + 2 + 3) + … + x^n/(1 + 2 + 3 + …. + N)
  	float T,p;
  	for(int i=1;i<=n;i++){
  		p+=i;
  		T+=pow(x,i)/p;
	  }
	return T;

  }
  
float bai17(int x, int n){   //Bài 17: Tính T(x, n)  = x + x^2/2! + x^3/3! + … + x^n/N!
  	float T,p=1;
  	for(int i=1;i<=n;i++){
  		p*=i;
  		T+=pow(x,i)/p;
	  }
	return T;

  }
 
float bai18(int x, int n){   //Bài 18: Tính T(x, n)  = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!
  	float T,I,p=1;
  	for(int i=1;i<=n;i++){
  		p=giaithua(2*i);
  		T+=pow(x,2*i)/p;
	  }
	return T+1;

  }
  
float bai19(int x, int n){   //Bài 19: Tính T(x, n)  = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!
  	float T,I,p=1;
  	for(int i=1;i<=n;i++){
  		p=giaithua(2*i+1);
  		T+=pow(x,2*i+1)/p; //hay T=T+pow(x,2*i+1)
	  }
	return T+1;

  }
 

int bai43(int n){//Bài 43: Hãy dem so luong chu so cua so nguyên duong n
	int dem=0;
	while(n>=10){
		n/=10; // hay n = n /10;
		dem++;
	}
	return dem;
} 
 
int bai44(int n){//Bài 44: Hãy tính tong các chu so cua so nguyên duong n
    int S = 0;
    while (n > 0)
    {
        int t=n%10;
        S=S+t;
        n=n/10;
    }
    return S;
}  
  
int bai45(int n) {//Bài 45: Hãy tính tích các chu so cua so nguyên duong n
    int P=1;
    while(n>0)
    {
        int t=n%10;
        P=P*t;
        n=n/10;
    }
    return P;
}

 
int main(){
	int x,n;
	    cout<<"Nhap x: "; cin>>x;
	    cout<<"Nhap n: "; cin>>n;
	    cout<<"bai10 = "<<bai10(x,n)<<endl;
	    cout<<"bai12 = "<<bai12(x,n)<<endl;
	    cout<<"bai13 = "<<bai13(x,n)<<endl;
	    cout<<"bai14 = "<<bai14(x,n)<<endl;
	    cout<<"bai15 = "<<bai15(n)<<endl;
	    cout<<"bai16 = "<<bai16(x,n)<<endl;
	    cout<<"bai17 = "<<bai17(x,n)<<endl;
	    cout<<"bai18 = "<<bai18(x,n)<<endl;
	    cout<<"bai19 = "<<bai19(x,n)<<endl;
	    cout<<"bai43:\t"<<"So luong chu so cua so nguyen "<<n<<" la: "<<bai43(n)+1<<endl;
	    cout<<"bai44:\t"<<"Tong cac chu so cua so nguyen "<<n<<" la: "<<bai44(n)<<endl; 
	    cout<<"bai45:\t"<<"Tich cac chu so cua so nguyen "<<n<<" la: "<<bai45(n)<<endl;
}

//Bài 10: Tính T(x, n) = x^n
//Bài 12: Tính T(x, n)  = x + x^2 + x^3 + … + x^n
//Bài 13: Tính T(x, n)  = x^2 + x^4 + … + x^2n
//Bài 14: Tính T(x, n)  = x + x^3 + x^5 + … + x^2n + 1
//Bài 15: Tính S(n)  = 1 + 1/(1 + 2) + 1/ (1 + 2 + 3) + ….. + 1/ (1 + 2 + 3 + …. + N)
//Bài 16: Tính T(x, n)  = x + x^2/(1 + 2) + x^3/(1 + 2 + 3) + … + x^n/(1 + 2 + 3 + …. + N)
//Bài 17: Tính T(x, n)  = x + x^2/2! + x^3/3! + … + x^n/N!
//Bài 18: Tính T(x, n)  = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!
//Bài 19: Tính T(x, n)  = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!
//Bài 43: Hãy dem so luong chu so cua so nguyên duong n
//Bài 44: Hãy tính tong các chu so cua so nguyên duong n
//Bài 45: Hãy tính tích các chu so cua so nguyên duong n


