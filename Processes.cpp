#define s setcolor


// ARRAY. CONSTANT STUDENT INFORMATION
float labfee;
float total_payment;
int mfee = 4961;



void cash(void);
void installment(void);

void printing(void);

void coeng(void);

using namespace std;

string COURSE = "";
string topayment = "";

char colleges[100];

char yr[100]; //to avoid error again.

char course;

char course_selection; //for the course selection


char subj[100][100];//variable[size of the string][how many subjects]
char subj_input[100][100];//for the inputs
bool subj_array[100]; //for bool. element 0 is for EN 110
int total_units=0;//computation of units
char total_subj[100][100];//for the total subjects


/****COURSES FUNCTION********/
void compeng(void);
void compeng_firstyear_secondsem(void);
void compeng_secondyear_firstsem(void);
void compeng_secondyear_secondsem(void);

void it_secondyear_secondsem(void);


void me_secondyear_secondsem(void);


void civil_secondyear_secondsem(void);

void ee_secondyear_secondsem();

void ece_secondyear_secondsem();  

void comsci_secondyear_secondsem();




/////////////////////fine arts ////////////////////////
void id_secondyear_secondsem();

void majorininteriordesign_secondyear_secondsem();

void majorinpainting_secondyear_secondsem();

void AA_secondyear_secondsem();

void archi_secondyear_secondsem();









/////////////////////CAS////////////////////////
void HRM(void);

void tourism_secondyear_secondsem(void);

void comarts_secondyear_secondsem(void);




/////////////////////BA/////////////////////

void BA_secondyear_secondsem(void);

void fm_secondyear_secondsem(void);

void marketingm_secondyear_secondsem(void);

void maccounting_secondyear_secondsem(void);

void acas_secondyear_secondsem(void);

void accnttech_secondyear_secondsem(void);

void accountancy_secondyear_secondsem(void);

/*****END********/

struct Student_Name
{
       char fn[100];
       char mn[100];
       char sn[100];
};


struct Address
{
       char HN[100];//house no.
       char street[100];     
       char city[100];
       char Area_code[100]; //To avoid error
       
};

enum college
{
     coe, cas, cba,cfa,ce,no_college
     };

Address ad;

Student_Name input;

void process(void)
{



clrscr();
char Student_no[100];
    clrscr();
    
/*First Name*/   
    gotoxy(24,2);
    cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 5);
cout<<"\tStudent Name\n";

gotoxy(24,7);
cout<<"First Name: ";
cin.getline(input.fn, 100);


/*MIDDLE NAME*/

clrscr();
    gotoxy(24,2);
    cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 5);
cout<<"\tStudent Name\n";

gotoxy(24,7);
cout<<"Middle Name: ";
cin.getline(input.mn, 100);   
    
/*SURNAME*/
clrscr();
    gotoxy(24,2);
    cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 5);
cout<<"\tStudent Name\n";

gotoxy(24,7);
cout<<"Surname: ";
cin.getline(input.sn, 100);       




    
////////////////////////////**END OF NAMES**/////////////////////////   
    
 /*STUDENT NUMBER*/   
  clrscr();  
    gotoxy(24,2);
    cout<<"STUDENT INFORMATION LOG IN";

gotoxy(24,6);
cout<<"Student Number: ";
cin.getline(Student_no,100);
    
    
//***************************END OF S.N**************************//
    
    
    
clrscr();


/*ADDRESS*/


/*STREET*/  
  
clrscr();
    gotoxy(24,2);
    cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 5);
cout<<"\tAddress\n";

gotoxy(24,7);
cout<<"Street: ";
cin.getline(ad.street, 100);  

gotoxy(24,8);
cout<<"House Number: ";
cin.getline(ad.HN, 100);


/*CITY*/

clrscr();
    gotoxy(24,2);
    cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 5);
cout<<"\tAddress\n";

gotoxy(24,7);
cout<<"City: ";
cin.getline(ad.city, 100);  

