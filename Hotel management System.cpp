#include<iostream>
using namespace std;
int main(){
	int quant;
	int choice;
	int qrooms=0, qpasta=0, qburger=0, qnoodles=0, qshakes, qchicken=0;//quantity of items
	int srooms=0, spasta=0, sburger=0, snoodles=0, sshakes=0, schicken=0;//sold items
	//store the price of the items
	int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0,Total_shakes=0, Total_chicken=0;
	
	cout<<"\n\t Quantity of items we have in our hotel";
	cout<<"\n Rooms Available :";
	cin>>qrooms;
	cout<<"\n Quantity of pasta :";
	cin>>qpasta;
	cout<<"\n Quantity of burger :";
	cin>>qburger;
	cout<<"\n Quantity of noodles :";
	cin>>qnoodles;
	cout<<"\n Quantity of shakes :";
	cin>>qshakes;
	cout<<"\n Quantity of chicken roll :";
	cin>>qchicken;
	
	m:
	cout<<"\n\t\t\t Please select from the given menu options:";
	cout<<"\n\n1)Rooms:";
	cout<<"\n2)Pasta:";
	cout<<"\n3)Burger:";
	cout<<"\n4)Noodles:";
	cout<<"\n5)Shakes:";
	cout<<"\n6)Chicken Roll:";
	cout<<"\n7)Information regarding sales and collection:";
	cout<<"\n8)Exit";
	
	cout<<"\n\nPlease Enter your choice:";
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"\n\nEnter the no. of rooms you want:";
			cin>>quant;
			if(qrooms-srooms>=quant)//checking whether we have that no. of rooms what the user have entered
			{
				srooms+=quant;
				Total_rooms=Total_rooms+(quant*1200);
				cout<<"\n\n\t\t"<<quant<<" room/rooms have been alotted! ";	
				
			}
			else{
				cout<<"\n\t Only "<<qrooms-srooms<<"are the remaining rooms in our hotel!!";
				
			}
			break;
			case 2:
			
			cout<<"\n\n Enter Pasta Quantity : ";
			cin>>quant;
			if(qpasta-spasta >= quant)
			{
				spasta =spasta + quant;
				Total_pasta =Total_pasta + (quant*250);
				cout<<"\n\t"<<quant<<" Pasta is the order";	
			}
			else
			cout<<"\n\n\t\tOnly "<<qpasta-spasta<<" Pasta is Remaining in stock";
			break;
			case 3:
				cout<<"\n\n Enter burger quantity:";
				cin>>quant;
				if(qburger-sburger>=quant){
					sburger+=quant;
					Total_burger=Total_burger+(quant*60);
					cout<<"\n\t"<<quant<<"Burger is the order";
				}
				else
				cout<<"\n\n\t\tOnly"<<qburger-sburger<<"Burgers are remaining in the stock";
				break;
				case 4:
					cout<<"\n\n Enter Noodles Quantity : ";
			cin>>quant;
			if(qnoodles-snoodles >= quant)
			{
				snoodles =snoodles + quant;
				Total_noodles =Total_noodles + (quant*200);
				cout<<"\n\n\t\t"<<quant<<" Noodles is the order";	
			}
			else
			cout<<"\n\tOnly "<<qnoodles-snoodles<<" Noodles Remaining in stock";
			break;
			case 5:
				cout<<"\n\n Enter Shakes Quantity : ";
			cin>>quant;
			if(qshakes-sshakes >= quant)
			{
				sshakes =sshakes + quant;
				Total_shakes =Total_shakes + quant*170;
				cout<<"\n\n\t\t"<<quant<<" shakes is the order";	
			}
			else
			cout<<"\n\tOnly "<<qshakes-sshakes<<" shakes Remaining in stock";
			break;
			case 6:
			cout<<"\n\n Enter Chicken-roll Quantity : ";
			cin>>quant;
			if(qchicken-schicken >= quant)
			{
				schicken =schicken + quant;
				Total_chicken =Total_chicken + quant*160;
				cout<<"\n\n\t\t"<<quant<<" Chicken-rolls is the order";	
			}
			else
			cout<<"\n\tOnly "<<qchicken-schicken<<" Chicken-roll Remaining in stock";
			break;
			
			case 7:
				cout<<"\n\t\t Details of Sales and collection:";
				cout<<"\n\n Number of Rooms we had : "<<qrooms;
				cout<<"\n Number of Rooms we gave for rent : "<<srooms;
				cout<<"\n Remaining Rooms : "<<qrooms-srooms;
				cout<<"\n\n Total Rooms collection for the Day : "<<Total_rooms;
				
				cout<<"\n\n Number of Pastas we had : "<<qpasta;
			cout<<"\n Number of Pastas we sold : "<<spasta;
			cout<<"\n Remaining Pastas : "<<qpasta-spasta;
			cout<<"\n\n Total Pasta collection for the Day : "<<Total_pasta;
			
			cout<<"\n\n Number of burgers we had : "<<qburger;
			cout<<"\n Number of burgers we sold : "<<sburger;
			cout<<"\n Remaining Burgers : "<<qburger-sburger;
			cout<<"\n\n Total Burger collection for the Day : "<<Total_burger;
			
			cout<<"\n\n Number of Noodles we had : "<<snoodles;
			cout<<"\n Number of Noodles we sold : "<<snoodles;
			cout<<"\n Remaining Noodles : "<<qnoodles-snoodles;
			cout<<"\n\n Total Noodles collection for the Day : "<<Total_noodles;
			
			cout<<"\n\n Number of shakes we had : "<<qshakes;
			cout<<"\n Number of Shakes we sold : "<<qshakes;
			cout<<"\n Remaining Shakes : "<<qshakes-qshakes;
			cout<<"\n\n Total Shakes collection for the Day : "<<Total_shakes;
			
			cout<<"\n\n Number of Chicken-roll we had : "<<qchicken;
			cout<<"\n Number of Chicken-roll we sold : "<<schicken;
			cout<<"\n Remaining Chicken-roll : "<<qchicken-schicken;
			cout<<"\n\n Total Chicken-roll collection for the Day : "<<Total_chicken;
			cout<<"\n\n\n Total collection for the day: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shakes+Total_chicken;
			break;
			
			case 8:
				exit(0);
				default:
					cout<<"\n Please select from the numbers mentioned above!";
	}
	goto m;/*m is labelled for menu
	 and awe have used goto statement because if user want to make more choices 
	so they can jump to our menu sections to select the choice. so this goto statemnet will help us to
	jump after every choices.*/
}
