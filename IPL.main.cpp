#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class IPL
{

	
	public:
		void adding();
		void welcome();
		void teamandplayers();
		void mainmenu();
		
		};		
	void IPL:: adding(){
		cout<<"\n\t\t\t\t\t\t\t\t\tADDING PLAYERS\n\n";
			{
       			 cout<<"\tselect which team you want to select";
       			 cout<<"\n1.Mumbai Indians\n2.Chennai Super Kings\n3.Royal Challengers Bangalore\n4.Kolkata Knight Riders\n5.Delhi Daredevils \n6.Rajasthan Royals\n7.Sunrisers Hyderabad\n8.Kings XI Punjab";
       		
       				 cout<<"\t\n\nEnter Team Number :"<<endl;
      		      int a;
      		      cin>>a;
      		      switch(a)
      		      {
					
      		      {
      		      	case 1: 
      		      	ofstream mi;
      		      		cout<<"Enter player names for MI";
      		      		mi.open("MI.txt");
      		      		string membernames;
      		      		for(int i=0;i<=11;i++)
      		      		{
      		      			getline(cin,membernames);
      		      			mi<<membernames<<endl;
						}
						mi.close();
						cout<<"MI players added sucessfully";
						system("cls");
						mainmenu();
					}
					{
						case 2:
							ofstream csk;
							cout<<"Enter player names for CSK";
							csk.open("CSK.txt");
							string membernames;
							for(int i=0;i<=11;i++)
							{
								getline(cin,membernames);
								csk<<membernames<<endl;
							}
							csk.close();
							cout<<"Added sucessfully";
							system("cls");
							mainmenu();
					}
						{
						case 3:
							ofstream rcb;
							cout<<"Enter player names for RCB";
							rcb.open("RCB.txt");
							string membernames;
							for(int i=0;i<=11;i++)
							{
								getline(cin,membernames);
								rcb<<membernames<<endl;
							}
							rcb.close();
							cout<<"Added sucessfully";
							system("cls");
							mainmenu();
					}
						{
						case 4:
							ofstream KKR;
							cout<<"Enter player names for KKR";
							KKR.open("KKR.txt");
							string membernames;
							for(int i=0;i<=11;i++)
							{
								getline(cin,membernames);
								KKR<<membernames<<endl;
							}
							KKR.close();
							cout<<"Added sucessfully";
							system("cls");
							mainmenu();
					}
						{
						case 5:
							ofstream DD;
							cout<<"Enter player names for DD";
							DD.open("DD.txt");
							string membernames;
							for(int i=0;i<=11;i++)
							{
								getline(cin,membernames);
								DD<<membernames<<endl;
							}
							DD.close();
							cout<<"Added sucessfully";
							system("cls");
							mainmenu();
					}
						{
						case 6:
							ofstream RR;
							cout<<"Enter player names for RR";
							RR.open("RR.txt");
							string membernames;
							for(int i=0;i<=11;i++)
							{
								getline(cin,membernames);
								RR<<membernames<<endl;
							}
							RR.close();
							cout<<"Added sucessfully";
							system("cls");
							mainmenu();
					}
						{
						case 7:
							ofstream SRH;
							cout<<"Enter player names for SRH";
							SRH.open("SRH.txt");
							string membernames;
							for(int i=0;i<=11;i++)
							{
								getline(cin,membernames);
								SRH<<membernames<<endl;
							}
							SRH.close();
							cout<<"Added sucessfully";
							system("cls");
							mainmenu();
					};
						{
						case 8:
							ofstream KXIP;
							cout<<"Enter player names for KXIP";
							KXIP.open("KXIP.txt");
							string membernames;
							for(int i=0;i<=11;i++)
							{
								getline(cin,membernames);
								KXIP<<membernames<<endl;
							}	
							cout<<"Added sucessfully";
							system("cls");
							mainmenu();
					};
					{
							case 9:
							default:
							system("cls");
							cout<<"\n\n\n\n\t\t\t\t!!!!! Please Enter Correct option !!!!!\n\n\n";
							adding();
					};
        		};
    

	};
}
    void IPL :: teamandplayers()
 {
 	ifstream f;
 	int g;
 	char MI[1000];
 	char CSK[1000];
 	char RCB[1000];
 	char KKR[1000];
 	char DD[1000];
 	char RR[1000];
 	char SRH[1000];
 	char KXIP[1000];
 	cout<<"\n\n\t\t\t\t\t\t\t\t\tChoose the Team for Which Team Players you want to view\n\t\t\t\t1.MI\n\t\t\t\t2.CSK\n\t\t\t\t3.RCB\n\t\t\t\t4.KKR\n\t\t\t\t5.DD\n\t\t\t\t6.RR\n\t\t\t\t7.SRH\n\t\t\t\t8.KXIP";
	cin>>g;
	switch(g)
	{
		case 1:
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t\t\t\tMUMBAI INDIANS"<<endl;
			f.open("MI.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(MI,1000);
				if(f){
					cout<<"\t\t\t"<<MI<<endl;
				}
			}
			cout<<endl;
			f.close();
			mainmenu();
		case 2:
			system("cls");
		    cout<<"\n\n\t\t\t\t\t\t\t\t\tCHENNAI SUPER KINGS"<<endl;
			f.open("CSK.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(CSK,1000);
				if(f){
					cout<<"\t\t\t"<<CSK<<endl;
				}
			}
			cout<<endl;
			f.close();
			mainmenu();
		case 3:
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t\t\t\tROYAL CHALLENGERS BANGALORE"<<endl;
			f.open("RCB.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(RCB,1000);
				if(f){
					cout<<"\t\t\t"<<RCB<<endl;
				}
			}
			cout<<endl;
			f.close();
			mainmenu();
		case 4:
			system("cls");
		    cout<<"\n\n\t\t\t\t\t\t\t\t\tKOLKATA KNIGHT RIDERS"<<endl;
			f.open("KKR.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(KKR,1000);
				if(f){
					cout<<"\t\t\t"<<KKR<<endl;
				}
			}
			cout<<endl;
			f.close();
			mainmenu();
		case 5:
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t\t\t\tDELHI DAREDEVILS"<<endl;
			f.open("DD.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(DD,1000);
				if(f){
					cout<<"\t\t\t"<<DD<<endl;
				}
			}
			cout<<endl;
			f.close();
			mainmenu();
		case 6:
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t\t\t\tRAJASTHAN ROYALS"<<endl;
			f.open("RR.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(RR,1000);
				if(f){
					cout<<"\t\t\t"<<RR<<endl;
				}
			}
			cout<<endl;
			f.close();
			mainmenu();
		case 7:
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t\t\t\tSUNRISERS HYDERABAD"<<endl;
			f.open("SRH.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(SRH,1000);
				if(f){
					cout<<"\t\t\t"<<SRH<<endl;
				}
			}
			cout<<endl;
			f.close();
			mainmenu();
		case 8:
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t\t\t\tKINGS XI PUNJAB"<<endl;
			f.open("KXIP.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(KXIP,1000);
				if(f){
					cout<<"\t\t\t"<<KXIP<<endl;
				}
			}
			cout<<endl;
			f.close();
			mainmenu();
	case 9:
			default:
			system("cls");
			cout<<"\n\n\n\n\t\t\t\t!!!!! Please Enter Correct option !!!!!\n\n\n";
			teamandplayers();
			
	}
 }	
 void IPL :: mainmenu(void)
{
	ifstream g;	
	cout<<"\n\n\t\t\t\t\t\t\t\t\tChoose what you want to do --->\n";
	cout<<"\t\t\t\t\t\t\t\t\t1.TEAM AND PLAYERS\n\t\t\t\t\t\t\t\t\t2.UMPIRES\n\t\t\t\t\t\t\t\t\t3.COACHES\n\t\t\t\t\t\t\t\t\t4.STAFF FOR EACH TEAM\n\t\t\t\t\t\t\t\t\t5.EACH TEAM OWNER\n\t\t\t\t\t\t\t\t\t6.NUMBER OF STADIUMS\n\t\t\t\t\t\t\t\t\t7.ADDING PLAYERS\n\t\t\t\t\t\t\t\t\t8.PREVIOUS RECORDS OF MATCHES\n\t\t\t\t\t\t\t\t\t9.GO TO MAIN MENU\n\t\t\t\t\t\t\t\t\t10.EXIT";
	int e;
	cout<<"\n\t\t\t\t\t\t\t\t\tplease enter your choice:";
	cin>>e;
	switch(e)
	{
			
		case 1:
			system("cls");
		    teamandplayers();		    
		case 2:
			system("cls");
		    cout<<"\n\n\t\t\t\t\t\t\t\t\tUMPIRES LIST"<<endl;
			char umpires[1000];
			g.open("UMPIRES.txt");
			cout<<"\n\n\n";
			while(g){
				g.getline(umpires,1000);
				if(g){
					cout<<"\t\t\t"<<umpires<<endl;
				}
			}
			cout<<endl;
			g.close();
			mainmenu();
		case 3:
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t\t\t\tCOACHES LIST"<<endl;
			char coach[1000];
			g.open("COACHES.txt");
			cout<<"\n\n\n";
			while(g){
				g.getline(coach,1000);
				if(g){
					cout<<"\t\t\t"<<coach<<endl;
				}
			}
			cout<<endl;
			g.close();
			mainmenu();
		case 4:
			system("cls");
			cout<<"\n\n\n\t\t\t\t\t\t\t\t\tLIST OF STAFF FOR EACH TEAM"<<endl;
				char staff[1000];
			g.open("STAFFforeachteam.txt");
			cout<<"\n\n\n";
			while(g){
				g.getline(staff,1000);
				if(g){
					cout<<"\t\t\t"<<staff<<endl;
				}
			}
			cout<<endl;
			g.close();
			mainmenu();
		case 5:
			system("cls");
			cout<<"\n\n \t\t\t\t\t\t\t\t\tLIST OF EACH TEAM OWNER"<<endl;
			char owner[1000];
			g.open("owners.txt");
			cout<<"\n\n\n";
			while(g){
				g.getline(owner,1000);
				if(g){
					cout<<"\t\t\t"<<owner<<endl;
				}
			}
			cout<<endl;
			g.close();
			mainmenu();
		case 6:
			system("cls");
		    cout<<"\n \t\t\t\t\t\t\t\t\tLIST OF STADIUMS"<<endl;
		    char stadium[1000];
			g.open("Stadiums.txt");
			cout<<"\n\n\n";
			while(g){
				g.getline(stadium,1000);
				if(g){
					cout<<"\t\t\t"<<stadium<<endl;
				}
			}
			cout<<endl;
			g.close();
			mainmenu();
		case 7:
			system("cls");
			adding();
			mainmenu();

		case 8:
			system("cls");
			cout<<"\n \t\t\t\t\t\t\t\t\tLIST OF PREVIOUS RECORDS OF MATCHES\n\n";
			char records[1000];
			g.open("previousrecords.txt");
			cout<<"\n\n\n";
			while(g){
				g.getline(records,1000);
				if(g){
					cout<<"\t\t\t"<<records<<endl;
				}
			}
			cout<<endl;
			g.close();
			mainmenu();
		case 9:
			system("cls");
			cout<<"\n \t\t\t\t\t\t\t\t\tMAIN MENU\n\n";
			mainmenu();
		case 10:
			system("cls");
			cout<<"\n\n\a\t\t\t\t\t\t\t\t\t\t!* THANK YOU *!\n\n\t\t\t\t\t\t\t\t\t\t\t\tHave a Nice Day!\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tDone by:\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tAneesh pavan Prodduturu";
			exit(0);
	
		
		case 11:
			default:
			system("cls");
			cout<<"\n\n\n\n\t\t\t\t!!!!! Please Enter Correct option !!!!!\n\n\n";
			mainmenu();
	
}}
	void IPL::welcome(void){
			cout<<"\n\n\n\t\t\t\t\t\t\tWELCOME..";
	    	mainmenu();
		
	}
int main()
{
	cout<<"\n\n\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t* * * * *\t* * * * \t*\n\t\t\t\t\t\t\t\t\t\t\t\t    *  \t\t*      *\t*\n\t\t\t\t\t\t\t\t\t\t\t\t    *\t\t*     * \t*\n\t\t\t\t\t\t\t\t\t\t\t\t    *  \t\t*    *  \t*\n\t\t\t\t\t\t\t\t\t\t\t\t    *  \t\t*  *    \t*\n\t\t\t\t\t\t\t\t\t\t\t\t    *   \t*       \t*\n\t\t\t\t\t\t\t\t\t\t\t\t* * * * * \t*     \t* * * * *\n\n\t\t\t\t\t\t\t\t\t\t\t             CRICKET TOURNAMENT ORGANISER       \n\n\t\t\t\t\t\t\t\t\t\t\t\t               -2019-";
	IPL obj;
	obj.welcome();
	obj.adding();
	obj.mainmenu();
	obj.teamandplayers();
	
}