/*AREA CODE*/

clrscr();
    gotoxy(24,2);
    cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 5);
cout<<"\tAddress\n";

gotoxy(24,7);
cout<<"Area Code: ";
cin.getline(ad.Area_code, 100);  


//////////////************END OF ADDRESS ***************////////////
college://label collge
/*COLLEGE*/
clrscr();

college choice; //enum

 
    
  gotoxy(24,2);
    cout<<"STUDENT INFORMATION LOG IN";  
 gotoxy(22, 6);
cout<<"\tCollege: ";
 gotoxy(22, 7);
 cout<<"\t  1.Engineering";
 gotoxy(22, 8);
 cout<<"\t  2.Arts & Sciences";
 gotoxy(22, 9);
 cout<<"\t  3.Business Administration";
 gotoxy(22, 10);
 cout<<"\t  4.Fine Arts";
 gotoxy(22, 11);
 cout<<"\t\t\t-->: ";
 
char college_choice;
 
 cin>>college_choice;
 
                     switch (college_choice)
                     {
                            case '1':
                                 choice = coe;
                                 break;
                             case '2':
                                  choice = cas;
                                  break;
                             case '3':
                                  choice = cba;
                                  break;
                             case '4':
                                  choice = cfa;
                                  break;
                          
                              default:
                                      clrscr();
                                      cout<<"INVALID COLLEGE!";
                                      Sleep(1000);
                                      goto college; //no choice e
                                      break;
                                      }
                       
                       switch (choice)
                       {
                              case coe:
                                    strcpy(colleges,"College of Engineering");//check
                                    break;
                              case cas:
                                   strcpy(colleges,"College of Arts and Sciences");//CHECK!
                                   break;
                              case cba:
                                   strcpy(colleges,"College of Business Administration");
                                   break;
                              case cfa:
                                   strcpy(colleges,"College of Fine Arts");//check
                                   break;
                              case ce:
                                   strcpy(colleges,"College of Education");//not included
                                   break;
                              default:
                                      strcpy(colleges,"N/A");
                                      break;
                                      }
                                      
                                      
if(strcmp(colleges, "College of Engineering")==0)//coe
{    
     clrscr();
     gotoxy(24,2);
     cout<<"STUDENT INFORMATION LOG IN";
     gotoxy(22, 6);
     cout<<"\tCourse: ";
     cout<<"\n\t\t\t    [a]. Computer Engineering\n\t\t\t    [b]. Information Technology\n\t\t\t"
     "    [c]. Mechanical Engineering\n\t\t\t    [d]. Civil Engineering\n\t\t\t    [e]. Mechanical Engineering\n\t\t\t    [f]. Electronics and Communication Engineering\n\t\t\t    [g]. Computer Science\n\t\t\t\t-->:";                               
     cin>>course; 
     
}     //coe

