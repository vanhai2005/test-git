#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
void bai70();
void bai71();
void bai72();
void bai73();
void bai74();
void bai75();
void bai76();
void bai77();
void bai78();
void bai79();
void bai80();
void bai87();
int main(){
	bai80();	
}
void bai70(){
	//Tính S(n) = 1 – 1/(1 + 2) + 1/(1 + 2 + 3)  + … + (-1)^n+1 * 1/(1 + 2 + 3+ … + n)
	int n;
	float s,mauso=0;
	cout<<"\nNhap n : ";
	cin>>n;
	if(n>0){	
		for(int i=1;i<=n;i++){
			mauso+=i;
			s+=1.0*pow(-1,i+1)/mauso;

		}
		cout<<"\n Tong la "<<s<<endl;
	}else
	cout<<"\n n phai lon hon 0";
}
void bai71(){
	//Tính S(x, n) = -x + x^2/(1 + 2) – x^3/(1 + 2 + 3) + … + (-1)^n * x^n/(1 + 2 +… + n)
	int n;
	float s,x,mauso,p=1,q;
	cout<<"\nNhap x va n lan luot la : ";
	cin>>x>>n;
	if(n>0){
		for(int i=1;i<=n;i++){
			mauso+=i;
			p*=x;
			s+=pow(-1,i)*p/mauso;
		}
		cout<<"\nTong s la : "<<fixed<<setprecision(8)<<s;
	}else 
	cout<<"\nNhap n lon hon 0";
}
void bai72(){
	// Tính S(x, n) = – x + x^2/2! – x^3/3! + … + (-1)^n * x^n/n!
	int n;
	float s,x,mauso=1,p=1;
	cout<<"\nNhap x va n lan luot la : ";
	cin>>x>>n;
	if(n>0){
		for(int i=1;i<=n;i++){
			mauso*=i;
			p*=x;
			s+=pow(-1,i)*p/mauso;
		}
		cout<<"\nTong s la : "<<s;
	}else 
	cout<<"\nNhap n lon hon 0";
} 
void bai73(){
	//Tính S(x, n) = -1 + x^2/2! – x^4/4! + … + (-1)^n+1 * x^2n/(2n)!
	int n;
	float mauso=1,s,x,p,q;
	cout<<"\nNhap x va n lan luot la : ";
	cin>>x>>n;
	if(n>0){
		for(int i=1;i<=n;i++){
			q=(2*i);
			mauso*=q*(q-1);
			p=pow(x,(i*2));
			s+=pow(-1,(i+1))*p/mauso;
		}
		cout<<"\nTong s la : "<<s-1;
	}else 
	cout<<"\nNhap n lon hon 0";
} 
int giaithua(int n){
	int giaithua=1;
	for(int i=1;i<=n;i++){
		giaithua*=i;
	}
	return giaithua;
}
float tinhtemp(int k){
	float temp=pow(-1,k+1)/giaithua(2*k+1);
	return temp;
}
double calculator(int x, int n) {
    double s = 0;
    for (int i = 0; i <= n; i++) {
        float tempValue = tinhtemp(i) * pow(x, 2 * i + 1 );
        s += tempValue;
    }
    return s;
}
void bai74(){
double x, n;

    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Gia tri cua S(" << x << "," << n << ") la: " << calculator(x, n) << endl;
} 
void bai75(){
	//Vi?t chýõng tr?nh t?m s? l?n nh?t trong 3 s? th?c a, b, c
	int a,b,c;
	cout<< "\nNhap a,b,c lan luot la :";
	cin>>a>>b>>c;
	int mang[3]={a,b,c};
	int max=a;
	for(int i=0;i<3;i++){
		if(mang[i]>=max){
			max=mang[i];
		}
	}
	cout <<" max la :"<<max;
}
void bai76(){
	//Vi?t chuong trình nh?p 2 s? th?c, ki?m tra xem chúng có cùng d?u hay không
	float a,b;
	cout<<"\nNhap a va b lan luot la : ";
	cin>>a>>b;
	if( a*b>0){
		cout <<a<<"va"<<b<<" la 2 so thuc cung dau  ";
	}else
	cout<<a<<" va "<<b<<" la 2 so thuc trai dau ";
} 
void bai77(){ 
	//i?t hàm tính S = CanBacN(x)
	float s,n,x;
	cout<<"\nNhap lan luot n va x voi can bac n cua x : ";
	cin>>n>>x;
	n=1/n;
	s=pow(x,n);
	cout<<"\n S = "<<s;
}
void bai78(){
	//Vi?t hàm tính S = x^y
	float s,x,y;
	cout <<"\nNhap x va y lan luot la voi y la so mu cua x :";
	cin>>x>>y;
	s=pow(x,y);
	cout <<"\nS = "<<s;
}
void bai79(){
	//Vi?t chuong trình in b?ng c?u chuong ra màn hình
	for(int i=1;i<=10;i++){
		cout<<"Bang cuu chung : "<<i<<endl;
		for (int j=0;j<=10;j++){
			cout<<i<< " * "<<j<<" = "<<i*j<<endl;
		}
	}
}
void bai80(){
	//C?n có t?ng 200000 d?ng t? 3 lo?i gi?y b?c 1000 d?ng, 2000 d?ng, 5000 d?ng. L?p chuong trình d? tìm ra t?t c? các phuong án có th?
	int dem=0;
	for(int i=0;i<=200;i++){
		for(int j=0;j<=100;j++){
			for(int z=0;z<=40;z++){
				if(1000*i+2000*j+5000*z==200000){
					cout<<"\n"<<"\t1000 : "<<i<<"\t2000 : "<<j<<"\t5000 :"<<z;
					dem++;
				}
			
			}
		}
	}
	cout<<"\n co "<<dem<<" truong hop";
}
void bai87(){
	//Tìm u?c s? chung l?n nh?t c?a 2 s? nguyên duong a và b nh?p t? bàn phím.
	int a,b;
	do{// Nhap lai 2 so bat ki neu ko dung dk
	cout<<"\nNhap a va b nguyen duong lan luot : ";
	cin>>a>>b;
	}while(a<=0&&b<=0);
	while(a*b>0){//tim uoc trung lon nhat cua a va b
		if (a>b)
		a=a%b;
		else
		b=b%a;
	}
	cout<<" uoc trung lon nhat cua a va b la : "<<a+b;
}
