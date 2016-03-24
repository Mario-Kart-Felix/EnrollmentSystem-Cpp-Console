// LIST OF STUDENTS
string listOfPassers[] = {"Meriam Santiago", "Rodrigo Duterte", "Alan Cayetano", "Jejomar Binay", "Mar Roxas", 
"Grace Poe", "Bongbong Marcos", "Antonio Trillanes", "Erap Estrada", "Jose Rizal"};

string studentNumbers[] = {"2014123456", "2015123456", "2013123456", "2012123456", "2016123456", 
"2017123456", "2018123456", "2019123456", "2020123456", "2021123456"};

string totalGrades[] = {"96", "98", "95", "96", "99", 
"94", "95", "78", "73", "87"};

string coursesAvailable[] = {
       "ECE, ME, CE", 
"ECE, ME, CE", 
"ECE, ME, CE", 
"ECE, ME, CE", 
"ECE, ME, CE", 
"ECE, ME, CE", 
"ECE, ME, CE", 
"ECE", 
"ECE", 
"ECE, CE"};

int term;

void enrollME(void);
void enrollECE(void);
void enrollCE(void);
void printEncodedSubjects(void);

char chosenCourse[100];
char studentNumber[100];

char subj[100][100];//variable[size of the string][how many subjects]
char subj_input[100][100];//for the inputs
bool subj_array[100]; //for bool. element 0 is for EN 110
int total_units=0;//computation of units
char total_subj[100][100];//for the total subjects

int searchedIndex = 0;

void searchForStudent(void)
{
     searchTop:
     clrscr();
     setcolor(2);
     cout << "\n\t\t\t\tLIST OF PASSERS:\n";
     for(int x=0; x<10; x++)
     {
         setcolor(7);
         cout<<"\t\t\t\t"<<listOfPassers[x]<<"\n";        
     }
     
     // SEARCH:
                   gotoxy(24,13);
    cout<<"Input Student Number: ";
    cin.getline(studentNumber, 100);
    
    if(strcmp(studentNumber, "2014123456")==0) searchedIndex = 0;
    else if(strcmp(studentNumber, "2015123456")==0) searchedIndex = 1;
    else if(strcmp(studentNumber, "2013123456")==0) searchedIndex = 2;
    else if(strcmp(studentNumber, "2012123456")==0) searchedIndex = 3;
    else if(strcmp(studentNumber, "2016123456")==0) searchedIndex = 4;
    else if(strcmp(studentNumber, "2017123456")==0) searchedIndex = 5;
    else if(strcmp(studentNumber, "2018123456")==0) searchedIndex = 6;
    else if(strcmp(studentNumber, "2019123456")==0) searchedIndex = 7;
    else if(strcmp(studentNumber, "2020123456")==0) searchedIndex = 8;
    else if(strcmp(studentNumber, "2021123456")==0) searchedIndex = 9;
    else {
         cout<<"\n\t\tNO STUDENT NUMBER FOUND!. Please Try again!";
         char x;
         x = getche();
         goto searchTop;
         }
    
    // FOUND SOMETHING!
    infoTop:
      
    clrscr();
     char y;
    // DISPLAY INFO!
    gotoxy(24,2);
    cout <<"   \tSTUDENT INFORMATION: \n\n";
    cout <<"\n\t\t\tNAME: "<<listOfPassers[searchedIndex]<<"\n";
    cout <<"\n\t\t\tSTUDENT NUMBER: "<<studentNumbers[searchedIndex]<<"\n";
    cout <<"\n\t\t\tTOTAL GRADE: "<<totalGrades[searchedIndex]<<"\n";
    cout <<"\n\t\t\tAVAILABLE COURSES: "<<coursesAvailable[searchedIndex]<<"\n\n\n";
    
                       gotoxy(24,13);
    cout<<"Input Chosen Course: (e.g. ECE)--> ";
    cin.getline(chosenCourse, 100);
    
    if ( (strcmp(chosenCourse, "ME")!=0) && (strcmp(chosenCourse, "CE")!=0) && (strcmp(chosenCourse, "ECE")!=0))
    {
       cout<<"\n\t\tINVALID COURSE INPUT!. Please Try again!";
       y = getche();
       goto infoTop;
    }
    
    if (searchedIndex == 7 && (strcmp(chosenCourse, "ME")==0 || strcmp(chosenCourse, "CE")==0))
    {
        cout<<"\n\t\tCOURSE NOT AVAILABLE!. Please Try again!";
       y = getche();
       goto infoTop;              
    }
    if (searchedIndex == 8 && (strcmp(chosenCourse, "ME")==0 || strcmp(chosenCourse, "CE")==0) ) 
    {
       cout<<"\n\t\tCOURSE NOT AVAILABLE!. Please Try again!";
       y = getche();
       goto infoTop; 
     }
    if (searchedIndex == 9  && strcmp(chosenCourse, "ME")==0)
        {
       cout<<"\n\t\tCOURSE NOT AVAILABLE!. Please Try again!";
       y = getche();
       goto infoTop; 
     }
     
    gotoxy(24,15);
    cout<<"Input Term No.: (e.g. 1)--> ";
     cin >> term;
     
     
     if (strcmp(chosenCourse, "CE")==0) enrollCE();
     if (strcmp(chosenCourse, "ME")==0) enrollME();
     if (strcmp(chosenCourse, "ECE")==0) enrollECE();
}