if(strcmp(colleges, "College of Fine Arts")==0)//FA
{    
     clrscr();
     gotoxy(24,2);
     cout<<"STUDENT INFORMATION LOG IN";
     gotoxy(22, 6);
     cout<<"\tCourse: ";
     cout<<"\n\t\t\t    [a]. BS Industrial Design\n\t\t\t    [b]. Major in Interior Design\n\t\t\t"
     "    [c]. Major in Painting\n\t\t\t    [d]. Major in Advertising Arts\n\t\t\t    [e]. BS Architecture\n\t\t\t\t-->:";                               
     cin>>course; 
     
}     //fa
     
     
     
     
if(strcmp(colleges, "College of Arts and Sciences")==0)//CAS
{    
     clrscr();
     gotoxy(24,2);
     cout<<"STUDENT INFORMATION LOG IN";
     gotoxy(22, 6);
     cout<<"\tCourse: ";
     cout<<"\n\t\t\t    [a]. BS HRM\n\t\t\t    [b]. BS in Tourism\n\t\t\t"
     "    [c]. BS in Communication Arts\n\t\t\t\t-->:";                               
     cin>>course; 
     
}     //cAS
     
     
if(strcmp(colleges, "College of Business Administration")==0)//BA
{    
     clrscr();
     gotoxy(24,2);
     cout<<"STUDENT INFORMATION LOG IN";
     gotoxy(22, 6);
     cout<<"\tCourse: ";
     cout<<"\n\t\t\t    [a]. Business Management\n\t\t\t    [b]. BS in Financial Management\n\t\t\t"
     "    [c]. Major in Marketing Management\n\t\t\t    [d]. Major in Management Accounting\n\t\t\t"
     "    [e]. Major in ACAS\n\t\t\t    [f]. Major in Accounting Technology\n\t\t\t    [g]. BS Accountancy\n\t\t\t\t-->:";                             
     cin>>course; 
     
}     //bA
         
    
    
    
    
    
     
      
    clrscr();                                  
    gotoxy(24,2);
    cout<<"STUDENT INFORMATION LOG IN";
    
    char yr_sem;
    cout<<"\n\n\t\t\tChoose your Year and Semester";
    cout<<"\n\t\t\t    [a]. 1st year_1st sem\n\t\t\t    [b]. 1st year_2nd sem\n\n\t\t\t"
    "    [c]. 2nd year_1st sem\n\t\t\t    [d]. 2nd year_2nd sem\n\t\t\t\t->: ";
    cin>>yr_sem;
    clrscr();
    
    





                           
                               if(strcmp(colleges, "College of Engineering")==0)
                               {
                                                   
                                                   if(course=='a' || course =='A')//para sa coe
                                                   {
                                                   COURSE = "COMPUTER ENGINEERING";
                                                   switch(yr_sem)
                                                   {
                                                                 case 'a':
                                                                      
                                                                      compeng();
                                                                      Sleep(800);
                                                                      break;
                                                                 case 'b': 
                                                                      compeng_firstyear_secondsem();
                                                                      Sleep(800);
                                                                      break;  
                                                                 case 'c': 
                                                                      compeng_secondyear_firstsem();
                                                                      Sleep(800);
                                                                      break;  
                                                                 case 'd':
                                                                      compeng_secondyear_secondsem();
                                                                      Sleep(800);
                                                                      break;
                                                                 default:
                                                                         exit(0);
                                                                         break;
                                                                         }//switch end
                                                                         }//if end
                                                                         //para sa cpe
                                                   
                                                      else if(course=='b' || course =='B' )//IT
                                                      {
                                                           COURSE = "Information Technology";
                                                            it_secondyear_secondsem();
                                                           }         //end it
                                                       
                                                       
                                                              
                                                      else if(course=='c' || course =='C' )//me
                                                      {
                                                           COURSE = "Mechanical Engineering";
                                                            me_secondyear_secondsem();
                                                           }      //end of me 
                                                           
                                                      
                                                                
                                                                              
                                                   
                                                      else if(course=='d' || course =='D' )//me
                                                      {
                                                           COURSE = "Mechanical Engineering";
                                                           civil_secondyear_secondsem();  
                                                           }      //end of me     
                                                       
                                                       else if(course=='e' || course =='E' )//ee
                                                      {
                                                           COURSE = "Electrical Engineering";
                                                           ee_secondyear_secondsem();  
                                                           }      //end of ee                     
                                                                         
                                                       else if(course == 'f' || course == 'F')//ece
                                                      {
                                                            COURSE = "Electronics and Communication Engineering";
                                                            ece_secondyear_secondsem();
                                                            }//end of ECE
                                                         
                                                         else if(course == 'g' || course == 'G')//comsci
                                                      {
                                                            COURSE = "Computer Science" ;
                                                            comsci_secondyear_secondsem();
                                                            }//end of comsci
                                                      else
                                                      {
                                                          cout<<"WRONG INPUT! Program will exit in 2 secs.." ;
                                                          Sleep(2000);
                                                          exit(0);
                                                          }
                                                             
                                                            
                                }       //end if of college of Engineering
                                
                           
                     //FINE ARTS
                                if(strcmp(colleges, "College of Fine Arts")==0)
                               {
                                                    
                                                                     
                                          if(course=='a' || course =='A' )//Industrial Design
                                                      {
                                                           COURSE = "BS Industrial Design";
                                                            id_secondyear_secondsem();
                                                           }         //end //Industrial Design
                                 
                                 
                                          else if(course=='b' || course =='B' )//Industrial Design
                                                      {
                                                           COURSE = "Major in Interior Design";
                                                            majorininteriordesign_secondyear_secondsem();
                                                           }         //end //Industrial Design
                                          
                                          
                                          else if(course=='c' || course =='C' )//PAINTING
                                                      {
                                                           COURSE = "Major in Painting";
                                                            majorinpainting_secondyear_secondsem();
                                                           }         //Painting
                                 
                                           else if(course=='d' || course =='D' )//AA
                                                  {
                                                       COURSE = "Major in Advertising Arts";
                                                            AA_secondyear_secondsem();
                                                            }         //AA
                                 
                                 
                                 else if(course=='e' || course =='E' )//archi
                                                  {
                                                       COURSE = "BS in Architecture";
                                                            archi_secondyear_secondsem();
                                                            }         //archie
                                 
                                          else
                                                      {
                                                          cout<<"WRONG INPUT! Program will exit in 2 secs.." ;
                                                          Sleep(2000);
                                                          exit(0);
                                                          }
                                 
                                 }//END OF COLLEGE OF FINE ARTS
                                 
                                 
                                 /*************************************************/

                                                    //CAS

                                           if(strcmp(colleges, "College of Arts and Sciences")==0)
                                                {
                                                    
                                                                     
                                          if(course=='a' || course =='A' )//hrm
                                                      {
                                                           COURSE = "BS HRM";
                                                            HRM();
                                                           }         //ehrn
                                          
                                           else if(course=='b' || course =='B' )//Tourism
                                                  {
                                                       COURSE = "BS in Tourism";
                                                            tourism_secondyear_secondsem();
                                                            }         //torusim
                                                            
                                                            
                                              else if(course=='c' || course =='C' )//comarts
                                                  {
                                                       COURSE = "BS in Communication Arts";
                                                            comarts_secondyear_secondsem();
                                                            }         //comarts



                                                          else
                                                      {
                                                          cout<<"WRONG INPUT! Program will exit in 2 secs.." ;
                                                          Sleep(2000);
                                                          exit(0);
                                                          }
                                 
                                               }//END OF CAS
                                               
                                               
                                               
                                               /*******************************************/
                                               
                                               /********ITO AY PARA SA BA COLLEGES!*/
                                               
                                                 if(strcmp(colleges, "College of Business Administration")==0)
                                                {
                                                    
                                                                     
                                          if(course=='a' || course =='A' )//BM
                                                      {
                                                           COURSE = "BS Business Management";
                                                           BA_secondyear_secondsem();
                                                           }         //BM
                                          
                                           else if(course=='b' || course =='B' )//FM
                                                  {
                                                       COURSE = "Major in Financial Management";
                                                          fm_secondyear_secondsem();
                                                            }         //fm
                                                            
                                                            
                                              else if(course=='c' || course =='C' )//mm
                                                  {
                                                       COURSE = "Major in Maketing Manangement";
                                                            marketingm_secondyear_secondsem();
                                                            }         //mm

                                                            
                                                            
                                                 else if(course=='d' || course =='D' )//mm
                                                  {
                                                       COURSE = "Major in Management Accounting";
                                                            maccounting_secondyear_secondsem();
                                                            }         //mm
                                                            
                                                            
                                                else if(course=='e' || course =='E' )//acas
                                                  {
                                                       COURSE = "Major in ACAS";
                                                            acas_secondyear_secondsem();
                                                            }         //acas     
                                                            
                                                            
                                                  else if(course=='f' || course =='F' )//teachaccounting
                                                  {
                                                       COURSE = "Major in Accounting Technology";
                                                        accnttech_secondyear_secondsem();
                                                            }         //accntteach              
                                                            
                                                                 
                                                            
                                                            
                                                  else if(course=='g' || course =='G' )//accountancy
                                                  {
                                                       COURSE = "Major in Accountancy";
                                                            accountancy_secondyear_secondsem();
                                                            }         //accouyntancy                     

                                                          else
                                                      {
                                                          cout<<"WRONG INPUT! Program will exit in 2 secs.." ;
                                                          Sleep(2000);
                                                          exit(0);
                                                          }
                                 
                                               }//END OF BA
                                               
