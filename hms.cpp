#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<stdlib.h>
class admin
{
    public:
    void LoginScreen()
    {
    	
        int e=0;
        char Username[15];
        char Password[15];
        char Original_Username[25]="Hospital";
        char Original_Password[15]="hsptl";
        system("cls");
        do
        {
   	        
   	        cout<<"\n\n\n\n\n\n\t\t\t\t\t**** Welcome to the Hospital ****\n\n";
	        cout<<"\n\n\t\t\t\t\tEnter your Username and Password\n";
	        cout<<"\n\t\t\t\t\t        USERNAME:";
	        cin>>Username;
	        cout<<"\n\t\t\t\t\t        PASSWORD:";
	        for(int i=0;i<5;i++)
            {
               Password[i]=getch();
               cout<<"*";
            }
            cout<<endl;
	        if (strcmp(Username,Original_Username)==0 && strcmp(Password,Original_Password)==0)
	        {
		       cout<<"\n\n\n            ...Login Successfull...";
		       getch();
		       break;
	        }
	        else
	        {
		       cout<<"\n     ...Password is Incorrect.Please Try Again...";
		       e++;
		       getch();
	        }
        }
        while(e<=2);
        if(e>2)
        {
           cout<<"\n You have cross the limit. You cannot login... ";
           getch();
           system("cls");
           cout<<"\n\n\n\n                  THANK YOU FOR VISITING ";
           getch();
           exit(0);
        } 
        system("cls");
    }
};

struct doctor1
{
    int id,age;
    char qua[20],exp[20],city[20],spec[30];
    string name;
    string validation()
    {
    	string name;
	    int i=0;
	    L3:
	    cin>>name;
	    int length=name.length();
	    for(i=0;i<length;i++)
	    {
		 if(!((name[i]>='a' && name[i]<='z')||(name[i]>='A' && name[i]<='Z')||(name[i]=='.')||(name[i]==' ')||(name[i]=='\n')))
		 {
			cout<<"Error-- Invalid input"<<endl;
			cout<<"Please enter only alphabets:"<<endl;
			goto L3;
		 }
	    }
	return name;
	}
};
struct patient1
{
    int id1,charge,bill;
    char age[20],gender,city[20],dis[20],room[20],sym[20],con[20],date[20];
    string name;
    string validation()
    {
    	string name;
	    int i=0;
	    L3:
	    cin>>name;
	    int length=name.length();
	    for(i=0;i<length;i++)
	    {
		 if(!((name[i]>='a' && name[i]<='z')||(name[i]>='A' && name[i]<='Z')||(name[i]=='.')||(name[i]==' ')||(name[i]=='\n')))
		 {
			cout<<"Error-- Invalid input"<<endl;
			cout<<"Please enter only alphabets:"<<endl;
			goto L3;
		 }
	    }
	return name;
	}
};

class hospital
{
    public:
   // int id=0,id1=0,
    int count=0;
};

