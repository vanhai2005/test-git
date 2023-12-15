#include<iostream>
#include<math.h>
using namespace std;
int bai51(int n)//tim chu so lon nhat trong so nguyen duong n
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
int bai52(int n)//tim chu sp be nhat trong so nguyen duong n
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
int bai53(int n)//co bao nhieu chu so lon nhat trong so nguyen duong n
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
int bai54(int n)//co bao nhieu so nho nhat trong so nguyen duong n
{
  int i,biendem=0;
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
    }else if(min==i)
    {biendem++;}
  }while(n /= 10);
return biendem;
}
void bai57(int n){//cac chu so trong co phai toan so chan hay k
  int i;
  int biendem=0,chan=0;
  do{
  }while(n < 0 );
  do
  {
    i = n % 10;
    biendem++;
    if(i%2==0)
	{
    chan++;
	}
}while(n /= 10);
  cout<<"bai 57 :";
  	if(chan==biendem)
  	cout<<"toan so chan"<<endl;
  	else cout<<"k p la so chan het"<<endl;
}
void bai56(int n){
  int i;
  int biendem=0,le=0;
  do{
  }while(n < 0 );
  do
  {
    i = n % 10;
    biendem++;
    if(i%2!=0)
	{
    le++;
	}
}while(n /= 10);
  cout<<"bai 56 :";
  	if(le==biendem)
  	cout<<"toan so le"<<endl;
  	else cout<<"k p la so le het"<<endl;
}
void bai59(int n){
  int a = 0,h;
  h=n;
  do
  {
    a=a*10+n%10;
  }while(n /= 10);
  cout<<"bai 59: ";
  if(a==h){
  cout<<"day la so nghich dao"<<endl;
  }else cout<<"khong phai la so nghich dao"<<endl;
}
void bai60(int n){
  int i,h=0,a=0,dem=0;
  do
  { dem++;
    i=n%10;
    h=((n-i)%100)/10;
    if(i>=h){
    a++;}
  }while(n /= 10);
  if(a==dem){
  cout<<"day la day tang dan"<<endl;
  }else cout<<"day khong phai la day tang dan"<<endl;
}
void bai61(int n){
  int i,h=0,a=1,dem=0;
  do
  { dem++;
    i=n%10;
    h=((n-i)%100)/10;
    if(i<=h){
    a++;}
  }while(n /= 10);
  if(a==dem){
  cout<<"day la day giam dan"<<endl;
  }else cout<<"day khong phai la day giam dan"<<endl;
}
void bai62(int a,int b) {
    int i, min, ucln = 1;
    if(a == 0 && b == 0) {
        cout << "Hai so 0 khong co uoc chung lon nhat" << endl;
    } else if (a != 0 && b == 0) {
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << abs(a) << endl;
    } else if (a == 0 && b != 0) {
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << abs(b) << endl;
		}
     else {
        if(a < b) {
            min = a;
        } else {
            min = b;
        }
         
        for(int i = 1; i <= min; i++) {
            if(a%i == 0 && b%i == 0) {
                ucln = i;
            }
        }
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << ucln << endl;
    }
}
void bai63(int a,int b){
	int h;
	if(a==0&&b==0||a==0&&b!=0||a!=0&&b==0){
		cout<<"a va b khong co BCNN"<<endl;
	}else{
		h=a*b;
		for(int i=1;i<=h;i++){
			if(i%a==0&&i%b==0){
				cout<<i<<" la BCNN cua a va b"<<endl;
				break;
			}
		}
	}
}
void bai64(float a,float b){
	float x;
	if(a==0&&b==0){
		cout<<"phuong trinh co vo so nghiem"<<endl;
	}else if(a==0&&b!=0){
		cout<<"phuong trinh vo nghiem"<<endl;
	}else if(a!=0&&b==0){
        cout<<"phuong trinh co 1 nghiem x=0"<<endl;	
	}else {
		x=-b/a;
		cout<<"phuong trinh co nghiem x="<<x<<endl;
	}
}
void bai65(float a,float b,float c){
	float x,X,dental;
	if(a==0){
		if(b==0&&c==0){
		cout<<"phuong trinh co vo so nghiem"<<endl;
	}else if(b==0&&c!=0){
		cout<<"phuong trinh vo nghiem"<<endl;
	}else if(b!=0&&c==0){
        cout<<"phuong trinh co 1 nghiem x=0"<<endl;	
	}else {
		x=-c/b;
		cout<<"phuong trinh co nghiem x="<<x<<endl;
	}
	}else{
		dental=pow(b,2)-4*a*c;
		if(dental<0){
			cout<<"phuong trinh vo nghiem"<<endl;
		}else if(dental==0){
			x=-b/(2*a);
			cout<<"phuong trinh co nghiem x="<<x<<endl;
		}else if(dental>0){
			x=(-b-sqrt(dental))/2*a;
			X=(-b+sqrt(dental))/2*a;
			cout<<"phuong trinh co 2 nghiem x1 va x2 la"<<x<<endl<<X<<endl;
		}
	}
}
void bai66(float a,float b,float c){
	float x1,x2,x3,x4;
	float dental;
	if(a==0){
		if(b==0&&c==0){
			cout<<"phuong trinh co vo so nghiem"<<endl;
		}else if(b<0&&c<0||b>0&&c>0){
			cout<<"phuong trinh vo nghiem"<<endl;
		}else{
			x1=sqrt(-c/b);
			x2=-x1;
			cout<<"phuong trinh co 2 nghiem "<<x1<<" va "<<x2<<endl;
		}
	}else{
		dental=pow(b,2)-4*a*c;
		if(dental<0){
			cout<<"phuong trinh vo nghiem"<<endl;
		}else if(dental==0){
			if(-b/(2*a)<0){
				cout<<"phuomg trinh vo nghiem"<<endl;
			}else if(-b/(2*a)==0){
				cout<<"phuong trinh co nghiem x = 0"<<endl;
			}else if(-b/(2*a)>0){
			     x1=sqrt(-b/(2*a));
			     x2=-x1;
			cout<<"phuong trinh co nghiem x="<<x1<<" va "<<x2<<endl;
			}
		}else if(dental>0){
			if((-b-sqrt(dental))/2*a<0&&(-b+sqrt(dental))/2*a<0){
				cout<<"phuong trinh vo nghiem";
			}else if((-b-sqrt(dental))/2*a<0&&(-b+sqrt(dental))/2*a>0){
				x1=sqrt((-b+sqrt(dental))/2*a);
				x2=-x1;
				cout<<"phuong trinh co nghiem x="<<x1<<" va "<<x2<<endl;
			}else if((-b-sqrt(dental))/2*a>0&&(-b+sqrt(dental))/2*a<0){
				x1=sqrt((-b-sqrt(dental))/2*a);
				x2=-x1;
				cout<<"phuong trinh co nghiem x="<<x1<<" va "<<x2<<endl;
		    }else if((-b-sqrt(dental))/2*a==0&&(-b+sqrt(dental))/2*a<0){
		    	x1=0;
		        cout<<"phuong trinh co nghiem x="<<x1<<endl;
			}else if((-b+sqrt(dental))/2*a==0&&(-b-sqrt(dental))/2*a<0){
		    	x1=0;
		        cout<<"phuong trinh co nghiem x="<<x1<<endl;
		    }else if((-b+sqrt(dental))/2*a==0&&(-b-sqrt(dental))/2*a>0){
		    	x1=0;
		    	x2=sqrt((-b-sqrt(dental))/2*a);
		    	x3=-x2;
		        cout<<"phuong trinh co nghiem x="<<x1<<" va "<<x2<<" va "<<x3<<endl;
		    }else if((-b-sqrt(dental))/2*a==0&&(-b+sqrt(dental))/2*a>0){
		    	x1=0;
		    	x2=sqrt((-b+sqrt(dental))/2*a);
		    	x3=-x2;
		        cout<<"phuong trinh co nghiem x="<<x1<<" va "<<x2<<" va "<<x3<<endl;
		    }else if((-b+sqrt(dental))/2*a>0&&(-b-sqrt(dental))/2*a>0){
		    	x1=sqrt((-b+sqrt(dental))/2*a);
		    	x2=-x1;
		    	x3=sqrt((-b-sqrt(dental))/2*a);
		    	x4=-x2;
		        cout<<"phuong trinh co nghiem x="<<x1<<" va "<<x2<<" va "<<x3<<endl;
		    }
		}
	}
}
int bai67(int n,int x){//S(x, n) = x – x^2 + x^3 + … + (-1)^n+1 * x^n
	int s=0,h=0;
    for(int i=1;i<=n;i++){
		h+=pow(-1,i+1)*pow(x,i);
	    }
	s+=h;	
	return s;
}
int bai68(int n,int x){//S(x, n) = -x^2 + x^4  + … + (-1)^n * x^2n
      int s=0,h=0;
      for(int i=1;i<=n;i++){
	h+=pow(-1,i)*pow(x,2*i);
	}
	s+=h;
	return s;
}
int bai69(int n,int x){//s=x – x^3 + x^5 + … + (-1)^n * x^2n+1
	int s=0,h=0;
    for(int i=1;i<=n;i++){
	 h+=pow(-1,i)*pow(x,2*i+1);
	}
	s+=h;
	return s;

}
int main(){
  float n,m,p;
  cin>>n;
  cin>>m;
cin>>p;
  cout<<"bai 51 max la "<<bai51(n)<<endl;
  cout<<"bai 52 min la "<<bai52(n)<<endl;
  cout<<"bai 53 so luong chu so max la "<<bai53(n)<<endl;
  cout<<"bai 54 so luong chu so min la "<<bai54(n)<<endl;
  cout<<"bai 56";
  bai56(n);
  cout<<"bai 57";
  bai57(n);
  cout<<"bai 59";
  bai59(n);
  cout<<"bai 60";
  bai60(n);
  cout<<"bai 61";
  bai61(n);
  cout<<"bai 62";
  bai62(n,m);
  cout<<"bai 63";
  bai63(n,m);
  cout<<"bai 64";
  bai64(n,m);
  cout<<"bai 65";
  bai65(n,m,p);
  cout<<"bai 66";
  bai66(n,m,p);
  cout<<"bai 67 s="<<bai67(n,m)<<endl;
  cout<<"bai 68 s="<<bai68(n,m)<<endl;
  cout<<"bai 69 s="<<bai69(n,m)<<endl;
}