char payment_choice;
/*NEXT AY TATANUNGIN KUNG WHAT TYPE OF PAYMENT*/

clrscr();
do{
         setcolor(782);
  clrscr();       
cout<<"\n\n\tChoose your payment:";
cout<<"\n\t\t[1.]case\n\t\t[2.]installment\n\t\t\t->: ";

cin>>payment_choice;

if(payment_choice=='1') 
{
                        topayment = "cash";
                        cash();
                        
                        }
else if(payment_choice=='2') 
{
     topayment = "installment";
     installment();
}

}while((payment_choice !='1') && (payment_choice !='2'));











/*GENERAL OUTPUT*/
clrscr();
printing();

setcolor(527);
clrscr();

setcolor(527);
cout<<"FORM NO.1\t\t     UNIVERSITY OF THE EAST\t\t Student's copy";
gotoxy(35,2);
cout<<"caloocan";
gotoxy(17,3);
cout<<"Semester: 2nd year 2nd sem        ";
cout<<endl;
cout<<"ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ  \t\t       R E G I S T R A T I O N    F O R M                     บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\nNAME: "<<input.sn<<", "<<input.fn<<" "<<input.mn;
gotoxy(43, 8);
cout<<"STUDENT NUMBER: "<<Student_no<<endl;
cout<<"ADDRESS: "<<ad.HN<<" "<<ad.street<<" "<<ad.city<<" "<<ad.Area_code<<endl;
cout<<"COLLEGE: "<<colleges;
gotoxy(43, 10);
cout<<"COURSE: "<<COURSE<<endl;
cout<<"Year Level: 2nd year 2nd sem";


cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

int x;
for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\t\t\t\tTOTAL "<<total_units<<" UNITS";
         
cout<<"\n\n\n"<<Student_no<<" "<<input.sn<<", "<<input.fn<<" "<<input.mn;
cout<<"\n------------------------------------------------------------------------------\n";
cout<<"MISCELLANEOUS FEES                                 TUITION      "<<total_units*500<<".00";
cout<<"\nAudio Visual Fee              129.00               MISC.FEE     4961.00";
cout<<"\nCultural Fee                  194.00               LAB.FEE      "<<labfee;    //INPUT THE LAB FEE HERE!;   
cout<<"\nDawn                           50.00               INST.FEE     330.00";
cout<<"\nEnergy Fee                    827.00               ---------------------";
cout<<"\nGuidance & Counselling Fee    129.00               TOTAL         "<<total_payment;
cout<<"\nHealth Service Fee            324.00                                 ";
cout<<"\nInternet Fee                1,172.00               *** INSTALLMENT *** ";//this is just for installment muna
cout<<"\nLibrary Fee                 1,134.00       ";
cout<<"\nPublication Fee               129.00";
cout<<"\nRegistration Fee              389.00";
cout<<"\nSports Development Fee        454.00";
cout<<"\nStudent Council Funds          30.00"<<endl<<endl;
         
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n";
cout<<"บ";s(10);cout<<"   I am fully aware that installment payments not paid on due date shall be  ";s(527);cout<<"บ"<<endl;
cout<<"บ";s(10);cout<<" subject to additional surcharge per university policy. I acknowledge that I ";s(527);cout<<"บ"<<endl;
cout<<"บ";s(10);cout<<"will be officially enrolled only after I have paid the required amount upon  ";s(527);cout<<"บ"<<endl;
cout<<"บ";s(10);cout<<"registration. I have read and understood the DECLARATION on the other side of";s(527);cout<<"บ"<<endl;
cout<<"บ";s(10);cout<<"this registration form. I hereby agree that if payment is made after the due ";s(527);cout<<"บ"<<endl;
cout<<"บ";s(10);cout<<"date, I shall have undergo the entire ENROLLMENT process again. Payments     ";s(527);cout<<"บ"<<endl;
cout<<"บ";s(10);cout<<"made after the due date will be considered as advance deposit for tuition    ";s(527);cout<<"บ"<<endl;
cout<<"บ";s(10);cout<<"                                                                             ";s(527);cout<<"บ"<<endl;
cout<<"บ";s(10);cout<<"                                                                             ";s(527);cout<<"บ"<<endl;
cout<<"บ";s(10);cout<<"VALID ONLY IF PAYMENT IS MADE ON OR BEFORE-->: December 21, 2012 | Sig:      ";s(527);cout<<"บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;      
gotoxy(0,0);

