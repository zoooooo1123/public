#include<iostream>
using namespace std;

class Line{
private:
	int *a=new int [a_length];
	int a_max;
	int a_min;
	int a_length;

public:
	
	void MAX(){
		a_max=a[0];
		for(int i=1;i<a_length;i++){
			a_max=(a_max>a[i]?a_max:a[i]);	
		}
		cout << "max: " << a_max << endl;
	}
	
        void MIN(){
		a_min=a[0];
		for(int i=1;i<a_length;i++){
                        a_min=(a_min<a[i]?a_min:a[i]);  
                } 
		cout << "min: " << a_min << endl;
        } 
	

	Line(const int in[],int size_in){
		a_length = size_in;
		cout << size_in << "Create Line" << a_length << endl;
		for(int i=0;i<size_in;i++){
			a[i]=in[i];
			cout << a[i] << endl;
		}
		cout << size_in << "  class length: " << a_length << endl; 
		cout << "--------" << endl;
		MAX;
		MIN;
	}
};

int main(){
	int b[]={1,3,2,54,6,1,3};
	
	int size_b=sizeof(b)/sizeof(int);
	Line line1(b,size_b);
	cout << "b size "<<size_b<< endl;

return 0;
}