class doctor:public hospital
{
    public:
    int docid=0;
    struct doctor1 d[10];
    int add_doc_info();
    void display_doc();
    void doctor_details();
    void tot_no_of_doc();
};
int doctor :: add_doc_info()
{
    int i,en;
    cout<<"How many entries do you want to add : ";
    cin>>en;
    for(i=1;i<=en;i++)
    {
        cout<<"Enter Doctor's ID                              : ";
        cin>>d[docid].id;
        cout<<"Enter Doctor's Name                            : ";
        d[docid].name=d[docid].validation();
        cout<<"Enter Doctor's Age                             : ";
        cin>>d[docid].age;
        cout<<"Enter Doctor's Qualification                   : ";
        cin>>d[docid].qua;
        cout<<"Enter Doctor's Specialization                  : ";
        cin>>d[docid].spec;
        cout<<"Enter Doctor's Experience                      : ";
        cin>>d[docid].exp;
        cout<<"Enter Doctor's City                            : ";
        cin>>d[docid].city;
        docid++;
        count++;
        cout<<"\n";
        cout<<"You have filled all entries of doctor-"<<i<<" successfully"<<"\n";
        getch();
        cout<<"Enter value for doctor-"<<i+1<<"\n";
    }
}
void doctor :: display_doc()
{
    system("cls");
    int n,i;
    cout<<"\n Enter the Doctor's ID  to display Record : ";
    cin>>n;
    if(n==0)
    {
        cout<<"Note:- No Record to display  Plz Go Back and Enter Some Entries..."<<"\n";
    }
    else
    {
        int status=0;
        for(i=0;i<docid;i++)
        {
            if(d[i].id==n)
            {
                status=1;
                break;
            }
        }
        if(status)
        {
            cout<<"\n\n";
            cout<<"     1.Doctor's ID                : "<<d[i].id<<"\n";
            cout<<"     2.Doctor's Name              : "<<d[i].name<<"\n";
            cout<<"     3.Doctor's Age               : "<<d[i].age<<" yrs\n";
            cout<<"     4.Doctor's Qualification     : "<<d[i].qua<<"\n";
            cout<<"     5.Doctor's Specialization    : "<<d[i].spec<<"\n";
            cout<<"     6.Doctor's Experience        : "<<d[i].exp<<"\n";
            cout<<"     8.Doctor's City              : "<<d[i].city<<"\n";
            cout<<"\n  Press any KEY to choose another Option...";
        }
        else
        {
            cout<<"\n\n No such ID in database "<<endl;
            cout<<"\n Press any KEY to choose another Option...";
        }
    }
    getch();
}
void doctor :: doctor_details()
{
    int i;
    if(docid==0)
    {
        cout<<"Note:-   No Record to display  Plz Go Back and Enter Some Entries..."<<"\n";
    }
    else
	{
        cout<<"********************************************************************************"<<"\n";
        cout<<"\t \t  Details Of All The Doctors In The Hospital \n";
        cout<<"********************************************************************************"<<"\n\n";
        cout<<"ID"<<"\t \t"<<"Name"<<"\t \t \t"<<"Specialization"<<"\t \t"<<"Qualification"<<"\t\t"<<"\n";
        cout<<"----------------------------------------------------------------------------\n\n";
        for(i=0;i<docid;i++)
        {
          cout<<d[i].id<<"\t \t"<<d[i].name<<"\t\t"<<d[i].spec<<"\t \t "<<d[i].qua<<"\t \t "<<"\n";
        }
        cout<<"\n Press Any Button to choose another Option...";
    }
    getch();
}
void doctor :: tot_no_of_doc()
{
    system("cls");
    int i=count;
    cout<<"     Total Doctors in the Hospital : "<<i<<"\n\n";
    cout<<"   Press any Button to choose another Option...";
    getch();
}