void enrollCE(void)
{
     clrscr();
     // -=----  TERM 1
 if(term)
 {
         setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(140);  cout<<"\nบ   COURSECODE\t\t           COURSE TITLE\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

strcpy(subj[0],"\n\n\t\t\tFIRST YEAR / FIRST SEMESTER\n\n");

strcpy(subj[1],"  []DRAW10W     ENGINEERING DRAWING                           	     4\n");
strcpy(subj[2],"  []ENG10	ENGLISH FOR ACADEMIC PURPOSES1                       1\n");
strcpy(subj[3],"  []HME01 	HUMANITIES ELECTIVE                                  3\n");
strcpy(subj[4],"  []MATH10-3	ALGEBRA          	       	                     1\n");
strcpy(subj[5],"  []MATH12-1    PLANE AND SPHERICAL TRIGONOMETRY                     3\n");
strcpy(subj[6],"  []NSTP1       NATIONAL SERVICE TRAINING PROGRAM1                   3\n");
strcpy(subj[7],"  []PE11-1 	PHYSICAL EDUCATION 1			 	     2\n");
strcpy(subj[8],"\n\t\t\t\t\t\t       Total Units: 18");//not yet included

int x;
for(x=0; x<=8; x++)
{
         cout<<subj[x];
         }
cout<<endl<<endl;   
setcolor(527);  

for(x=0; x<=12; x++)
{
         
         cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);

         if(strcmp(subj_input[x], "DRAW10W1")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject DRAW10W is already included!\n";
                                                }
                                                else{
                         subj_array[0]=true;
                         total_units=total_units+4;
                         strcpy(total_subj[1],"  []DRAW10W     ENGINEERING DRAWING                           	     4\n");
                         cout<<"\nSubject Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "ENG10")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject ENG10 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+1;
                         strcpy(total_subj[2],"  []ENG10	ENGLISH FOR ACADEMIC PURPOSES1                       1\n");
                         cout<<"\nSubject ESN 111 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "HME01")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject HME01 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []HME01 	HUMANITIES ELECTIVE                                  3\n");
     cout<<"\nSubject EN 111 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "MATH10-3")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject MATH10-3 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+1;
     strcpy(total_subj[4],"  []MATH10-3	ALGEBRA          	       	                     1\n");
     cout<<"\nSubject EN 111 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "MATH12-1")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject MATH12-1 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []MATH12-1    PLANE AND SPHERICAL TRIGONOMETRY                     3\n");
     cout<<"\nSubject FI 101 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "NSTP1")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject NSTP1 is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],subj[6]);
     cout<<"\nSubject FI 101 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "PE11-1")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject PE11-1 is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+2;
     strcpy(total_subj[7],subj[7]);
     cout<<"\nSubject PEN 1 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}
         
         
         }  // - FOR LOOP END
         
         
         
}// TERM1-END     

printEncodedSubjects();
          
} // VOID CE END






void enrollME(void)
{
     
     } // VOID ME END
     
     
     
     
     
     
     
void enrollECE(void)
{
     
     
}// VOID ECE END







void printEncodedSubjects(void)
{
     clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(140);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;
int x;
for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";
     
     
     }
