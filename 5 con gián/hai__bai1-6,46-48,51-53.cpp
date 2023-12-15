# include <iostream>
# include <cmath>
using namespace std;


int input(int &n){ // nhap n
	cout<<"nhap n: "; cin>>n;
}

int bai1(int n){ // tính S(n) = 1 + 2 + 3 + … + n
	int i,s=0;
	for (i=1;i<=n;i++){
		s+=i;
	}
	return s;
}

int bai2(int n){ //Tính S(n) = 1^2 + 2^2 + … + n^2
	int i,s=0;
	for (i=1;i<=n;i++){
		s+=pow(i,2);
	}
	return s;
}

float bai3(int n){ //Tính S(n) = 1 + ½ + 1/3 + … + 1/n
	float i,s=0;
	for (i=1;i<=n;i++){
		s+=1/i;
	}
	return s;
}

float bai4(int n){ //Tính S(n) = ½ + ¼ + … + 1/2n
	float i,s=0;
	for (i=1;i<=n;i++){
		s+=1/(i*2);
	}
	return s;
}

float bai5(int n){ //Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
	float i,s=0;
	for (i=0;i<=n;i++){
		s+=1/(i*2+1);
	}
	return s;
}

float bai6(int n){ //Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)
	float i,s=0;
	for (i=1;i<=n;i++){
		s+=1/(i*(i+1));
	}
	return s;
}

void bai46(int n){ // cac chu so le trong n
	int i,d;
	while(n>=1){
		d=n%10;
		n/=10;
		if (d%2!=0){
			cout<<d<<" ";
		}
	}
	cout<<endl;
}

int bai47(int n){ // cac chu so chan trong n
	int i,d,s=0;
	while(n>=1){
		d=n%10;
		n/=10;
		if (d%2==0){
			s+=d;
		}
	}
	return s;
}

int bai48(int n){ // tich cac so le trong n
	int i,d,s=0;
	while(n>=1){
		d=n%10;
		n/=10;
		if (d%2!=0){
			s+=d;
		}
	}
	return s;
}

int bai51(int n) // chu so lon nhat trong so n
{
  int i;
  int max = 0;
  do{
  }while(n < 0 );
  if(n == 0)
    max = 0;
  do
  {
    i = n % 10;
    if(i > max)
    {
      max = i;
    }
  }while(n /= 10);
return max;
}

int bai52(int n) //chu so nho nhat trong n
{
  int i;
  int min;
  do{
  }while(n < 0 );
  min = n % 10;
  if(n == 0)
  min=0;
  do
  { 
    i = n % 10;
    if(i < min)
    {
      min = i;
    }
  }while(n /= 10);
return min;
}

int bai53(int n) // so lan chu so lon nhat xuat hien trong n
{
  int i,biendem=1;
  int max = 0;
  do{
  }while(n < 0 );
  if(n == 0)
    max = 0;
  do
  {
    i = n % 10;
    if(i > max)
    {
      max = i;
    }else if(i==max){
	
      biendem++;}
  }while(n /= 10);
return biendem;
}

int main(){
	int n;
	input(n);
	cout<<"bai 1: s la: "<<bai1(n)<<endl;
	cout<<"bai 2: s la: "<<bai2(n)<<endl;
	cout<<"bai 3: s la: "<<bai3(n)<<endl;
	cout<<"bai 4: s la: "<<bai4(n)<<endl;
	cout<<"bai 5: s la: "<<bai5(n)<<endl;
	cout<<"bai 6: s la: "<<bai6(n)<<endl;
	cout<<"bai 46: so le trong n la: "; bai46(n);
	cout<<"bai 47: tong so chan trong n la: "<<bai47(n)<<endl;
	cout<<"bai 48: tong so le trong n la: "<<bai48(n)<<endl;
	cout<<"bai 51: max la: "<<bai51(n)<<endl;
	cout<<"bai 52: min la: "<<bai52(n)<<endl;
	cout<<"bai 53: so luong chu so max la: "<<bai53(n)<<endl;
}