class patient:public hospital
{
   public:
   int patid=0;
   struct patient1 p[10];
   void add_pat_info();
   void display_pat();
   void patient_report();
   void patient_details();
   void tot_no_of_pat();
   void patient_bill();
};
void patient :: add_pat_info()
{
    int i,en;
    cout<<"     How many entries do you want to add : ";
    cin>>en;
    for(i=1;i<=en;i++)
    {
      cout<<"     1. Enter Patient's ID                                    : ";
      cin>>p[patid].id1;
      cout<<"     2. Enter Patient's Name                                  : ";
      p[patid].name=p[patid].validation();
      cout<<"     3. Enter Patient's Age                                   : ";
      cin>>p[patid].age;
    L:cout<<"     4. Enter Patient's Gender(M/m or F/f)                    : ";
      cin>>p[patid].gender;
      if(!((p[patid].gender)=='M' || (p[patid].gender)=='m' || (p[patid].gender)=='F'|| (p[patid].gender)=='f'))
      {
      	cout<<"       Invalid Input\n";
      	goto L;
	  }
      cout<<"     5. Enter Patient's Disease                               : ";
      cin>>p[patid].dis;
      cout<<"     6. Enter Patient's Symptoms                              : ";
      cin>>p[patid].sym;
      cout<<"     7. Enter Patient's Room No.                              : ";
      cin>>p[patid].room;
      cout<<"     8. Enter Patient's Condition At the Time of Discharge    : ";
      cin>>p[patid].con;
      cout<<"     9. Enter Patient's ADMIT Date(dd-mm-yyyy)                : ";
      cin>>p[patid].date;
      cout<<"    10. Enter Patient's Room Charge                           : ";
      cin>>p[patid].charge;
      cout<<"    11. Enter Patient's Medicine Charge                       : ";
      cin>>p[patid].bill;
      patid++;
      count++;
      cout<<"\n";
      cout<<"You have filled all entries of patient-"<<i<<" successfully"<<"\n";
      cout<<"Enter value for patient-"<<i+1<<"\n";
    }
}
void patient :: display_pat()
{
    system("cls");
    int n,i;
    cout<<"\n\n     Enter the Patient's ID to display info : ";
    cin>>n;
    if(n==0)
    {
        cout<<"Note:-   No Record to display  Plz Go Back and Enter Some Entries..."<<"\n";
        cout<<"\n   Press any KEY to choose another Option...";
    }
    else
    {
        int status=0;
        for(i=0;i<patid;i++)
        {
            if(p[i].id1==n)
            {
                status=1;
                break;
            }
        }
        if(status==1)
        {
            cout<<"    1.Patient's ID                                        : "<<p[i].id1<<"\n";
            cout<<"    2.Patient's Name                                      : "<<p[i].name<<"\n";
            cout<<"    3.Patient's Age                                       : "<<p[i].age<<"\n";
            cout<<"    4.Patient's Gender                                    : "<<p[i].gender<<"\n";
            cout<<"    5.Patient's Disease                                   : "<<p[i].dis<<"\n";
            cout<<"    6.Patient's Symptoms                                  : "<<p[i].sym<<"\n";
            cout<<"    7.Patient's Room No.                                  : "<<p[i].room<<"\n";
            cout<<"    8.Patient's Condition At The Time Of Discharge        : "<<p[i].con<<"\n";
            cout<<"    9.Patient's ADMIT Date                                : "<<p[i].date<<"\n";
            cout<<"   10.Patient's Room Charge                               : Rs."<<p[i].charge<<"\n";
            cout<<"   11.Patient's Medicine Charge                           : Rs."<<p[i].bill<<"\n\n";
            cout<<"  Press any KEY to choose another Option...";
        }
        else
		{
            cout<<" \n\n No such ID in database "<<endl;
            cout<<" \n Press any KEY to choose another Option...";
        }
    }
    getch();
}
void patient :: patient_report()
{
    system("cls");
    int i,n;
    cout<<"\n\n     Enter the Patient's ID to display Report : ";
    cin>>n;
    int status=0;
    for(i=0;i<patid;i++)
    {
        if(p[i].id1==n)
        {
            status=1;
            break;
        }
    }
    if(status)
    {
        cout<<"\n\n       *** Patient's Report ***    "<<"\n \n";
        cout<<"              1. Patient Name                               : "<<p[i].name<<"\n";
        cout<<"              2. Patient Age                                : "<<p[i].age<<"\n";
        cout<<"              3. Patient Gender                             : "<<p[i].gender<<"\n";
        cout<<"              4. Patient Symptoms                           : "<<p[i].sym<<"\n";
        cout<<"              5. Patient Disease                            : "<<p[i].dis<<"\n";
        cout<<"              6. Patient Admit Date                         : "<<p[i].date<<"\n";
        cout<<"              7. Patient Condition At The Time Of Discharge : "<<p[i].con<<"\n\n";
        cout<<"            Press any KEY to go Back...";
    }
    else
	{
        cout<<" \n\n No such ID in database "<<endl;
        cout<<" \n Press any KEY to choose another Option...";
    }
    getch();
}
void patient :: patient_details()
{
    int i;
    if(patid==0)
    {
        cout<<"Note:-   No Record to display  Plz Go Back and Enter Some Entries..."<<"\n";
    }
    else
	{
        cout<<"*********************************************************************************************************"<<"\n";
        cout<<"\t \t Details Of All The Patients In The Hospital \n";
        cout<<"*********************************************************************************************************"<<"\n\n";
        cout<<"ID"<<"\t \t"<<"Name"<<"\t \t \t"<<"Age"<<"\t\t"<<"Gender"<<"\t\t"<<"Admitted Date"<<"\t\t"<<"Illness"<<"\n";
        cout<<"---------------------------------------------------------------------------------------------------------\n\n";
        for(i=0;i<patid;i++)
        {
          cout<<p[i].id1<<"\t\t"<<p[i].name<<"\t \t"<<p[i].age<<"\t\t"<<p[i].gender<<"\t\t"<<p[i].date<<"\t\t"<<p[i].dis<<"\n\n";
        }
        cout<<"   Press any KEY to choose another Option...";
    }
    getch();
}
void patient :: tot_no_of_pat()
{
    system("cls");
    int i=count;
    cout<<"       Total Patients in the Hospital : "<<i<<"\n\n";
    cout<<"       Press any KEY to choose another Option...";
    getch();
}
void patient :: patient_bill()
{
    system("cls");
    int i,n;
    cout<<"\n\n\n\t       Enter the Patient's ID to display  Bill : ";
    cin>>n;
    int status=0;
    for(i=0;i<patid;i++)
    {
        if(p[i].id1==n)
        {
            status=1;
            break;
        }
    }
    if(status)
    {
        cout<<"\n\n\n\n\t\t     *** Patient's Bill ***    "<<"\n\n";
        cout<<"                  1. Patient's Medicine Charge  : Rs."<<p[i].bill<<"\n";
        cout<<"                  2. Patient's Room Charge      : Rs."<<p[i].charge<<"\n\n";
        cout<<"               Press any key to go Back...";
    }
    else
	{
        cout<<" \n\n No such ID in database "<<endl;
        cout<<" \n Press any KEY to choose another Option...";
    }
    getch();
}

