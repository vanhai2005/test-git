#include<iostream>
#include<cmath>
#include<vector>

using namespace std;
//kiem tra so chinh phuong
bool ktscp(int num){
	int canbac2=sqrt(num);
	if(pow(canbac2,2)==num){
		return true;
	}else return false;
}

//kiem tra so nguyen to
bool ktsnt(int num){
	if(num<2){
		return false;
	}
	for(int i=2;i*i<=num;i++){
		if(num%i==0)
		return false;
	}
	return true;
}	

//phan loai chan le
bool chanle(int num){
	if(num%2==0){
		return true;
	}else return false;
}

//kiem tra cac so uoc
void ktsu(int num, int &count, vector<int> &a) {
    count=-1;
    for (int i=1;i<=num;i++){
        if(num%i==0){
            count++;
            a[count]=i;
        }
    }
}

//in cac uoc so
void bai20(int num){
	cout<<"Bai 20: \n";
    int count;
    vector<int> a(num);
    ktsu(num,count,a);
    cout<<num<<" co cac uoc so la: ";

    for(int j=0;j<=count;j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;
}

//tong cac uoc so
int bai21(int num,bool print=true){
	if(print){
	cout<<"Bai 21: \n"<<"Tong cac uoc so la: ";}
    int count,sum=0;
    vector<int> a(num);
    ktsu(num,count,a);

    for(int j=0;j<=count;j++){
        sum=sum+a[j];
    }if(print){
	cout<<sum<<endl;}
	return sum;
}

//tich cac uoc so
void bai22(int num){
	cout<<"Bai 22: \n"<<"Tich cac uoc so la: ";
    int count,multi=1;
    vector<int> a(num);
    ktsu(num,count,a);

    for(int j=0;j<=count;j++){
        multi=multi*a[j];
    }cout<<multi<<endl;
}

//dem so luong uoc so
void bai23(int num){
	cout<<"Bai 23: \n";
	int count;
	vector<int> a(num);
	ktsu(num,count,a);
	count=count+1;
	cout<<"So luong uoc so la: "<<count<<endl;
}

//liet ke cac uoc so le
int bai24(int num,bool print=true){
	if(print){
	cout<<"Bai 24: \n"<<"Cac uoc so le: ";}
    int count,max;
    vector<int> a(num);
    ktsu(num,count,a);
    for(int j=0;j<=count;j++){
    	if(chanle(a[j])==false){
    		if(print){
    		cout<<" "<<a[j];
			}
			max=a[j];
		}
	}cout<<endl;
	return max;
}

//tong cac uoc so chan
void bai25(int num){
	cout<<"Bai 25: \n"<<"Tong cac uoc so chan: ";
    int count,sum=0;
    vector<int> a(num);
    ktsu(num,count,a);
    for(int j=0;j<=count;j++){
    	if(chanle(a[j])==true){
    		sum=sum+a[j];
		}
	}cout<<sum<<endl;
}

//tich cac uoc so le
void bai26(int num){
	cout<<"Bai 26: \n"<<"Tich cac uoc so le: ";
    int count,multi=1;
    vector<int> a(num);
    ktsu(num,count,a);
    for(int j=0;j<=count;j++){
    	if(chanle(a[j])==false){
    		multi=multi*a[j];
		}
	}cout<<multi<<endl;
}

//dem cac uoc so chan
void bai27(int num){
	cout<<"Bai 27: \n";
	int count,countt=0;
	vector<int> a(num);
	ktsu(num,count,a);
    for(int j=0;j<=count;j++){
    	if(chanle(a[j])==true){
    		countt=countt+1;
		}
	}cout<<"So luong uoc so chan la: "<<countt<<endl;
}

//tong cac uoc so nho hon num
int bai28(int num,bool print=true){
	if(print){
	cout<<"Bai 28: \n"<<"Tong cac uoc so nho hon n: ";}
	int sum;
	sum=bai21(num,false)-num;
	if(print){
	cout<<sum<<endl;}
	return sum;
}

//uoc so le lon nhat
void bai29(int num){
	cout<<"Bai 29: \n"<<"Uoc so le lon nhat: ";
	int max=0;
	max=bai24(num,false);
	cout<<max<<endl;
}

//co phai la so hoan thien khong?
void bai30(int num){
	cout<<"Bai 30: \n";
	int sum;
	sum=bai28(num,false);
	if(sum==num){
		cout<<num<<" la so hoan thien"<<endl;
	}else cout<<num<<" la so khong hoan thien"<<endl;
}

//co phai la so nguyen to khong?
void bai31(int num){
	cout<<"Bai 31: \n";
	if(ktsnt(num)==true){
		cout<<num<<" la so nguyen to"<<endl;
	}else cout<<num<<" khong phai la so nguyen to"<<endl;
}

//co phai la so chinh phuong khong?
void bai32(int num){
	cout<<"Bai 32: \n";
	if(ktscp(num)==true){
		cout<<num<<" la so chinh phuong";
	}else cout<<num<<" khong phai la so chinh phuong";
}

int main(){
    int num;
    cout<<"Nhap mot so nguyen duong: ";
    cin>>num;
    bai20(num);
    bai21(num,true);
    bai22(num);
    bai23(num);
    bai24(num,true);
    bai25(num);
    bai26(num);
    bai27(num);
    bai28(num,true);
    bai29(num);
    bai30(num);
    bai31(num);
    bai32(num);
    return 0;
}
