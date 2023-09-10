#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
struct evt{
	string name,type,location,date,time,price;
};
evt e[100];
int total=0;
void evtdata(){
	int choice;
	cout<<"How many Event data do you want to enter??"<<endl;
	cin>>choice;
	for(int i=total;i<total+choice;i++){
		cout<<"Enter data of event "<<i+1<<endl;
		
	    cout<<"Costumer Name: ";
		cin>>e[i].name;
		
		cout<<"Event type: ";
		cout<<"\n\nChose Wedding,Birthday party,Cultural.."<<endl;
		cin>>e[i].type;
		
		cout<<"Location: ";
		cout<<"\n\nHall,Marquee,Open ground.."<<endl;
		cin>>e[i].location;
		
		cout<<"Date: ";
		cin>>e[i].date;
		
		cout<<"Time: ";
		cout<<"\n\nTime limit Before 10pm"<<endl;
		cin>>e[i].time;
		
		cout<<"Price:";
		cout<<"\n\nWedding=20,000,\nBday party=5,000"<<endl;
		cin>>e[i].price;
	}
	total=total+choice;
	 
}
void show(){
	if(total!=0){
		for(int i=0;i<total;i++){
			cout<<"Data of event "<<i+1<<endl;
			cout<<"Costumer Name: "<<e[i].name<<endl;
			cout<<"Event type: "<<e[i].type<<endl;
			cout<<"Location: "<<e[i].location<<endl;
			cout<<"Date: "<<e[i].date<<endl;
			cout<<"Time: "<<e[i].time<<endl;
			cout<<"Price: "<<e[i].price<<endl;
			cout<<"\t\tYour bill is aproved by admin"<<endl;
		}	
	}
	else{
		cout<<"There's no booking record to show"<<endl;
	}
}
void search(){
	if(total!=0){
		string name;
		cout<<"Enter the name of costumer which event record you want to search"<<endl;
		cin>>name;
		for(int i=0;i<total;i++){
			if(name==e[i].name){
            cout<<"Data of event "<<i+1<<endl;
			cout<<"Costumer Name: "<<e[i].name<<endl;
			cout<<"Event type: "<<e[i].type<<endl;
			cout<<"Location: "<<e[i].location<<endl;
			cout<<"Date: "<<e[i].date<<endl;
			cout<<"Time: "<<e[i].time<<endl;
			cout<<"Price: "<<e[i].price<<endl;
			break;
			}
			if(i==total-1){
				cout<<"No booking record found"<<endl;
			}
			
		}
		
	}
	else{
		cout<<"Your Booking record is empty"<<endl;
	}
	
}
void update(){
	if(total!=0){
		string name;
		cout<<"Enter the name of costumer which event record you want to Update"<<endl;
		cin>>name;
		for(int i=0;i<total;i++){
		    if(name==e[i].name){
		     cout<<"Previous Booking Record"<<endl;
             cout<<"Data of event "<<i+1<<endl;
			 cout<<"Costumer Name: "<<e[i].name<<endl;
			 cout<<"Event type: "<<e[i].type<<endl;
			 cout<<"Location: "<<e[i].location<<endl;
			 cout<<"Date: "<<e[i].date<<endl;
			 cout<<"Time: "<<e[i].time<<endl;
			 cout<<"Price: "<<e[i].price<<endl;
			 cout<<"\nEnter New Booking Record"<<endl;
			 cout<<"Costumer Name: ";
		cin>>e[i].name;
		cout<<"Event type: ";
		cin>>e[i].type;
		cout<<"Location: ";
		cin>>e[i].location;
		cout<<"Date: ";
		cin>>e[i].date;
		cout<<"Time: ";
		cin>>e[i].time;
		cout<<"Price:";
		cin>>e[i].price;
			 break;
			}
			if(i==total-1){
				cout<<"No booking record found"<<endl;
			}
			
		}
	}
	else{
		cout<<"Your Booking record is empty"<<endl;
	}
	
}
void del(){
	if(total!=0){
		char user;
		cout<<"Press 1 to delete full record"<<endl;
		cout<<"Press 2 to delete specific record"<<endl;
		user=getch();
		if(user=='1'){
			total=0;
			cout<<"All Bookings records are deleted...!!!"<<endl;
		}
		else if(user=='2'){
			string name;
			cout<<"Enter the name of costumer which event record you want to Deleted"<<endl;
			cin>>name;
			for(int i=0;i<total;i++){
				if(name==e[i].name){
					for(int j=i;j<total;j++){
					e[j].name=e[j+1].name;
					e[j].type=e[j+1].type;
					e[j].location=e[j+1].location;
					e[j].date=e[j+1].date;
					e[j].time=e[j+1].time;
					e[j].price=e[j+1].price;
					total--;
					cout<<"Your Required record is deleted..."<<endl;
					break;
				}
				if(i==total-1){
					cout<<"No Booking record found"<<endl;
				}
				}
		    }
	    }
	}
	else{
	cout<<"Your Booking record is empty"<<endl;
	}
}
int main(){
     cout<<"\n\n\t\tEvent Management System"<<endl;
	 cout<<"\n\n\t\tSign up"<<endl;
	 string username,password;
	 cout<<"\n\t\tEnter username: ";
	 cin>>username;
	 cout<<"\n\t\tEnter password: ";
	 cin>>password;
	 cout<<"\n\t\tYour id is creating please wait";
	 for(int i=0;i<4;i++){
		cout<<".";
		Sleep(1000);
	 }
	 cout<<"\n\t\tYour id is created successfuly"<<endl;
	 system("CLS");
	 start:
	 cout<<"\n\n\t\tEvent Management System"<<endl;
	  
	     cout<<"\n\tAdmin login"<<endl;
	     
	 string username1,password1;
	 cout<<"Username: ";
	 cin>>username1;
	 cout<<"Password: ";
	 cin>>password1;
	 if(username1==username&&password1==password){
	 	system("CLS");
	 	                cout<<"Welcome to ABDULLAH Events Management"<<endl;
	 	char user;
	 	while(1){
	 		 cout<<"\n\nPress 1 to enter data"<<endl;
	 		 cout<<"Press 2 to show data"<<endl;
	 		 cout<<"Press 3 to search data"<<endl;
	 		 cout<<"Press 4 to update data"<<endl;
	 		 cout<<"Press 5 to delete data"<<endl;
	 		 cout<<"Press 6 to logout"<<endl;
	 		 cout<<"Press 7 to exit"<<endl;
	 		 user=getch();
	 		 system("cls");
	 		switch(user){
	 			 case '1':
	 			    evtdata();
	 			    break;
	 			 case '2':
				    show();
					break;
				 case '3':
					search();
					break;
				 case '4':
					update();
					break;
				 case '5':
				    del();
					break;	
				 case '6':
				    goto start;
					break;
				  default:
				    cout<<"\aInvalid Input"<<endl;
				    break;
				  	
			
						   	
	 			
	 			
				
						
			 }
		 }
	 	
	 }
	 else if(username1!=username){
	 	cout<<"Your given username is inncorrect"<<endl;
	 	Sleep(2000);
	 	goto start;
	 }
	 else if(password1!=password){
	 	cout<<"Your entered password is inncorrect"<<endl;
	 	Sleep(2000);
	 	goto start;
	 }
}


