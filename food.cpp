#include <iostream>
#include <stdlib.h>
using namespace std;

class food_class{
private:

	int length_arr=5;
	string food_list[50]={
		"Dairy", "Meat", "Fruit","Vegetable","Grain"
	};
	
	int sizefood = 0;
public:

	int *point(){
		return &sizefood;
	}
	void show_food(){
		for(int i=0;i<length_arr;i++)
			cout<<i+1<<". "<<food_list[i]<<endl;
	}
	void add_food(string arr[]){
	    	cout<<sizefood;
		int j=0;
		for(int i=length_arr;i<length_arr+sizefood;i++){
			food_list[i] = arr[j];
			j++;
		}
		length_arr +=sizefood;
	}
	void change_food(string new_food,int index){
		food_list[index-1] = new_food;
	}
	void deleted(int deleted){
		for(int i=deleted-1;i<length_arr;i++){
			food_list[i]=food_list[i+1];
		}
		length_arr--;
	
	}
};


int main(){

int option,length,deleted;
int index;
string new_food;

food_class cfood;

int *pointer = cfood.point(); 

main:
system("cls");
cout<<endl<<"0.for quit"<<endl<<"1.see food availabe"<<endl<<"2.add food"<<endl<<"3.change existed food"<<endl<<"4.delete existed food"<<endl;
error:
try{
	cin>>option;
	if(option!=1 && option!=2 && option!=3 && option!=0 && option!=4)
		throw option;
}
catch(int option){
	cout<<option<<" is wrong option ,insert again"<<endl;
		goto error;

}
catch(char option){
	cout<<option<<" is S wrong option ,insert again"<<endl;
		goto error;
}

	if(option == 1){
		cfood.show_food();
		goto main;
	}
	if(option == 2){

		cout<<"Insert number of foods you want to enter :";
		cin>>length;
		*pointer=length;
		string food[length];
		for(int i=0;i<length;i++){
			cout<<"Insert food "<<i+1;
			cin>>food[i];
		}
		
		cfood.add_food(food);
		cout<<"YOU SUCCESSFULLY ADDED THE FOODS,THANK YOU";
		goto main;

	}
	if(option == 3){
		cfood.show_food();
		cout<<"which one of the food do you want to change";
		cin>>index;
		cout<<"insert the food";
		cin>>new_food;
		cfood.change_food(new_food,index);
		cout<<"YOU SUCCESSFULLY CHANGED THE FOOD,THANK YOU";
		goto main;

	}
	if(option == 4){
		cfood.show_food();
		cout<<"how much do you want to delete"<<endl;
		cin>>index;
		for(int i=0;i<index;i++){
			cout<<" delete "<<i+1;
			cin>>deleted;
			cfood.deleted(deleted);
			cfood.show_food();
		}
		cout<<"you successfully deleted";
		goto main;
	}	


return 0;
}