getch();

/***************************PROMPT THE USER IF HE WANTS TO SAVE THE FORM*********************/
clrscr();
setcolor(95);
cout<<"\nDo You Want To Save Your Registration Form[y/n]:                               ";
cout<<"\n";
char glenn;
cin>>glenn; //for asking
if(glenn=='y')
{

//***********************WRITE FILE FUNCTION***********************//
clrscr();
cout<<"WRITING DATA TO FILE...\n";
Sleep(1000);
cout<<"\nDATA HAS BEEN SAVED!";

  ofstream c;
  c.open ("Registration Form.rtf");//INSTEAD OF INTO TXT, I CHOSE RTF.
 //**WRITING METHOD**//
 
 c<<"*/-------------------------------------------------------------------------*/";
gotoxy(24,2);
c<<"                      --REGISTRATION FORM--";
gotoxy(0,3);
cout<<"\n*/-------------------------------------------------------------------------*/";

c<<"\nNAME: "<<input.sn<<", "<<input.fn<<" "<<input.mn;;
c<<"STUDENT NUMBER: "<<Student_no<<endl<<endl;
c<<"OLLEGE: "<<colleges<<endl<<endl;
c<<"COURSE: "<<COURSE<<endl<<endl;
c<<"ADDRESS: "<<ad.HN<<" "<<ad.street<<" "<<endl<<endl;
c<<"\t   "<<ad.city<<" "<<ad.Area_code<<endl<<endl;
c<<"Year Level: "<<yr<<endl<<endl<<endl<<endl;



for(x=0; x<=20; x++)
{
         
         c<<total_subj[x];
         }
c<<"\n\t\t\t\tTOTAL "<<total_units<<" UNITS";
         


gotoxy(0,100);
c<<"*/-------------------------------------------------------------------------*/";
gotoxy(24,21);
c<<"                     --END OF REGISTRATION FORM--";
gotoxy(0,22);
c<<"\n*/-------------------------------------------------------------------------*/";
 
 
 
 //**END**//
 c.close();
Sleep(1000);
exit(0);
  
}

else
{
    
 clrscr();
 system("color 0A");
    cout<<"THANK YOU FOR USING THIS PROGRAM!";
    Sleep(1500);
    exit(0);   
}


}//end of this whole file








/***********************************COMPUTATIONS!!!!!!!!!!!!!!!******************************/


void cash (void)
{
     total_payment = labfee +  (total_units * 500) + 4732 *0.95;

 }
 
 
 
 
void installment (void)
{getch();
 }
