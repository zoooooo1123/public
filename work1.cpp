#include<iostream>
using namespace std;

class Line{
private:
	int *a=new int [length];
	int max;
	int min; 
	int length;

public:	int *p=new int [length];

public:
	
//	求最大值
	void MAX(){
		max=a[0];
		for(int i=0;i<length;i++){
			max=(max>a[i]?max:a[i]);	
		}
		cout << "max: " << max << endl;
	}
//	求最小值	
        void MIN(){
		min=a[0];
		for(int i=1;i<length;i++){
                        min=(min<a[i]?min:a[i]);  
                } 
		cout << "min: " << min << endl;
        } 
	
// 	排序函数
	void P(){
		int tmp,i,j=length;
		for(;j>1;j--){
			for(i=0;i<j;i++){
				if(p[i]>p[j-1]){
					tmp=p[i];
					p[i]=p[j-1];
					p[j-1]=tmp;}
			}
		}
		cout << "排序后数组为: "; 
		for(i=0;i<length;i++){cout << p[i] << " ";}
		cout << endl << endl;
	}
//	构造函数
	Line(const int in[],int size_in){
		length = size_in;
		cout << "Create a line of "<< length << endl << "line: ";
		for(int i=0;i<size_in;i++){
			a[i]=in[i];
			p[i]=in[i];
			cout << a[i] << " ";
		}
		cout << endl;
		MAX();
		MIN();
		P();
	}
};

int main(){
	int a[]={2,1,55,31,22,6,3,11};
	int b[]={22,5,1,33,5,3,6,11};
/*	int a[];			试图改为键盘输入数组,要求a[]初始化需指定数组个数
	cout << "输入第一个数组: ";
	for(int i=0;cin >> a[i];)i++;
*/	
	int size_a=sizeof(a)/sizeof(int);	//求数组长度
	int size_b=sizeof(b)/sizeof(int);
	int l=size_a+size_b;
	int *c=new int [l];
	int *p1,*p2;
	
	Line line1(a,size_a);
	Line line2(b,size_b);
//融合数组
	p1=&line1.p[0];
	p2=&line2.p[0];
	cout << "融合后数组为: ";
//将两个有序数组的最小值比较后输入c[]，当某一数组全输入完毕后直接输入另一数组   
	for(int i=0;i<l;i++){			
		if(*p1<=*p2){
			c[i]=*p1;
			p1++;
			}
		else {
			c[i]=*p2;
			p2++;
			}
		if(p1==&line1.p[size_a+1]){
			for(;i<l;i++){
				c[i]=*p2;
				p2++;
				cout << c[i] << " ";}
			break;}
		if(p2==&line2.p[size_b+1]){
			for(;i<l;i++){
				c[i]=*p1;
				p1++;
				cout << c[i] << " ";}
			break;}
	cout << c[i] << " ";
	}
	cout << endl;

return 0;
}