int main()
{
    system("color B0");
    bool repeat=true;
    int ch1,ch2,ch3,ch4;
    admin a;
    doctor d;
    patient p;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t*** Hospital Management System ***";
    getch();
    a.LoginScreen();
    L1:system("cls");
       cout<<"\n\n\n\n\n";
       cout<<"                       1. Menu     "<<"\n\n";
       cout<<"                       2. Exit     "<<"\n\n";
       cout<<"                 Enter Your choice : ";
       cin>>ch1;
       cout<<"\n\n\n";
       if(ch1==1)
       {
          L2:
          system("cls");
          cout<<"\n\n\n\n";
          cout<<"             1. Enter into Doctor's DataBase"<<endl;
          cout<<"             2. Enter into Patient's DataBase"<<endl;
          cout<<"             3. Generate Patient's Report"<<endl;
          cout<<"             4. Generate Patient's Bill"<<endl;
          cout<<"             5. EXIT"<<"\n\n";
          cout<<"           Please Enter your choice : ";
          cin>>ch2;
          while(repeat==true)
          {
            system("cls");
            switch(ch2)
            {
           	
                case 1:cout<<"\n\n\n\n";
                       cout<<"\t\t\t\t\t*** Welcome To Doctor's DataBase ***    "<<"\n \n";
                       cout<<"              1. Add New Doctor's Information              "<<endl;
                       cout<<"              2. Display Doctor's Information              "<<endl;
                       cout<<"              3. Details of all the Doctors in the Hospital "<<endl;
                       cout<<"              4. Total Number of Doctors in the Hospital  "<<endl;
                       cout<<"              5. EXIT   "<<"\n\n";
                       cout<<"         Please Enter your choice : ";
                       cin>>ch3;
                       switch(ch3)
                       {
                          case 1:system("cls");
                                 d.add_doc_info();
                                 break;
                          case 2:d.display_doc();
                                 cout<<"\n";
                                 break;
                          case 3:system("cls");
                                 d.doctor_details();
                                 break;
                          case 4:d.tot_no_of_doc();
                                 break;
                          case 5:goto L2;
                                 break;
                          default:cout<<"Invalid Input";
                       }
                       break;
                case 2:cout<<"\n\n\n\n";
                       cout<<"\t\t\t\t\t*** Welcome To Patient's DataBase ***    "<<"\n \n";
                       cout<<"           1. Add New Patient's Information "<<endl;
                       cout<<"           2. Display Patient's Information "<<endl;
                       cout<<"           3. Details of the Patients in the Hospital "<<endl;
                       cout<<"           4. Total Number of Patients in the Hospital     "<<endl;
                       cout<<"           5. EXIT "<<"\n\n";
                       cout<<"       Please Enter your choice : ";
                       cin>>ch4;
                       switch(ch4)
                       {
                            case 1:system("cls");
                                   p.add_pat_info();
                                   break;
                            case 2:p.display_pat();
                                   cout<<"\n";
                                   break;
                            case 3:system("cls");
                                   p.patient_details();
                                   break;
                            case 4:p.tot_no_of_pat();
                                   break;
                            case 5:goto L2;
                                   break;
                            default:cout<<"Invalid Input";
                                    break;
                        }
                        break;
                case 3:p.patient_report();
                       goto L2;
                       break;
                case 4:p.patient_bill();
                       goto L2;
                       break;
                case 5:goto L1;
                       break;
                default:cout<<"Invalid Input";
                        break;
            }
        }
    }
    else if(ch1==2)
    {
       system("cls");
	   cout<<"\n\n\n\n        THANK YOU FOR VISITING ";
       return 0;
    }
    else
    {
     cout<<"Wrong Input"<<endl;
    }
    return 0;
}
