#include <iostream>

using namespace std;

class Rec{
private:
	int width;
	int height;

public:
	Rec(int w=0,int h=0){
		width = w;
		height = h;
		show_rec();
	}
	void show_rec(){	
	for(int i=0;i<height;i++){
		if(i!=0)
			cout<<"|";
		else
			cout<<" ";
		for(int j=0;j<width;j++){
			if(i==0 || i==height-1){
				cout<<"_";
				continue;
				}
			cout<<" ";
		}
		if(i!=0)
			cout<<"|"<<endl;
		else
			cout<<" "<<endl;
		}

	}


};

int main(){

int width,height;
one:
cout<<endl;
cout<<"please insetrt width of the rectangle you want ";
cin>>width;
cout<<"please insetrt height of the rectangle you want ";
cin>>height;
Rec rec(width,height);
goto one;





return 0;
}















