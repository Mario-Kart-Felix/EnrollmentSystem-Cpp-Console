//COURSES FILE
void instructions(void)
{
setcolor(2);
cout<<"INSTRUCTIONS: Press x to finish. Type the Subject code to input a subject\nand type del<space>subject code to delete a subject...";
}
void compeng(void)
{
clrscr();
gotoxy(24,2);
cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 6);
cout<<"Year Level and Semester: ";
cin.getline(yr, 100);
//***END OF YEAR LEVEL****//

//yung mga declarations nasa process para global

//***END OF YEAR LEVEL****//

clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(140);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

strcpy(subj[0],"\n\n\t\t\tFIRST YEAR / FIRST SEMESTER\n\n");

strcpy(subj[1],"  []CHN 111     General Chemistry                           	    4\n");
strcpy(subj[2],"  []ESN 111	Engineering Drawing  				    1\n");
strcpy(subj[3],"  []EN  111 	Communication & Study Skills in English...          3\n");
strcpy(subj[4],"  []ESN 110	Engineering Orientation           	       	    1\n");
strcpy(subj[5],"  []FI  101     Sining ng Komunikasyon                              3\n");
strcpy(subj[6],"  []MAN 111     College Algegbra  			            3\n");
strcpy(subj[7],"  []PEN 1 	Physical Education 1			 	    2\n");
strcpy(subj[8],"  []MAN 112 	Plane & Spherical Trigonometry                      3\n");
strcpy(subj[9],"\n\t\t\t\t\t\t       Total Units: 21");//not yet included

int x;
for(x=0; x<=9; x++)
{
         cout<<subj[x];
         }
cout<<endl<<endl;
instructions();     
setcolor(527);    
for(x=0; x<=12; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "CHN 111")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject CHN 111 is already included!\n";
                                                }
                                                else{
                         subj_array[0]=true;
                         total_units=total_units+4;
                         strcpy(total_subj[1],subj[1]);
                         cout<<"\nSubject Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "ESN 111")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject ESN 111 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+1;
                         strcpy(total_subj[2],subj[2]);
                         cout<<"\nSubject ESN 111 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "EN 111")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject EN 111 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],subj[3]);
     cout<<"\nSubject EN 111 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "ESN 110")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject ESN 110 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+1;
     strcpy(total_subj[4],subj[4]);
     cout<<"\nSubject EN 111 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "FI 101")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject FI 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],subj[5]);
     cout<<"\nSubject FI 101 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "MAN 111")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject MAN 111 is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],subj[6]);
     cout<<"\nSubject FI 101 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "PEN 1")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject PEN 1 is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+2;
     strcpy(total_subj[7],subj[7]);
     cout<<"\nSubject PEN 1 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "MAN 112")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject MAN 112 is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+3;
     strcpy(total_subj[8],subj[8]);
     cout<<"\nSubject MAN 112 Successfully included!";
     }
}  






/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del CHN 111")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject CHN 111 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-4;
     strcpy(total_subj[1],"");
     cout<<"\nSubject CHN 111 Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del ESN 111")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject ESN 111 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-1;
                         strcpy(total_subj[2],subj[2]);
                         cout<<"\nSubject ESN 111 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del EN 111")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject EN 111 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],subj[3]);
     cout<<"\nSubject EN 111 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del ESN 110")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject ESN 110 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-1;
     strcpy(total_subj[4],subj[4]);
     cout<<"\nSubject EN 111 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del FI 101")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject FI 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],subj[5]);
     cout<<"\nSubject FI 101 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del MAN 111")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject MAN 111 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],subj[6]);
     cout<<"\nSubject FI 101 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del PEN 1")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject PEN 1 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-2;
     strcpy(total_subj[7],subj[7]);
     cout<<"\nSubject PEN 1 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del MAN 112")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject MAN 112 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-3;
     strcpy(total_subj[8],subj[8]);
     cout<<"\nSubject MAN 112 Successfully deleted!";
     }
}  

/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all


/*OUTPUT NG COMPENG*/
clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }

cout<<"\n\n\nPress a key to continue...";









getch();
}/*END OF COMPENG*/









//PARA PO ITO SA SECOND SEM


void compeng_firstyear_secondsem(void) /*HINDI PA TOH TAPOS SA ISANG SUBJ*/
{
clrscr();

cout<<"STUDENT INFORMATION LOG IN";
cout<<"Year Level and Semester: "; //garbage codes
cin.getline(yr, 100);

clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tFIRST YEAR / FIRST SEMESTER\n\n";

cout<<"  []CHN 111         General Chemistry                              Credited\n";
cout<<"  []ESN 111	    Engineering Drawing  		           Credited\n";
cout<<"  []EN  111 	    Communication & Study Skills in English...     Credited\n";
cout<<"  []ESN 110	    Engineering Orientation           	     	   Credited\n";
cout<<"  []FI  101         Sining ng Komunikasyon                         Credited\n";
cout<<"  []MAN 111         College Algegbra  			           Credited\n";
cout<<"  []PEN 1 	    Physical Education 1			   Credited\n";
cout<<"  []MAN 112 	    Plane & Spherical Trigonometry                 Credited\n";
cout<<"\n\t\t\t\t\t\t       Total Units: 21";




cout<<"\n";
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

strcpy(subj[0],"\n\n\t\t\tFIRST YEAR / SECOND SEMESTER\n\n");

strcpy(subj[1],"  []CPN 121     Computer Hardware Fundamentals                      1\n");
strcpy(subj[2],"  []EN  112	College Reading and Writing		            3\n");
strcpy(subj[3],"  []ESN 121 	Advanced Algebra                                    2\n");
strcpy(subj[4],"  []FI  113	Kasanayan sa Malikhaing Pagpapahayag (Retorika)     3\n");
strcpy(subj[5],"  []HU  101     Art Appreciation                                    3\n");
strcpy(subj[6],"  []MAN 122     Analytic Geometry  			            2\n");
strcpy(subj[7],"  []MAN 123 	Solid Mensuration			 	    2\n");
strcpy(subj[8],"  []NSTP  1 	National Service Training Program 1                 3\n");
strcpy(subj[9],"  []PEN   2 	Physical Education 2                                2\n");
strcpy(subj[10],"  []PHN 121 	General Physics 1: Mechanics, Heat & Sound          4\n");               
strcpy(subj[11],"\n\t\t\t\t\t\t       Total Units: 22");//not yet included






int x;
for(x=0; x<=11; x++)
{
         cout<<subj[x];//output subjs
         }
         
cout<<endl<<endl;
instructions();     
setcolor(527);    
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "CPN 121")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject CPN 121 is already included!\n";
                                             }
                                             else{
                         subj_array[0]=true;
                         total_units=total_units+1;
                         strcpy(total_subj[1],"  []CPN 121     Computer Hardware Fundamentals                      1\n");
                         cout<<"\nSubject CPN 121 Successfully Included!\n";
                         }
                                                }
                                                
else if(strcmp(subj_input[x], "EN 112")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject EN  112is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2],"  []EN  112	College Reading and Writing		            3\n");
                         cout<<"\nSubject EN  112 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "ESN 121")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject ESN 121 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+2;
     strcpy(total_subj[3],"  []ESN 121 	Advanced Algebra                                    2\n");
     cout<<"\nSubject ESN 121 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "FI 113")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject FI  113 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []FI  113	Kasanayan sa Malikhaing Pagpapahayag (Retorika)     3\n");
     cout<<"\nSubject FI  113 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "FI 101")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject FI 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []HU  101     Art Appreciation                                    3\n");
     cout<<"\nSubject FI 101 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "MAN 122")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject MAN 122 is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+2;
     strcpy(total_subj[6],"  []MAN 122     Analytic Geometry  			            2\n");
     cout<<"\nSubject MAN 122 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "MAN 123")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject MAN 123 is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+2;
     strcpy(total_subj[7],"  []MAN 123 	Solid Mensuration			 	    2\n");
     cout<<"\nSubject MAN 123 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "NSTP 1")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject NSTP  1 is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+0;
     strcpy(total_subj[8],"  []NSTP 1 	National Service Training Program 1                 3\n");
     cout<<"\nSubject NSTP  1 Successfully included!";
     }
}  





else if(strcmp(subj_input[x], "PEN 2")==0)
{
     if(subj_array[8]==true)
                         {
                                                cout<<"\nSubject PEN   2 is already included!\n";
                                                 }
      else{                                         
     subj_array[8]=true;
     total_units=total_units+2;
     strcpy(total_subj[9],"  []PEN   2 	Physical Education 2                                2\n");
     cout<<"\nSubject PEN   2 Successfully included!";
     }
}  

else if(strcmp(subj_input[x], "PHN 121 ")==0)
{
     if(subj_array[8]==true)
                         {
                                                cout<<"\nSubject PHN 121  is already included!\n";
                                                 }
      else{                                         
     subj_array[8]=true;
     total_units=total_units+4;
     strcpy(total_subj[9],"  []PHN 121 	General Physics 1: Mechanics, Heat & Sound          4\n");
     cout<<"\nSubject PHN 121  Successfully included!";
     }
}  
/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del CPN 121")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject CPN 121 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-1;
     strcpy(total_subj[1],"");
     cout<<"\nSubject CPN 121 Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del EN 112")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject EN  112 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject EN  112 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del ESN 121")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject ESN 121  is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject ESN 121 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del FI 113")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject FI  113 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject FI  113 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del HU 101")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject HU  101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject HU  101 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del MAN 122")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject MAN 122 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-2;
     strcpy(total_subj[6],"");
     cout<<"\nSubject MAN 122 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del MAN 123")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject MAN 123 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-2;
     strcpy(total_subj[7],subj[7]);
     cout<<"\nSubject MAN 123 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del NSTP 1")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject NSTP  1 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-0;
     strcpy(total_subj[8],"");
     cout<<"\nSubject NSTP  1 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del PEN 2")==0)
{
     if(subj_array[8]==false)
                         {
                                                cout<<"\nSubject PEN   2 is not yetincluded!\n";
                                                 }
      else{                                         
     subj_array[8]=false;
     total_units=total_units+0;
     strcpy(total_subj[9],"");
     cout<<"\nSubject PEN   2 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del PHN 121")==0)
{
     if(subj_array[9]==false)
                         {
                                                cout<<"\nSubject PHN 121 is not yet included\n";
                                                 }
      else{                                         
     subj_array[9]=false;
     total_units=total_units-4;
     strcpy(total_subj[10],"");
     cout<<"\nSubject PHN 121 Successfully deleted!";
     }
}  

/*END OF DELETED SECTION*/
else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;
cout<<"\n\n\t\t\tFIRST YEAR / SECOND SEMESTER\n\n";
for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";









getch();
}/*END OF COMPENG*1st year 2nd sem*/


void compeng_secondyear_firstsem(void)
{
     clrscr();
gotoxy(24,2);
cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 6);
cout<<"Year Level and Semester: "; /*GARBAGE CODES*/
cin.getline(yr, 100);
     
     clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tFIRST YEAR / FIRST SEMESTER\n\n";

cout<<"  []CHN 111         General Chemistry                              Credited\n";
cout<<"  []ESN 111	    Engineering Drawing  		           Credited\n";
cout<<"  []EN  111 	    Communication & Study Skills in English...     Credited\n";
cout<<"  []ESN 110	    Engineering Orientation           	     	   Credited\n";
cout<<"  []FI  101         Sining ng Komunikasyon                         Credited\n";
cout<<"  []MAN 111         College Algegbra  			           Credited\n";
cout<<"  []PEN 1 	    Physical Education 1			   Credited\n";
cout<<"  []MAN 112 	    Plane & Spherical Trigonometry                 Credited\n";
cout<<"\n\t\t\t\t\t\t       Total Units: 21";




cout<<"\n";
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

strcpy(subj[0],"\n\n\t\t\tFIRST YEAR / SECOND SEMESTER\n\n");

strcpy(subj[1],"  []CPN 121     Computer Hardware Fundamentals                      Credited\n");
strcpy(subj[2],"  []EN  112	College Reading and Writing		            Credited\n");
strcpy(subj[3],"  []ESN 121 	Advanced Algebra                                    Credited\n");
strcpy(subj[4],"  []FI  113	Kasanayan sa Malikhaing Pagpapahayag (Retorika)     Credited\n");
strcpy(subj[5],"  []HU  101     Art Appreciation                                    Credited\n");
strcpy(subj[6],"  []MAN 122     Analytic Geometry  			            Credited\n");
strcpy(subj[7],"  []MAN 123 	Solid Mensuration			 	    Credited\n");
strcpy(subj[8],"  []NSTP  1 	National Service Training Program 1                 Credited\n");
strcpy(subj[9],"  []PEN   2 	Physical Education 2                                Credited\n");
strcpy(subj[10],"  []PHN 121 	General Physics 1: Mechanics, Heat & Sound          Credited\n");               
strcpy(subj[11],"\n\t\t\t\t\t\t       Total Units: 22");//not yet included


int x;

for(x=0; x<=11; x++)
{
         cout<<subj[x];//output subjs
         }


setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / FIRST SEMESTER\n\n";
cout<<"  []CPN 211         Discrete Mathematics                             3\n";
cout<<"  []EN 113	    Technical and Research Report Writing            3\n";
cout<<"  []ESN 211	    Computer Fundamentals and Programming\t     2\n";
cout<<"  []MAN 211	    Differential Calculus          	     	     4\n";
cout<<"  []NSTP 2           National Service Training Program 2       \t     3\n";
cout<<"  []PEN 3           Physical Education 3\t\t   \t     2\n";
cout<<"  []PHN 211 	    General Physics 2: Electricity...\t\t     4\n";
cout<<"  []PS 112 	    Politics and Governance...\t\t\t     3\n";
cout<<"  []PSY 101 	    General Psychology\t\t\t\t     3\n";
cout<<"\n\t\t\t\t\t\t       Total Units: 27";
strcpy(total_subj[0], "\n\n\t\t\tSECOND YEAR / FIRST SEMESTER\n\n");


/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    

for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "CPN 211")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject CPN 211 is already included!\n";
                                                }
                                                else{
                         subj_array[0]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[1],"  []CPN 211         Discrete Mathematics                             3\n");
                         cout<<"\nSubject CPN 211 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "EN 113")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject EN 113 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2],"  []EN 113	    Technical and Research Report Writing            3\n");
                         cout<<"\nSubject EN 113 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "ESN 211")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject ESN 211 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+2;
     strcpy(total_subj[3],"  []ESN 211	    Computer Fundamentals and Programming\t     2\n");
     cout<<"\nSubject ESN 211 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "MAN 211")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject MAN 211 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+4;
     strcpy(total_subj[4],"  []MAN 211	    Differential Calculus          	     	     4\n");
     cout<<"\nSubject MAN 211 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "NSTP 2")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject NSTP 2 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+0;
     strcpy(total_subj[5],"  []NSTP2           National Service Training Program 2       \t     3\n");
     cout<<"\nSubject NSTP 2 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "PEN 3")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject PEN 3  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+2;
     strcpy(total_subj[6],"  []PEN 3           Physical Education 3\t\t   \t     2\n");
     cout<<"\nSubject PEN 3  Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "PHN 211")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject PHN 211  is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+4;
     strcpy(total_subj[7],"  []PHN 211 	    General Physics 2: Electricity...\t\t     4\n");
     cout<<"\nSubject PHN 211  Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "PS 112")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject PS 112  is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+3;
     strcpy(total_subj[8],"  []PS 112 	    Politics and Governance...\t\t\t     3\n");
     cout<<"\nSubject PS 112  Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "PSY 101")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject PSY 101  is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+3;
     strcpy(total_subj[8],"  []PSY 101 	    General Psychology\t\t\t\t     3\n");
     cout<<"\nSubject PSY 101  Successfully included!";
     }
}  


/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del CPN 211")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject CPN 211 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-3;
     strcpy(total_subj[1],"");
     cout<<"\nSubject CPN 211 Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del EN 113")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject EN 113 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject EN 113 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del ESN 211")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject ESN 211 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-2;
     strcpy(total_subj[3],"");
     cout<<"\nSubject ESN 211 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del MAN 211")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject MAN 211 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-4;
     strcpy(total_subj[4],"");
     cout<<"\nSubject MAN 211 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del NSTP 2")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject NSTP 2 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-0;
     strcpy(total_subj[5],"");
     cout<<"\nSubject NSTP 2 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del PEN 3")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject PEN 3 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-2;
     strcpy(total_subj[6],"");
     cout<<"\nSubject PEN 3 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del PHN 211")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject PHN 211 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-4;
     strcpy(total_subj[7],"");
     cout<<"\nSubject PHN 211 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del PS 112")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject PS 112 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-3;
     strcpy(total_subj[8],"");
     cout<<"\nSubject PS 112 Successfully deleted!";
     }
}  

/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";









getch();
}/*END OF COMPENG 2nd year 1st sem*/




void compeng_secondyear_secondsem(void)
{
     clrscr();
gotoxy(24,2);
cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 6);
cout<<"Year Level and Semester: ";//garbages
cin.getline(yr, 100);
     clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tFIRST YEAR / FIRST SEMESTER\n\n";

cout<<"  []CHN 111         General Chemistry                              Credited\n";
cout<<"  []ESN 111	    Engineering Drawing  		           Credited\n";
cout<<"  []EN  111 	    Communication & Study Skills in English...     Credited\n";
cout<<"  []ESN 110	    Engineering Orientation           	     	   Credited\n";
cout<<"  []FI  101         Sining ng Komunikasyon                         Credited\n";
cout<<"  []MAN 111         College Algegbra  			           Credited\n";
cout<<"  []PEN 1 	    Physical Education 1			   Credited\n";
cout<<"  []MAN 112 	    Plane & Spherical Trigonometry                 Credited\n";
cout<<"\n\t\t\t\t\t\t       Total Units: 21";




cout<<"\n";
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

strcpy(subj[0],"\n\n\t\t\tFIRST YEAR / SECOND SEMESTER\n\n");

strcpy(subj[1],"  []CPN 121     Computer Hardware Fundamentals                      Credited\n");
strcpy(subj[2],"  []EN  112	College Reading and Writing		            Credited\n");
strcpy(subj[3],"  []ESN 121 	Advanced Algebra                                    Credited\n");
strcpy(subj[4],"  []FI  113	Kasanayan sa Malikhaing Pagpapahayag (Retorika)     Credited\n");
strcpy(subj[5],"  []HU  101     Art Appreciation                                    Credited\n");
strcpy(subj[6],"  []MAN 122     Analytic Geometry  			            Credited\n");
strcpy(subj[7],"  []MAN 123 	Solid Mensuration			 	    Credited\n");
strcpy(subj[8],"  []NSTP  1 	National Service Training Program 1                 Credited\n");
strcpy(subj[9],"  []PEN   2 	Physical Education 2                                Credited\n");
strcpy(subj[10],"  []PHN 121 	General Physics 1: Mechanics, Heat & Sound          Credited\n");               
strcpy(subj[11],"\n\t\t\t\t\t\t       Total Units: 22");//not yet included



int x;
for(x=0; x<=11; x++)
{
         cout<<subj[x];//output subjs
         }


setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / FIRST SEMESTER\n\n";
cout<<"  []CPN 211         Discrete Mathematics                             Credited\n";
cout<<"  []EN 113	    Technical and Research Report Writing            Credited\n";
cout<<"  []ESN 211	    Computer Fundamentals and Programming\t     Credited\n";
cout<<"  []MAN 211	    Differential Calculus          	     	     Credited\n";
cout<<"  []NSTP 2          National Service Training Program 2       \t     Credited\n";

cout<<"  []PHN 211 	    General Physics 2: Electricity...\t\t     Credited\n";
cout<<"  []PS 112 	    Politics and Governance...\t\t\t     Credited\n";
cout<<"  []PSY 101 	    General Psychology\t\t\t\t     Credited\n";
cout<<"\n\t\t\t\t\t\t       Total Units: 27";
strcpy(total_subj[0], "\n\n\t\t\tSECOND YEAR / FIRST SEMESTER\n\n");



setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";
cout<<"  [] MAN 221         Integral Calculus                      \t     4\n";
cout<<"  [] CPN 221         Data Structures and Algorithm          \t     3\n";
cout<<"  [] CPN 222         Data Structures and Algorithm(Lab)     \t     1\n";
cout<<"  [] ESN 221         Probability and Statistics             \t     3\n";
cout<<"  [] EC 111          Principle of Economics                 \t     3\n";
cout<<"  [] PHI 203         Fundamentals of Logic and Ethics       \t     3\n";
cout<<"  [] HI 101          Philippine History and Public Service    \t     3\n";
cout<<"  [] HI 324          Life and Works of Rizal                \t     3\n";
cout<<"  [] PEN 4           Physical Education 4\t\t   \t     2\n";
cout<<"\n\t\t\t\t\t\t       Total Units: 25";
strcpy(total_subj[0], "\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n");


/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "MAN 221")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject MAN 221 is already included!\n";
                                                }
                                                else{
                         subj_array[0]=true;
                         total_units=total_units+4;
                         strcpy(total_subj[1],"  [] MAN 221         Integral Calculus                      \t     4\n");
                         cout<<"\nSubject MAN 221 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "CPN 221")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject CPN 221 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2],"  [] CPN 221         Data Structures and Algorithm          \t     3\n");
                         cout<<"\nSubject CPN 221 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "CPN 222")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject CPN 222 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+1;
     labfee=labfee+1453;
     strcpy(total_subj[3],"  [] CPN 222         Data Structures and Algorithm(Lab)     \t     1\n");
     cout<<"\nSubject CPN 222 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "ESN 221")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject ESN 221 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  [] ESN 221         Probability and Statistics             \t     3\n");
     cout<<"\nSubject ESN 221 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "EC 111")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject EC 111 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  [] EC 111          Principle of Economics                 \t     3\n");
     cout<<"\nSubject EC 111 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "PHI 203")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject PHI 203  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  [] PHI 203         Fundamentals of Logic and Ethics       \t     3\n");
     cout<<"\nSubject PHI 203  Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "HI 101")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject HI 101  is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+3;
     strcpy(total_subj[7],"  [] HI 101          Philippine History and Public Service    \t     3\n");
     cout<<"\nSubject HI 101  Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "HI 324")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject HI 324  is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+3;
     strcpy(total_subj[8],"  [] HI 324          Life and Works of Rizal                \t     3\n");
     cout<<"\nSubject HI 324  Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[8]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[8]=true;
     total_units=total_units+2;
     strcpy(total_subj[9],"  [] PEN 4           Physical Education 4\t\t   \t     2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  


/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del MAN 221")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject MAN 221 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-4;
     strcpy(total_subj[1],"");
     cout<<"\nSubject MAN 221 Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del CPN 221")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject CPN 221 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject CPN 221 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del CPN 222")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject CPN 222 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-1;
     strcpy(total_subj[3],"");
     cout<<"\nSubject CPN 222 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del ESN 221")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject ESN 221 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject ESN 221 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del EC 111")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject EC 111 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject EC 111 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del PHI 203")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject PHI 203 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject PHI 203 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del HI 101")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject HI 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-3;
     strcpy(total_subj[7],"");
     cout<<"\nSubject HI 101 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del HI 324")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject HI 324 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-3;
     strcpy(total_subj[8],"");
     cout<<"\nSubject HI 324 Successfully deleted!";
     }
}  

else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[8]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[8]=false;
     total_units=total_units-2;
     strcpy(total_subj[9],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  
/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";









getch();
}/*END OF COMPENG 2nd year 2nd sem*/






/*****************************
*****************
**********IT SECTION ***************
*************************************/


void it_secondyear_secondsem(void)
{
  
     clrscr();
gotoxy(24,2);
cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 6);
cout<<"Year Level and Semester: ";//garbages
cin.getline(yr, 100);

clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";

               cout << "  []DBMS 1		Database Mgt. Systems 1		\t     3\n";
               cout << "  []HASOP		Hardware Software and Peripherals\t     3\n";
               cout << "  []P&QIT		Productivity and Quality in IT	\t     3\n";
               cout << "  []PROG 3		Computer Programming		\t     3\n";
               cout << "  []SADNP		System Analysis, Designs and Prototype \t     3\n";
               cout << "  []SICT 1		Spec ICT Course 1		\t     3\n";
               cout << "  []HI 324		Life and Works of Rizal		\t     3\n";
               cout << "  []PEN 4		Physical Education 4		\t     2\n";
               cout << "\t						             __\n"; 
cout<<"\n\t\t\t\t\t\t       Total Units: 21";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    

int x;
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "DBMS 1")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject DBMS 1 is already included!\n";
                                                }
                                                else{
                         subj_array[0]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[1],"  []DBMS 1		Database Mgt. Systems 1		\t     3\n");
                         cout<<"\nSubject DBMS 1 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "HASOP")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject HASOP is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2],"  []HASOP		Hardware Software and Peripherals\t     3\n");
                         cout<<"\nSubject HASOP Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "P&QIT")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject P&QIT is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []P&QIT		Productivity and Quality in IT	\t     3\n");
     cout<<"\nSubject P&QIT Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "PROG 3")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject PROG 3 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []PROG 3		Computer Programming		\t     3\n");
     cout<<"\nSubject PROG 3 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "SADNP")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject SADNP is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []SADNP		System Analysis, Designs and Prototype \t     3\n");
     cout<<"\nSubject SADNP Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "SICT 1")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject SICT 1  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []SICT 1		Spec ICT Course 1		\t     3\n");
     cout<<"\nSubject SICT 1  Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "HI 324")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject HI 324  is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+3;
     strcpy(total_subj[7],"  []HI 324		Life and Works of Rizal		\t     3\n");
     cout<<"\nSubject HI 101  Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+2;
     strcpy(total_subj[8],"  []PEN 4               Physical Education 4\t\t   \t     2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  


/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del HASOP")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject HASOP is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-3;
     strcpy(total_subj[1],"");
     cout<<"\nSubject HASOP Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del P&QIT")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject P&QIT is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject P&QIT Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del PROG 3")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject PROG 3 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject PROG 3 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del SADNP")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject SADNP is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject SADNP Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del DBMS 1")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject DBMS 1 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject DBMS 1 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del SICT 1")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject SICT 1 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject SICT 1 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del HI 324")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject HI 324 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-3;
     strcpy(total_subj[7],"");
     cout<<"\nSubject HI 324 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-2;
     strcpy(total_subj[8],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  
/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}/*it_secondyear_secondsem();*/









/************THIS IS FOR THE ME SECTION****************/

void me_secondyear_secondsem(void)
{
       clrscr();
gotoxy(24,2);
cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 6);
cout<<"Year Level and Semester: ";//garbages
cin.getline(yr, 100);

     clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";

               cout << "  []MAN 221		Integral Calculus		      \t     4\n";
               cout << "  []EEN 220		Basic Electrical Engineering           \t     3\n";
               cout << "  []ESN 221		Probability and Stats		      \t     3\n";
               cout << "  []PHI 203		Fundamentals of Logic		      \t     3\n";
               cout << "  []HI 101		Philipine History		      \t     3\n";
               cout << "  []HI 324		Life and Works of Rizal		      \t     3\n";
               cout << "  []PEN 4		Physical Education 4		      \t     2\n";
               cout << "\t						             __\n"; 
cout<<"\n\t\t\t\t\t\t       Total Units: 21";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
int x;
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "MAN 221")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject MAN 221 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+4;
                         strcpy(total_subj[1],"  []MAN 221		Integral Calculus		      \t     4\n");
                         cout<<"\nSubject MAN 221 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "EEN 220")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject EEN 220 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2],"  []EEN 220		Basic Electrical Engineering           \t     3\n");
                         cout<<"\nSubject EEN 220 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "ESN 221")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject ESN 221 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []ESN 221		Probability and Stats		      \t     3\n");
     cout<<"\nSubject ESN 221 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "PHI 203")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject PHI 203 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []PHI 203		Fundamentals of Logic		      \t     3\n");
     cout<<"\nSubject PHI 203 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "HI 101")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject HI 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []HI 101		Philipine History		      \t     3\n");
     cout<<"\nSubject HI 101 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "HI 324")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject HI 324  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []HI 324		Life and Works of Rizal		      \t     3\n");
     cout<<"\nSubject HI 324  Successfully included!";
     }
}  






else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+2;
     strcpy(total_subj[7],"  []PEN 4               Physical Education 4\t\t   \t     2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  


/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del MAN 221")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject MAN 221 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-4;
     strcpy(total_subj[1],"");
     cout<<"\nSubject MAN 221 Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del EEN 220")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject EEN 220 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject EEN 220 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del ESN 221")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject ESN 221 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject ESN 221 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del PHI 203")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject PHI 203 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject PHI 203 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del HI 101")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject HI 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject HI 101 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del HI 324")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject HI 324 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject HI 324 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-2;
     strcpy(total_subj[7],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  
/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";









getch();
}/*me_secondyear_secondsem();*/
   
   
/************THIS IS FOR THE ME SECTION****************/

void civil_secondyear_secondsem(void)
{
       clrscr();
gotoxy(24,2);
cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 6);
cout<<"Year Level and Semester: ";//garbages
cin.getline(yr, 100);

     clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";

               cout << "  []MAN 221		Integral Calculus		      \t     4\n";
               cout << "  []EEN 220		Basic Electrical Engineering           \t     3\n";
               cout << "  []ESN 221		Probability and Stats		      \t     3\n";
               cout << "  []PHI 203		Fundamentals of Logic		      \t     3\n";
               cout << "  []HI 101		Philipine History		      \t     3\n";
               cout << "  []HI 324		Life and Works of Rizal		      \t     3\n";
               cout << "  []PEN 4		Physical Education 4		      \t     2\n";
               cout << "\t						             __\n"; 
cout<<"\n\t\t\t\t\t\t       Total Units: 21";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
int x;
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "MAN 221")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject MAN 221 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+4;
                         strcpy(total_subj[1],"  []MAN 221		Integral Calculus		      \t     4\n");
                         cout<<"\nSubject MAN 221 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "EEN 220")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject EEN 220 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2],"  []EEN 220		Basic Electrical Engineering           \t     3\n");
                         cout<<"\nSubject EEN 220 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "ESN 221")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject ESN 221 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []ESN 221		Probability and Stats		      \t     3\n");
     cout<<"\nSubject ESN 221 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "PHI 203")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject PHI 203 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []PHI 203		Fundamentals of Logic		      \t     3\n");
     cout<<"\nSubject PHI 203 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "HI 101")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject HI 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []HI 101		Philipine History		      \t     3\n");
     cout<<"\nSubject HI 101 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "HI 324")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject HI 324  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []HI 324		Life and Works of Rizal		      \t     3\n");
     cout<<"\nSubject HI 324  Successfully included!";
     }
}  






else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+2;
     strcpy(total_subj[9],"  []PEN 4               Physical Education 4\t\t   \t     2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  


/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del MAN 221")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject MAN 221 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-4;
     strcpy(total_subj[1],"");
     cout<<"\nSubject MAN 221 Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del EEN 220")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject EEN 220 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject EEN 220 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del ESN 221")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject ESN 221 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject ESN 221 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del PHI 203")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject PHI 203 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject PHI 203 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del HI 101")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject HI 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject HI 101 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del HI 324")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject HI 324 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject HI 324 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-2;
     strcpy(total_subj[7],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  
/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";









getch();
}/*civil_secondyear_secondsem();*/
   


void ee_secondyear_secondsem(void)
{
       clrscr();
gotoxy(24,2);
cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 6);
cout<<"Year Level and Semester: ";//garbages
cin.getline(yr, 100);

     clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";

               cout << "  []MAN 221		Integral Calculus		      \t     4\n";
               cout << "  []EEN 220		Basic Electrical Engineering           \t     3\n";
               cout << "  []ESN 221		Probability and Stats		      \t     3\n";
               cout << "  []PHI 203		Fundamentals of Logic		      \t     3\n";
               cout << "  []HI 101		Philipine History		      \t     3\n";
               cout << "  []HI 324		Life and Works of Rizal		      \t     3\n";
               cout << "  []PEN 4		Physical Education 4		      \t     2\n";
               cout << "\t						             __\n"; 
cout<<"\n\t\t\t\t\t\t       Total Units: 21";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
int x;
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "MAN 221")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject MAN 221 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+4;
                         strcpy(total_subj[1],"  []MAN 221		Integral Calculus		      \t     4\n");
                         cout<<"\nSubject MAN 221 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "EEN 220")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject EEN 220 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2],"  []EEN 220		Basic Electrical Engineering           \t     3\n");
                         cout<<"\nSubject EEN 220 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "ESN 221")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject ESN 221 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []ESN 221		Probability and Stats		      \t     3\n");
     cout<<"\nSubject ESN 221 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "PHI 203")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject PHI 203 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []PHI 203		Fundamentals of Logic		      \t     3\n");
     cout<<"\nSubject PHI 203 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "HI 101")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject HI 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []HI 101		Philipine History		      \t     3\n");
     cout<<"\nSubject HI 101 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "HI 324")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject HI 324  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []HI 324		Life and Works of Rizal		      \t     3\n");
     cout<<"\nSubject HI 324  Successfully included!";
     }
}  






else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+2;
     strcpy(total_subj[9],"  []PEN 4               Physical Education 4\t\t   \t     2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  


/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del MAN 221")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject MAN 221 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-4;
     strcpy(total_subj[1],"");
     cout<<"\nSubject MAN 221 Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del EEN 220")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject EEN 220 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject EEN 220 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del ESN 221")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject ESN 221 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject ESN 221 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del PHI 203")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject PHI 203 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject PHI 203 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del HI 101")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject HI 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject HI 101 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del HI 324")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject HI 324 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject HI 324 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-2;
     strcpy(total_subj[7],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  
/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";









getch();
}/*ee_secondyear_secondsem();*/
   
   
void ece_secondyear_secondsem(void)
{
       clrscr();
gotoxy(24,2);
cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 6);
cout<<"Year Level and Semester: ";//garbages
cin.getline(yr, 100);

     clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";

               cout << "  []MAN 221		Integral Calculus		      \t     4\n";
               cout << "  []EEN 220		Basic Electrical Engineering           \t     3\n";
               cout << "  []ESN 221		Probability and Stats		      \t     3\n";
               cout << "  []PHI 203		Fundamentals of Logic		      \t     3\n";
               cout << "  []HI 101		Philipine History		      \t     3\n";
               cout << "  []HI 324		Life and Works of Rizal		      \t     3\n";
               cout << "  []PEN 4		Physical Education 4		      \t     2\n";
               cout << "\t						             __\n"; 
cout<<"\n\t\t\t\t\t\t       Total Units: 21";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
int x;
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "MAN 221")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject MAN 221 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+4;
                         strcpy(total_subj[1],"  []MAN 221		Integral Calculus		      \t     4\n");
                         cout<<"\nSubject MAN 221 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "EEN 220")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject EEN 220 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2],"  []EEN 220		Basic Electrical Engineering           \t     3\n");
                         cout<<"\nSubject EEN 220 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "ESN 221")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject ESN 221 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []ESN 221		Probability and Stats		      \t     3\n");
     cout<<"\nSubject ESN 221 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "PHI 203")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject PHI 203 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []PHI 203		Fundamentals of Logic		      \t     3\n");
     cout<<"\nSubject PHI 203 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "HI 101")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject HI 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []HI 101		Philipine History		      \t     3\n");
     cout<<"\nSubject HI 101 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "HI 324")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject HI 324  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []HI 324		Life and Works of Rizal		      \t     3\n");
     cout<<"\nSubject HI 324  Successfully included!";
     }
}  






else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+2;
     strcpy(total_subj[7],"  []PEN 4               Physical Education 4\t\t   \t     2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  


/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del MAN 221")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject MAN 221 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-4;
     strcpy(total_subj[1],"");
     cout<<"\nSubject MAN 221 Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del EEN 220")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject EEN 220 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject EEN 220 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del ESN 221")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject ESN 221 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject ESN 221 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del PHI 203")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject PHI 203 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject PHI 203 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del HI 101")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject HI 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject HI 101 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del HI 324")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject HI 324 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject HI 324 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-2;
     strcpy(total_subj[7],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  
/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";









getch();
}/*ECE_secondyear_secondsem();*/




/*COMSCIE SECTION*/


void comsci_secondyear_secondsem()
{
          clrscr();
gotoxy(24,2);
cout<<"STUDENT INFORMATION LOG IN";
gotoxy(24, 6);
cout<<"Year Level and Semester: ";//garbages
cin.getline(yr, 100);

     clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";

               cout << "  []ANADA		Analysis and Design Algo		    3\n";
               cout << "  []DBMS 1		Database Mgt. Systems			    3\n";
               cout << "  []PROG 3		Comp. Prog. Course 3			    3\n";
               cout << "  []WEBPG 2		Web Design and the Internet 2		    3\n";
               cout << "  []MA 214		Analysis for IT			            3\n";
               cout << "  []STAT 111	        Basic Stat			            3\n";
               cout << "  []EMNST		Elective Math, Nat Sci or Tech	            3\n";
               cout << "  []PEN 4		Physical Education 4			    2\n";
               cout << "\t						           __\n"; 
cout<<"\n\t\t\t\t\t\t       Total Units: 23";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    int x;
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "ANADA")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject ANADA is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[1],"  []ANADA		Analysis and Design Algo		    3\n");
                         cout<<"\nSubject ANADA Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "DBMS 1")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject DBMS 1 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2], "  []DBMS 1		Database Mgt. Systems			    3\n");
                         cout<<"\nSubject DBMS 1 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "PROG 3")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject PROG 3 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []PROG 3		Comp. Prog. Course 3			    3\n");
     cout<<"\nSubject PROG 3 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "WEBPG 2")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject WEBPG 2 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []WEBPG 2		Web Design and the Internet 2		    3\n");
     cout<<"\nSubject WEBPG 2 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "MA 214")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject MA 214 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []MA 214		Analysis for IT			            3\n");
     cout<<"\nSubject MA 214 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "STAT 111")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject STAT 111  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []STAT 111	        Basic Stat			            3\n");
     cout<<"\nSubject STAT 111  Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "EMNST")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject EMNST   is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+3;
     strcpy(total_subj[7],"  []EMNST		Elective Math, Nat Sci or Tech	            3\n");
     cout<<"\nSubject EMNST  Successfully included!";
     }
}  

else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+2;
     strcpy(total_subj[8],"  []PEN 4               Physical Education 4\t\t   \t     2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  


/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del ANADA")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject ANADA is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-3;
     strcpy(total_subj[1],"");
     cout<<"\nSubject ANADA Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del DBMS 1")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject DBMS 1 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject DBMS 1 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del PROG 3")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject PROG 3 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject PROG 3 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del WEBPG 2")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject WEBPG 2 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject WEBPG 2 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del MA 214")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject MA 214 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject MA 214 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del STAT 111")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject STAT 111 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject STAT 111 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del EMNST")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject EMNST is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-3;
     strcpy(total_subj[7],"");
     cout<<"\nSubject EMNST Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-2;
     strcpy(total_subj[8], "");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  
/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}/*comsci_firstyear_firstsem();*/













/******************BEGINNING OF THE FA COLLEGE *****/

void id_secondyear_secondsem(void)
{
     cout<<"STUDENT INFORMATION LOG IN";
cout<<"Year Level and Semester: "; //garbage codes
cin.getline(yr, 100);

     
     clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";

     cout << "  []INT 221\t   Interior Design 2\t\t\t\t    3" << endl;
     cout << "  []INT 222\t   Interior Style 2\t\t\t\t    3" << endl;
     cout << "  []EN 113\t   Technical and Research Writing\t\t    3"  << endl;
     cout << "  []HA 225\t   History of Art 2\t\t\t\t    3" << endl;
     cout << "  []PSY 101\t   General Psychology\t\t\t\t    3" << endl;
     cout << "  []NS 102\t   The Biological Sciences\t\t\t    3" << endl;
     cout << "  []PHI 203\t   Fundamentals of Logic and Ethics(w/Values Ed)    3" << endl;
     cout << "  []PEN 4\t   Physical Education\t\t\t\t    2";
               cout << "\t						                            _\n"; 
cout<<"\n\t\t\t\t\t\t       Total Units: 23";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
int x;
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "INT 221")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject INT 221 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[1],"  []INT 221\t   Interior Design 2\t\t\t\t    3\n");
                         cout<<"\nSubject INT 221 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "INT 222")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject INT 222 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2], "  []INT 222\t   Interior Style 2\t\t\t\t    3\n");
                         cout<<"\nSubject INT 222 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "EN 113")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject EN 113 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []EN 113\t   Technical and Research Writing\t\t    3\n");
     cout<<"\nSubject EN 113 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "HA 225")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject HA 225 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []HA 225\t   History of Art 2\t\t\t\t    3\n");
     cout<<"\nSubject HA 225 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "PSY 101")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject PSY 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []PSY 101\t   General Psychology\t\t\t\t    3\n");
     cout<<"\nSubject PSY 101 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "NS 102")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject NS 102  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []NS 102\t   The Biological Sciences\t\t\t    3\n");
     cout<<"\nSubject NS 102  Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "PHI 203")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject PHI 203   is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+3;
     strcpy(total_subj[7],"  []PHI 203\t   Fundamentals of Logic and Ethics(w/Values Ed)    3\n");
     cout<<"\nSubject PHI 203  Successfully included!";
     }
}  

else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+2;
     strcpy(total_subj[8],"  []PEN 4               Physical Education 4\t\t   \t     2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  


/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del INT 221")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject INT 221 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-3;
     strcpy(total_subj[1],"");
     cout<<"\nSubject INT 221 Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del INT 222")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject INT 222 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject INT 222 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del EN 113")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject EN 113 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject EN 113 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del HA 225")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject HA 225 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject HA 225 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del PSY 101")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject PSY 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject PSY 101 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del NS 102")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject NS 102 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject NS 102 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del PHI 203")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject PHI 203 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-3;
     strcpy(total_subj[7],"");
     cout<<"\nSubject PHI 203 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-2;
     strcpy(total_subj[8], "");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  
/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}/*id_firstyear_firstsem();*/




/*MAJOR IN INTERIOR DESIGN*/

void majorininteriordesign_secondyear_secondsem()
{
   cout<<"STUDENT INFORMATION LOG IN";
cout<<"Year Level and Semester: "; //garbage codes
cin.getline(yr, 100);

     clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";

               cout << "  []EC 111		Principles of Economics			    3\n";
               cout << "  []HA 225		History of Art 2			    3\n";
               cout << "  []HA 324		Life and Works of Rizal			    3\n";
               cout << "  []INT 221		Interior Design 2			    3\n";
               cout << "  []INT 222		Interior Style 2			    3\n";
               cout << "  []NS 102		The Biological Sciences		       	    3\n";
               cout << "  []PSY 101		General Psychology 3			    3\n";
               cout << "  []SS 111		Society and Culture			    3\n";
               cout << "  []PEN 4		Physical Education 4		            2\n";
               cout << "\t\t\t\t			            _\n"; 
cout<<"\n\t\t\t\t\t\t       Total Units: 26";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
int x;
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "EC 111")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject EC 111 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[1],"  []EC 111		Principles of Economics			    3\n");
                         cout<<"\nSubject INT 221 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "HA 225")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject HA 225 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2], "  []HA 225		History of Art 2			    3\n");
                         cout<<"\nSubject HA 225 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "HA 324")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject HA 324 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []HA 324		Life and Works of Rizal			    3\n");
     cout<<"\nSubject EN 113 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "INT 221")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject INT 221 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []INT 221		Interior Design 2			    3\n");
     cout<<"\nSubject HA 225 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "INT 222")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject INT 222 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []INT 222		Interior Style 2			    3\n");
     cout<<"\nSubject INT 222 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "NS 102")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject NS 102  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []NS 102		The Biological Sciences		       	    3\n");
     cout<<"\nSubject NS 102  Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "PSY 101")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject PSY 101   is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+3;
     strcpy(total_subj[7],"  []PSY 101		General Psychology 3			    3\n");
     cout<<"\nSubject PSY 101  Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "SS 111")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject SS 111   is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+3;
     strcpy(total_subj[8],"  []SS 111		Society and Culture			    3\n");
     cout<<"\nSubject PSY 101  Successfully included!";
     }
}  

else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[8]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[8]=true;
     total_units=total_units+2;
     strcpy(total_subj[9],"  []PEN 4		Physical Education 4		            2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  


/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del EC 111")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject EC 111 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-3;
     strcpy(total_subj[1],"");
     cout<<"\nSubject EC 111 Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del HA 225")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject HA 225 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject HA 225 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del HA 324")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject HA 324 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject HA 324 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del INT 221")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject INT 221 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject INT 221 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del INT 222")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject INT 222 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject INT 222 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del NS 102")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject NS 102 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject NS 102 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del PSY 101")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject PSY 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-3;
     strcpy(total_subj[7],"");
     cout<<"\nSubject PSY 101 Successfully deleted!";
     }
}  

else if(strcmp(subj_input[x], "del SS 111")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject SS 111 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-3;
     strcpy(total_subj[8], "");
     cout<<"\nSubject SS 111 Successfully deleted!";
     }
}  

else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[8]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[8]=false;
     total_units=total_units-2;
     strcpy(total_subj[9], "");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  
/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}/*major in interior design*/



void majorinpainting_secondyear_secondsem(void)
{
     

cout<<"STUDENT INFORMATION LOG IN";
cout<<"Year Level and Semester: "; //garbage codes
cin.getline(yr, 100);

int x;

clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";

cout << "  []HA 225\t\tHistory of Art 2\t\t\t\t3\n";
      cout << "  []FA 221\t\tComposition\t\t\t\t\t2\n";
      cout << "  []FA 222\t\tPainting\t\t\t\t\t2\n";
      cout << "  []EN 113\t\tTechnical & Research Report Writing\t\t3\n";
      cout << "  []NS 101\t\tThe Physical Sciences\t\t\t\t3\n";
      cout << "  []PHI 203\t\tFundamentals of Logic and Ethics(w/Values Ed)   3\n";
      cout << "  []LIT 202/PAN 202\tLiterature of the World/Panitikan ng Mundo      3\n";
      cout << "  []PEN 4\t\tPhysical Education\t\t\t\t2\n";
               cout << "\t\t\t\t			                _\n"; 
cout<<"\n\t\t\t\t\t\t       Total Units: 26";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "FA 221")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject FA 221 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[1],"  []FA 221\t\tComposition\t\t\t\t\t2\n");
                         cout<<"\nSubject FA 221 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "FA 222")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject FA 222 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2], "  []FA 222\t\tPainting\t\t\t\t\t2\n");
                         cout<<"\nSubject HA 225 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "EN 113")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject EN 113 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []EN 113\t\tTechnical & Research Report Writing\t\t3\n");
     cout<<"\nSubject EN 113 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "NS 101")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject NS 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []NS 101\t\tThe Physical Sciences\t\t\t\t3\n");
     cout<<"\nSubject NS 101 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "PHI 203")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject PHI 203 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []PHI 203\t\tFundamentals of Logic and Ethics(w/Values Ed)   3\n");
     cout<<"\nSubject PHI 203 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "LIT 202/PAN 202")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject LIT 202/PAN 202  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []LIT 202/PAN 202\tLiterature of the World/Panitikan ng Mundo      3\n");
     cout<<"\nSubject LIT 202/PAN 202  Successfully included!";
     }
}  







else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+2;
     strcpy(total_subj[7],"  []PEN 4\t\tPhysical Education\t\t\t\t2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  
     
     
     

else if(strcmp(subj_input[x], "HA 225")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject HA 225   is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+3;
     strcpy(total_subj[8],"  []HA 225\t\tHistory of Art 2\t\t\t\t3\n");
     cout<<"\nSubject HA 225  Successfully included!";
     }
}  
     


/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del FA 221")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject FA 221 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-3;
     strcpy(total_subj[1],"");
     cout<<"\nSubject FA 221 Successfully deleted!";
     }
}     
     

else if(strcmp(subj_input[x], "del FA 222")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject FA 222 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject FA 222 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del EN 113")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject EN 113 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject EN 113 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del NS 101")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject NS 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject NS 101 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del PHI 203")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject PHI 203 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject PHI 203 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del LIT 202/PAN 202")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject LIT 202/PAN 202 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject LIT 202/PAN 202 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-2;
     strcpy(total_subj[7],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  

else if(strcmp(subj_input[x], "HA 225")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject HA 225   is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-2;
     strcpy(total_subj[8],"");
     cout<<"\nSubject HA 225  Successfully DELETED!";
     }
}  

/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}/*PAINTING*/


void AA_secondyear_secondsem()
{
cout<<"STUDENT INFORMATION LOG IN";
cout<<"Year Level and Semester: "; //garbage codes
cin.getline(yr, 100);

int x;
clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";

               cout << "  []ADA 222              Layout 2                                   3\n";
               cout << "  []AD.A 223             Illustration 2                             3\n";
               cout << "  []FI 112               Pagbasa at Pagsulat                        3\n";
               cout << "  []HA 225               History of Art 2                           3\n";
               cout << "  []LIT 202              Literature                                 3\n";
               cout << "  []MA 101               College Algebra                            3\n";
               cout << "  []NS 101               The Physical Sciences                      3\n";
               cout << "  []PEN 4                Physical Education 4                       2\n";
               cout << "\t\t\t\t			            _\n"; 
cout<<"\n\t\t\t\t\t\t       Total Units: 23";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "ADA 222")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject ADA 222 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[1], "  []ADA 222              Layout 2                                   3\n");
                         cout<<"\nSubject ADA 222 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "AD.A 223")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject AD.A 223 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2], "  []AD.A 223             Illustration 2                             3\n");
                         cout<<"\nSubject HA 225 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "FI 112")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject FI 112 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []FI 112               Pagbasa at Pagsulat                        3\n");
     cout<<"\nSubject FI 112 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "HA 225")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject HA 225 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []HA 225               History of Art 2                           3\n");
     cout<<"\nSubject HA 225 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "LIT 202")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject LIT 202 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []LIT 202              Literature                                 3\n");
     cout<<"\nSubject LIT 202 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "MA 101")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject MA 101  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []MA 101               College Algebra                            3\n");
     cout<<"\nSubject MA 101  Successfully included!";
     }
}  







else if(strcmp(subj_input[x], "NS 101")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject NS 101    is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+3;
     strcpy(total_subj[7],"  []NS 101               The Physical Sciences                      3\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  

else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+2;
     strcpy(total_subj[8],"  []PEN 4                 Physical Education 4                       2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  

/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del ADA 222")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject ADA 222  is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-3;
     strcpy(total_subj[1],"");
     cout<<"\nSubject ADA 222  Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del ADA 223")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject ADA 223 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject ADA 223 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del FI 112")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject FI 112 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject FI 112 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del HA 225")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject HA 225 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject HA 225 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del LIT 202")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject LIT 202 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject LIT 202 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "MA 101")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject MA 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject MA 101 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del NS 101")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject NS 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-3;
     strcpy(total_subj[7],"");
     cout<<"\nSubject NS 101 Successfully deleted!";
     }
}

else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-2;
     strcpy(total_subj[8],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  

/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}/*AA*/



void archi_secondyear_secondsem()
{
  cout<<"STUDENT INFORMATION LOG IN";
cout<<"Year Level and Semester: "; //garbage codes
cin.getline(yr, 100);

int x;   
clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";

      cout << "  []ESN 312         Statics of Rigid Bodies                           3" << endl;
      cout << "  []PSY 101         Psychology                                        3" << endl;
      cout << "  []PHN 211         Gen Physics 2: Electricity,Magnetism,&Electronics 4" << endl;
      cout << "  []ARCH 101        Elementary Surveying                              3" << endl;
      cout << "  []ARCH 14         History of Architecture 2                         3" << endl;
      cout << "  []ARCH 42         Building Tech.2:Construction Drawings in Wood...  3" << endl;
      cout << "  []ARCH 46         Building Utilities 1                              3" << endl;
      cout << "  []ARCH 24         Architectural Design 4: Space Planning            3" << endl;
      cout << "  []PEN 4           Physical Education                                2" << endl;
               cout << "\t\t\t\t			              _\n"; 
cout<<"\n\t\t\t\t\t\t         Total Units: 27";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "ESN 312")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject ESN 312 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[1], "  []ESN 312         Statics of Rigid Bodies                           3\n");
                         cout<<"\nSubject ESN 312 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "PSY 101")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject PSY 101 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2], "  []PSY 101         Psychology                                        3\n");
                         cout<<"\nSubject PSY 101 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "PHN 211")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject PHN 211 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+4;
     strcpy(total_subj[3],"  []PHN 211         Gen Physics 2: Electricity,Magnetism,&Electronics 4\n");
     cout<<"\nSubject PHN 211 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "ARCH 101")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject ARCH 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []ARCH 101        Elementary Surveying                              3\n");
     cout<<"\nSubject ARCH 101 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "ARCH 14")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject ARCH 14 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []ARCH 14         History of Architecture 2                         3\n");
     cout<<"\nSubject LIT 202 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "ARCH 42")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject ARCH 42  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []ARCH 42         Building Tech.2:Construction Drawings in Wood...  3\n");
     cout<<"\nSubject ARCH 42  Successfully included!";
     }
}  







else if(strcmp(subj_input[x], "ARCH 46")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject ARCH 46    is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+3;
     strcpy(total_subj[7],"  []ARCH 46         Building Utilities 1                              3\n");
     cout<<"\nSubject ARCH 46  Successfully included!";
     }
}  

else if(strcmp(subj_input[x], "ARCH 24")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject ARCH 24    is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+3;
     strcpy(total_subj[8],"  []ARCH 24         Architectural Design 4: Space Planning            3\n");
     cout<<"\nSubject ARCH 24  Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[8]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[8]=true;
     total_units=total_units+2;
     strcpy(total_subj[9],"  []PEN 4           Physical Education                                2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  

/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del ESN 312")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject ESN 312  is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-3;
     strcpy(total_subj[1],"");
     cout<<"\nSubject ESN 312  Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del PSY 101")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject PSY 101 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject PSY 101 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del PHN 211")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject PHN 211 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-4;
     strcpy(total_subj[3],"");
     cout<<"\nSubject PHN 211 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del ARCH 101")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject ARCH 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject ARCH 101 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del ARCH 14")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject ARCH 14 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject ARCH 14 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "ARCH 42")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject ARCH 42 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject ARCH 42 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del ARCH 46")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject ARCH 46 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-3;
     strcpy(total_subj[7],"");
     cout<<"\nSubject ARCH 46 Successfully deleted!";
     }
}



else if(strcmp(subj_input[x], "del ARCH 24")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject ARCH 24 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-3;
     strcpy(total_subj[8],"");
     cout<<"\nSubject ARCH 24 Successfully deleted!";
     }
}  

else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[8]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[8]=false;
     total_units=total_units-2;
     strcpy(total_subj[9],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  

/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}/*arcjhi*/


/*****************END OF THE FA COLLEGE*****************/





/****************CAS NA!*************************/

void HRM(void)
{
     
       cout<<"STUDENT INFORMATION LOG IN";
cout<<"Year Level and Semester: "; //garbage codes
cin.getline(yr, 100);
     clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";

               cout << "  []EN 114             Comm. in Bus.                                  3\n";
               cout << "  []HRM 303            Room Div Mgt.                                  3\n";
               cout << "  []HRM 314            Wes/Inter Cuisine                              3\n";
               cout << "  []PHI 203            Logic and Ethics                               3\n";
               cout << "  []STA 111            Basic Stats                                    3\n";
               cout << "  []CO 113             Intro. to IT                                   3\n";
               cout << "  []FIN 101            Basic Principles in Finance                    3\n";
               cout << "  []PEN 4              Physical Education 4                           2\n";
               cout << "\t\t\t\t			              _\n"; 
cout<<"\n\t\t\t\t\t\t         Total Units: 23";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
int x;
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "EN 114")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject EN 114 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[1], "  []EN 114             Comm. in Bus.                                  3\n");
                         cout<<"\nSubject EN 114 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "HRM 303")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject HRM 303 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2], "  []HRM 303            Room Div Mgt.                                  3\n");
                         cout<<"\nSubject HRM 303 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "PHI 203")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject PHI 203 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []PHI 203            Logic and Ethics                               3\n");
     cout<<"\nSubject PHI 203 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "STA 111")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject STA 111 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []STA 111            Basic Stats                                    3\n");
     cout<<"\nSubject ]STA 111 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "CO 113")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject CO 113 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []CO 113             Intro. to IT                                   3\n");
     cout<<"\nSubject CO 113 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "FIN 101")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject FIN 101  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []FIN 101            Basic Principles in Finance                    3\n");
     cout<<"\nSubject FIN 101  Successfully included!";
     }
}  







else if(strcmp(subj_input[x], "HRM 314")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject HRM 314  is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+3;
     strcpy(total_subj[7],"  []HRM 314            Wes/Inter Cuisine                              3\n");
     cout<<"\nSubject HRM 314  Successfully included!";
     }
}  





else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+2;
     strcpy(total_subj[8],"  []PEN 4           Physical Education                                2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  

/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del EN 114")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject EN 114  is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-3;
     strcpy(total_subj[1],"");
     cout<<"\nSubject EN 114  Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del HRM 303")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject HRM 303 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject HRM 303 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del PHI 203")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject PHI 203 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject PHI 203 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del STA 111")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject STA 111 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject STA 111 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del CO 113")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject CO 113 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject CO 113 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "FIN 101")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject FIN 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject FIN 101 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del HRM 314")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject HRM 314 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-3;
     strcpy(total_subj[7],"");
     cout<<"\nSubject HRM 314 Successfully deleted!";
     }
}



else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-2;
     strcpy(total_subj[8],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  

/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}//H R M


void tourism_secondyear_secondsem(void)
{
     
     
   cout<<"STUDENT INFORMATION LOG IN";
cout<<"Year Level and Semester: "; //garbage codes
cin.getline(yr, 100);
     clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";

      cout << "  []EN 250         Speech Communication                               3\n";
      cout << "  []FIN 101        Basic Finance                                      3\n";
      cout << "  []BS 101         Behavioral Science Applied to Business Industry    3\n";
      cout << "  []EN 113         Technical and Research Report Writing              3\n";
      cout << "  []TOUR 107       Total Quality Management                           3\n";
      cout << "  []TOUR 108       Ecotourism                                         3\n";
      cout << "  []TOUR 109       Tourism Laws                                       3\n";
      cout << "  []PEN 4          Physical Education                                 2\n";
               cout << "\t\t\t\t			              _\n"; 
cout<<"\n\t\t\t\t\t\t         Total Units: 23";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);   
int x; 
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "EN 250")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject EN 250 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[1], "  []EN 250         Speech Communication                               3\n");
                         cout<<"\nSubject EN 250 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "FIN 101")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject FIN 101 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2], "  []FIN 101        Basic Finance                                      3\n");
                         cout<<"\nSubject HRM 303 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "BS 101")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject BS 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []BS 101         Behavioral Science Applied to Business Industry    3\n");
     cout<<"\nSubject BS 101 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "EN 113")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject EN 113 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []EN 113         Technical and Research Report Writing              3\n");
     cout<<"\nSubject EN 113 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "TOUR 107")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject TOUR 107 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []TOUR 107       Total Quality Management                           3\n");
     cout<<"\nSubject TOUR 107 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "TOUR 108")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject TOUR 108  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []TOUR 108       Ecotourism                                         3\n");
     cout<<"\nSubject TOUR 108  Successfully included!";
     }
}  







else if(strcmp(subj_input[x], "TOUR 109")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject TOUR 109  is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+3;
     strcpy(total_subj[7],"  []TOUR 109       Tourism Laws                                       3\n");
     cout<<"\nSubject TOUR 109  Successfully included!";
     }
}  





else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+2;
     strcpy(total_subj[8],"  []PEN 4          Physical Education                                 2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  

/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del EN 250")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject EN 250  is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-3;
     strcpy(total_subj[1],"");
     cout<<"\nSubject EN 250  Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del FIN 101")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubjectFIN 101 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject FIN 101 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del BS 101")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject BS 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject BS 101 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del EN 113")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject EN 113 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject EN 113 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del TOUR 107")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject TOUR 107 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject TOUR 107 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "TOUR 108")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject TOUR 108 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject TOUR 108 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del TOUR 109")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject TOUR 109 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-3;
     strcpy(total_subj[7],"");
     cout<<"\nSubject TOUR 109 Successfully deleted!";
     }
}



else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-2;
     strcpy(total_subj[8],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  

/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}//TOURISM BABEH!


void comarts_secondyear_secondsem(void)
{
       cout<<"STUDENT INFORMATION LOG IN";
cout<<"Year Level and Semester: "; //garbage codes
cin.getline(yr, 100);
     clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";

      cout << "  []EN 113            Technical and Research Report Writing    3\n";
      cout << "  []CA 213            Intro to Comm. Reseach                   3\n";
      cout << "  []CA 214            Mass Media Law and Ethics                3\n";
      cout << "  []CA 215            Advertising Principles and Theories      3\n";
      cout << "  []FI 113            Kasanayan sa Malikhaing Pagpapayahag     3\n";
      cout << "  []LIT 101/PAN 101   Literatures of the Philippines...        3\n";
      cout << "  []PEN 4             Physical Education                       2\n";
               cout << "\t\t\t\t			              _\n"; 
cout<<"\n\t\t\t\t\t\t         Total Units: 20";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    int x;
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "EN 113")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject EN 113is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[1],"  []EN 113            Technical and Research Report Writing    3\n");
                         cout<<"\nSubject EN 113 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "CA 213")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject CA 213 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2], "  []CA 213            Intro to Comm. Reseach                   3\n");
                         cout<<"\nSubject CA 213 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "CA 214")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject CA 214 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []CA 214            Mass Media Law and Ethics                3\n");
     cout<<"\nSubject CA 214 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "CA 215")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject CA 215 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []CA 215            Advertising Principles and Theories      3\n");
     cout<<"\nSubject CA 215 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "FI 113")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject FI 113 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []FI 113            Kasanayan sa Malikhaing Pagpapayahag     3\n");
     cout<<"\nSubject FI 113 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "LIT 101/PAN 101")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject LIT 101/PAN 101  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []LIT 101/PAN 101   Literatures of the Philippines...        3\n");
     cout<<"\nSubject LIT 101/PAN 101  Successfully included!";
     }
}  










else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+2;
     strcpy(total_subj[7],"  []PEN 4             Physical Education                       2\n");
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  

/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del EN 113")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject EN 113 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-3;
     strcpy(total_subj[1],"");
     cout<<"\nSubject EN 113   Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del CA 213")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject CA 213 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject CA 213 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del CA 214")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject CA 214 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject CA 214 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del CA 215")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject CA 215 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject CA 215 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del FI 113")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject FI 113 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject FI 113 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "LIT 101/PAN 101")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject LIT 101/PAN 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject LIT 101/PAN 101 Successfully deleted!";
     }
}  






else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-2;
     strcpy(total_subj[7],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  

/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}//comarts





/*****************THIS SECTION IS FOR THE BA COLLEGE &&&**********/

void BA_secondyear_secondsem(void)
{
     int x;
     
cout<<"STUDENT INFORMATION LOG IN";
cout<<"Year Level and Semester: "; //garbage codes
cin.getline(yr, 100);
     clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";


               cout << "  []FI 112               Pagbasa at Pagsulat                          3\n";
               cout << "  []HI 101               Philippine History                           3\n";
               cout << "  []BM 102               Math Analysis in Business                    3\n";
               cout << "  []AC 103               Fundamentals in Accounting 2                 3\n";
               cout << "  []CM 102               Business Comm.                               3\n";
               cout << "  []MGE 205              LABOR RELATIONS                              3\n";
               cout << "  []MGE 206              MATERIALS MANAGEMENT                         3\n";
               cout << "  []PEN 4                Physical Education 4                         2\n";

     
               cout << "\t\t\t\t			              _\n"; 
cout<<"\n\t\t\t\t\t\t         Total Units: 23";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "FI 112")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject FI 112 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[1], "  []FI 112               Pagbasa at Pagsulat                          3\n");
                         cout<<"\nSubject FI 112 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "CA 213")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject CA 213 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2],  "  []HI 101               Philippine History                           3\n");
                         cout<<"\nSubject CA 213 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "BM 102")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject BM 102 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []BM 102               Math Analysis in Business                    3\n" );
     cout<<"\nSubject BM 102 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "AC 103")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject AC 103 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []AC 103               Fundamentals in Accounting 2                 3\n" );
     cout<<"\nSubject AC 103 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "CM 102")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject CM 102 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []CM 102               Business Comm.                               3\n" );
     cout<<"\nSubject CM 102 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "MGE 205")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject MGE 205  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []MGE 205              LABOR RELATIONS                              3\n" );
     cout<<"\nSubjectMGE 205  Successfully included!";
     }
}  










else if(strcmp(subj_input[x], "MGE 206")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject MGE 206   is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+3;
     strcpy(total_subj[7],"  []MGE 206              MATERIALS MANAGEMENT                         3\n" );
     cout<<"\nSubject MGE 206  Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+2;
     strcpy(total_subj[8],"  []PEN 4                Physical Education 4                         2\n" );
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  

/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del FI 112")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject FI 112 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-3;
     strcpy(total_subj[1],"");
     cout<<"\nSubject FI 112   Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del HI 101")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject HI 101 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject HI 101 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del BM 102")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject BM 102 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject BM 102 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del AC 103")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject AC 103 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject AC 103 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del CM 102")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject CM 102 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject CM 102 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "MGE 205")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject MGE 205 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject MGE 205 Successfully deleted!";
     }
}  






else if(strcmp(subj_input[x], "del MGE 206")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject MGE 206 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-3;
     strcpy(total_subj[7],"");
     cout<<"\nSubject MGE 206 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-2;
     strcpy(total_subj[8],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  
/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}//BA!




void fm_secondyear_secondsem(void)
{
     int x;
     cout<<"STUDENT INFORMATION LOG IN"   ;
cout<<"Year Level and Semester: " ;   //garbage codes
cin.getline(yr, 100)   ;
     clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";



               cout << "  []PHI 203		Logic and Ethics                              3\n";
               cout << "  []HBO 101		Human Behavior Org                            3\n";
               cout << "  []STB 101		Business Stat with Computer                   3\n";
               cout << "  []BL 101		Law on Oblig. and Contracts                   3\n";
               cout << "  []CM 102		Business Comm.                                3\n";
               cout << "  []FM 303		Monetary Policy and Central Banking           3\n";
               cout << "  []FM 304		Credit and Col Mgt.                           3\n";
               cout << "  []BEL 1		Prescribed Elective 1                         3\n";
               cout << "  []PEN 4		Physical Education 4                          2\n";


     
               cout << "\t\t\t\t			              _\n"; 
cout<<"\n\t\t\t\t\t\t         Total Units: 26";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "PHI 203")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject PHI 203 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[1],  "  []PHI 203		Logic and Ethics                              3\n"   );
                         cout<<"\nSubject PHI 203 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "HBO 101")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject HBO 101 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2], "  []HBO 101		Human Behavior Org                            3\n"   );
                         cout<<"\nSubject HBO 101 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "STB 101")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject STB 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],"  []STB 101		Business Stat with Computer                   3\n"   );
     cout<<"\nSubject STB 101 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "BL 101")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject BL 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],"  []BL 101		Law on Oblig. and Contracts                   3\n"   );
     cout<<"\nSubject BL 101 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "CM 102")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject CM 102 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],"  []CM 102               Business Comm.                               3\n" );
     cout<<"\nSubject CM 102 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "FM 303")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject FM 303  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []FM 303		Monetary Policy and Central Banking           3\n"   );
     cout<<"\nSubject FM 303  Successfully included!";
     }
}  










else if(strcmp(subj_input[x], "FM 304")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject FM 304   is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+3;
     strcpy(total_subj[7], "  []FM 304		Credit and Col Mgt.                           3\n"   );
     cout<<"\nSubject FM 304  Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "BEL 1")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject BEL 1   is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+3;
     strcpy(total_subj[8],"  []BEL 1		Prescribed Elective 1                         3\n"   );
     cout<<"\nSubject BEL 1  Successfully included!";
     }
}  

else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[8]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[8]=true;
     total_units=total_units+2;
     strcpy(total_subj[9],"  []PEN 4		Physical Education 4                          2\n"     );
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  

/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del PHI 203")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject PHI 203 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-3;
     strcpy(total_subj[1],"");
     cout<<"\nSubject PHI 203   Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del HBO 101")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject HBO 101 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject HBO 101 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del STB 101")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject STB 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject STB 101 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del BL 101")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject BL 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject BL 101 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del CM 102")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject CM 102 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject CM 102 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "FM 303")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject FM 303 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject FM 303 Successfully deleted!";
     }
}  






else if(strcmp(subj_input[x], "del FM 304")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject FM 304 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-3;
     strcpy(total_subj[7],"");
     cout<<"\nSubject FM 304 Successfully deleted!";
     }
}  

else if(strcmp(subj_input[x], "del BEL 1")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject BEL 1 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-3;
     strcpy(total_subj[8],"");
     cout<<"\nSubject BEL 1 Successfully deleted!";
     }
}  
else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[8]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[8]=false;
     total_units=total_units-2;
     strcpy(total_subj[9],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  
/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}//MAJOR IN FINANCIAL M.





void marketingm_secondyear_secondsem(void)
{
     int x;
     cout<<"STUDENT INFORMATION LOG IN"   ;
cout<<"Year Level and Semester: "  ;  //garbage codes
cin.getline(yr, 100)   ;


clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";


               cout << "  []NS 101			Physical Sciences			3\n";
               cout << "  []AC 103N			Fundamentals of Act 2			6\n";
               cout << "  []BL 101			Law of Obligations		        3\n";
               cout << "  []CM 102			Business Comm.			        3\n";
               cout << "  []BM 102			Math Analysis in Bus.			3\n";
               cout << "  []MR 301			Methods of Research			3\n";
               cout << "  []BEL 1			Prescribed Elective 1			3\n";
               cout << "  []PEN 4			Physical Education 4			2\n";



     
               cout << "\t\t\t\t			                _\n"; 
cout<<"\n\t\t\t\t\t\t           Total Units: 26";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "NS 101")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject NS 101 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[1], "  []NS 101			Physical Sciences			3\n"    );
                         cout<<"\nSubject NS 101 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "AC 103N")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject AC 103N is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+6;
                         strcpy(total_subj[2], "  []AC 103N			Fundamentals of Act 2			6\n"    );
                         cout<<"\nSubject AC 103N Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "BL 101")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject BL 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3], "  []BL 101			Law of Obligations		        3\n"    );
     cout<<"\nSubject BL 101 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "CM 102")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject CM 102 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4], "  []CM 102			Business Comm.			        3\n"     );
     cout<<"\nSubject CM 102 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "BM 102")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject BM 102 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5], "  []BM 102			Math Analysis in Bus.			3\n"   );
     cout<<"\nSubject BM 102 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "MR 301")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject MR 301  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []MR 301			Methods of Research			3\n"     );
     cout<<"\nSubject MR 301  Successfully included!";
     }
}  










else if(strcmp(subj_input[x], "BEL 1")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject BEL 1   is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+3;
     strcpy(total_subj[7], "  []BEL 1			Prescribed Elective 1			3\n"     );
     cout<<"\nSubject BEL 1  Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+2;
     strcpy(total_subj[8],"  []PEN 4			Physical Education 4			2\n"   );
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  



/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del NS 101")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject NS 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-3;
     strcpy(total_subj[1],"");
     cout<<"\nSubject NS 101   Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del AC 103N")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject AC 103N is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-6;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject AC 103N Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del BL 101")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject BL 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject BL 101 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del CM 102")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject CM 102 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject CM 102 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del BM 102")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject BM 102 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject BM 102 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "MR 301")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject MR 301 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject MR 301 Successfully deleted!";
     }
}  






else if(strcmp(subj_input[x], "del BEL 1")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject BEL 1 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-3;
     strcpy(total_subj[7],"");
     cout<<"\nSubject BEL 1 Successfully deleted!";
     }
}  

else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-2;
     strcpy(total_subj[8],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  

/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}//MAJOR IN MARKETING



void maccounting_secondyear_secondsem(void)
{int x;

     cout<<"STUDENT INFORMATION LOG IN" ;  
cout<<"Year Level and Semester: "  ;  //garbage codes
cin.getline(yr, 100)   ;
clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";


               cout << "  []AC 4&5			Financial Acct 1			6\n";
               cout << "  []BM 101			Math on Investment			3\n";
               cout << "  []CO 115A			Comp. Practice			        1\n";
               cout << "  []EN 113			Research Writing			3\n";
               cout << "  []FI 113			Retorika			        3\n";
               cout << "  []LIT 101			Literature			        3\n";
               cout << "  []PHI 203			Logic and Ethics			3\n";
               cout << "  []PEN 4			Physical Education 4			2\n";



     
               cout << "\t\t\t\t			                _\n"; 
cout<<"\n\t\t\t\t\t\t           Total Units: 23";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "AC 4&5")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject AC 4&5 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+6;
                         strcpy(total_subj[1],"  []AC 4&5			Financial Acct 1			6\n"  );
                         cout<<"\nSubject AC 4&5 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "BM 101")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject BM 101 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2], "  []BM 101			Math on Investment			3\n"    );
                         cout<<"\nSubject BM 101 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "CO 115A")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject CO 115A is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3], "  []CO 115A			Comp. Practice			        1\n"  );
     cout<<"\nSubject CO 115A Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "EN 113")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject EN 113 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4], "  []EN 113			Research Writing			3\n" );
     cout<<"\nSubject EN 113 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "FI 113")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject FI 113 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5], "  []FI 113			Retorika			        3\n" );
     cout<<"\nSubject FI 113 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "LIT 101")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject LIT 101  is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],"  []LIT 101			Literature			        3\n"  );
     cout<<"\nSubject LIT 101  Successfully included!";
     }
}  










else if(strcmp(subj_input[x], "PHI 203")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject PHI 203   is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+3;
     strcpy(total_subj[7],  "  []PHI 203			Logic and Ethics			3\n"  );
     cout<<"\nSubject PHI 203  Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[7]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[7]=true;
     total_units=total_units+2;
     strcpy(total_subj[8],"  []PEN 4			Physical Education 4			2\n" );
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  



/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del AC 4&5")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject AC 4&5 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-6;
     strcpy(total_subj[1],"");
     cout<<"\nSubject AC 4&5   Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del BM 101")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject BM 101 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject BM 101 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del CO 115A")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject CO 115A is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject CO 115AA Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del EN 113")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject EN 113 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject EN 113 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del FI 113")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject FI 113 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject FI 113 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "LIT 101")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject LIT 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject LIT 101 Successfully deleted!";
     }
}  






else if(strcmp(subj_input[x], "del PHI 203")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject PHI 203 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-3;
     strcpy(total_subj[7],"");
     cout<<"\nSubject PHI 203 Successfully deleted!";
     }
}  

else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[7]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[7]=false;
     total_units=total_units-2;
     strcpy(total_subj[8],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  

/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}//MAJOR IN MAnagment accounting








void acas_secondyear_secondsem(void)
{int x;

cout<<"STUDENT INFORMATION LOG IN" ;  
cout<<"Year Level and Semester: " ;   //garbage codes
cin.getline(yr, 100);   
     
clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";


               cout << "  []AC 4&5			Financial Acct 1			6\n";
               cout << "  []BM 101			Math on Investment			3\n";
               cout << "  []EN 113			Research Writing			3\n";
               cout << "  []HI 101			Philippine History			3\n";
               cout << "  []MK 101			Principles of Marketing			3\n";
               cout << "  []PEN 4			Physical Education 4			2\n";



     
               cout << "\t\t\t\t			                _\n"; 
cout<<"\n\t\t\t\t\t\t           Total Units: 20";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "AC 4&5")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject AC 4&5 is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+6;
                         strcpy(total_subj[1], "  []AC 4&5			Financial Acct 1			6\n"   );
                         cout<<"\nSubject AC 4&5 Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "BM 101")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject BM 101 is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2], "  []BM 101			Math on Investment			3\n"    );
                         cout<<"\nSubject BM 101 Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "EN 113")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject EN 113 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],  "  []EN 113			Research Writing			3\n" );
     cout<<"\nSubject EN 113 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "HI 101")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject HI 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4], "  []HI 101			Philippine History			3\n"  );
     cout<<"\nSubject HI 101 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "MK 101")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject MK 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],  "  []MK 101			Principles of Marketing			3\n"  );
     cout<<"\nSubject MK 101 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject PEN 4   is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+2;
     strcpy(total_subj[6],"  []PEN 4			Physical Education 4			2\n" );
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  



/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del AC 4&5")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject AC 4&5 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-6;
     strcpy(total_subj[1],"");
     cout<<"\nSubject AC 4&5   Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del BM 101")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject BM 101 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject BM 101 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del EN 113")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject EN 113 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject CEN 113 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del HI 101")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject HI 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject HI 101 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del MK 101")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject MK 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject MK 101 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-2;
     strcpy(total_subj[6],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  

/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}//ACAS





void accnttech_secondyear_secondsem(void)
{
     int x;
     
     
     
  
cout<<"STUDENT INFORMATION LOG IN"   ;
cout<<"Year Level and Semester: "  ;  //garbage codes
cin.getline(yr, 100)   ;
   
clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";


 
               cout << "  []TAC 206N			Finance Acct 2			        6\n";
               cout << "  []ECO 112			Microeconomics			        3\n";
               cout << "  []EN 113			Research and Report Writing             3\n";
               cout << "  []FI 112			Pagbasa at pagsulat			3\n";
               cout << "  []HI 101			Philippine History			3\n";
               cout << "  []MKM 101			Principles of Marketing			3\n";
               cout << "  []PEN 4			Physical Education 4			2\n";

     
               cout << "\t\t\t\t			                _\n"; 
cout<<"\n\t\t\t\t\t\t           Total Units: 23";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "TAC 206N")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject TAC 206N is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+6;
                         strcpy(total_subj[1],  "  []TAC 206N			Finance Acct 2			        6\n"  );
                         cout<<"\nSubject TAC 206N Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "ECO 112")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject ECO 112  is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2], "  []ECO 112			Microeconomics			        3\n"   );
                         cout<<"\nSubject ECO 112  Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "EN 113")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject EN 113 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],  "  []EN 113			Research and Report Writing             3\n" );
     cout<<"\nSubject EN 113 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "FI 112")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject FI 1121 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4], "  []FI 112			Pagbasa at pagsulat			3\n" );
     cout<<"\nSubject FI 112 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "HI 101")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject HI 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],  "  []HI 101			Philippine History			3\n" );
     cout<<"\nSubject HI 101 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "MKM 101")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject MKM 101   is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6], "  []MKM 101			Principles of Marketing			3\n" );
     cout<<"\nSubject MKM 101  Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject PEN 4  is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+2;
     strcpy(total_subj[7], "  []PEN 4			Physical Education 4			2\n" );
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  



/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del TAC 206N")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject TAC 206N is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-6;
     strcpy(total_subj[1],"");
     cout<<"\nSubject TAC 206N   Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del ECO 112")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject ECO 112 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject ECO 112 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del EN 113")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject EN 113 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject CEN 113 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del FI 112")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject FI 112 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject FI 112 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del HI 101")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject HI 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject HI 101 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del MKM 101")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject MKM 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject MKM 101 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-2;
     strcpy(total_subj[7],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  

/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}//ACcnt tech
     
     
     
void accountancy_secondyear_secondsem(void)
{     int x;



cout<<"STUDENT INFORMATION LOG IN"   ;
cout<<"Year Level and Semester: "   ; //garbage codes
cin.getline(yr, 100)   ;
clrscr();
setcolor(527);
cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

cout<<"\n\n\t\t\tSECOND YEAR / SECOND SEMESTER\n\n";


 
               cout << "  []AC 206N			Finance Acct 2			        6\n";
               cout << "  []ECO 112			Microeconomics			        3\n";
               cout << "  []PS 112			Politics and Governance			3\n";
               cout << "  []FI 112			Pagbasa at pagsulat			3\n";
               cout << "  []HI 101			Philippine History			3\n";
               cout << "  []STB 101			Business Stats			        3\n";
               cout << "  []PEN 4			Physical Education 4			2\n";

     
               cout << "\t\t\t\t			                _\n"; 
cout<<"\n\t\t\t\t\t\t           Total Units: 23";




/*BINAGO KO NA PROCESS KO! HINDI NA STRCPY KUNDI DIREKTA NA!"*/
cout<<endl<<endl;
instructions();     
setcolor(527);    
for(x=0; ; x++)
{
cout<<"\nEnter the Subject Code [press x to finish]-->: ";
cin.getline(subj_input[x], 100);


if(strcmp(subj_input[x], "AC 206N")==0)
{
                         if(subj_array[0]==true)
                         {
                                                cout<<"\nSubject AC 206N is already included!\n";
                                                }
                         else{
                         subj_array[0]=true;
                         total_units=total_units+6;
                         strcpy(total_subj[1],  "  []AC 206N			Finance Acct 2			        6\n" );
                         cout<<"\nSubject AC 206N Successfully Included!\n";
                         }
                                                }
else if(strcmp(subj_input[x], "ECO 112")==0)
{
                         if(subj_array[1]==true)
                         {
                                                cout<<"\nSubject ECO 112  is already included!\n";
                                                }
                         else{
                         subj_array[1]=true;
                         total_units=total_units+3;
                         strcpy(total_subj[2], "  []ECO 112			Microeconomics			        3\n"  );
                         cout<<"\nSubject ECO 112  Successfully Included!";
                         }
                         
                                                }
                                                
                                                
else if(strcmp(subj_input[x], "PS 112")==0)
{
     if(subj_array[2]==true)
                         {
                                                cout<<"\nSubject PS 112 is already included!\n";
                                                 }
      else{                                         
     subj_array[2]=true;
     total_units=total_units+3;
     strcpy(total_subj[3],  "  []PS 112			Politics and Governance			3\n" );
     cout<<"\nSubject PS 112 Successfully included!";
     }
}  




else if(strcmp(subj_input[x], "FI 112")==0)
{
     if(subj_array[3]==true)
                         {
                                                cout<<"\nSubject FI 1121 is already included!\n";
                                                 }
      else{                                         
     subj_array[3]=true;
     total_units=total_units+3;
     strcpy(total_subj[4],  "  []FI 112			Pagbasa at pagsulat			3\n");
     cout<<"\nSubject FI 112 Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "HI 101")==0)
{
     if(subj_array[4]==true)
                         {
                                                cout<<"\nSubject HI 101 is already included!\n";
                                                 }
      else{                                         
     subj_array[4]=true;
     total_units=total_units+3;
     strcpy(total_subj[5],  "  []HI 101			Philippine History			3\n" );
     cout<<"\nSubject HI 101 Successfully included!";
     }
}  



else if(strcmp(subj_input[x], "STB 101")==0)
{
     if(subj_array[5]==true)
                         {
                                                cout<<"\nSubject STB 101   is already included!\n";
                                                 }
      else{                                         
     subj_array[5]=true;
     total_units=total_units+3;
     strcpy(total_subj[6],  "  []STB 101			Business Stats			        3\n" );
     cout<<"\nSubject STB 101  Successfully included!";
     }
}  


else if(strcmp(subj_input[x], "PEN 4")==0)
{
     if(subj_array[6]==true)
                         {
                                                cout<<"\nSubject PEN 4  is already included!\n";
                                                 }
      else{                                         
     subj_array[6]=true;
     total_units=total_units+2;
     strcpy(total_subj[7], "  []PEN 4			Physical Education 4			2\n" );
     cout<<"\nSubject PEN 4  Successfully included!";
     }
}  



/*DELETE SECTION*/

else if(strcmp(subj_input[x], "del AC 206N")==0)
{
     if(subj_array[0]==false)
                         {
                                                cout<<"\nSubject AC 206N is not yet included!\n";
                                                 }
      else{                                         
     subj_array[0]=false;
     total_units=total_units-6;
     strcpy(total_subj[1],"");
     cout<<"\nSubject AC 206N   Successfully deleted!";
     }
}     
     
     
else if(strcmp(subj_input[x], "del ECO 112")==0)
{
                         if(subj_array[1]==false)
                         {
                                                cout<<"\nSubject ECO 112 is not yet included!\n";
                                                }
                         else{
                         subj_array[1]=false;
                         total_units=total_units-3;
                         strcpy(total_subj[2],"");
                         cout<<"\nSubject ECO 112 Successfully deleted!";
                         }
                         
                                                }
else if(strcmp(subj_input[x], "del PS 112")==0)
{
     if(subj_array[2]==false)
                         {
                                                cout<<"\nSubject PS 112 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[2]=false;
     total_units=total_units-3;
     strcpy(total_subj[3],"");
     cout<<"\nSubject PS 112 Successfully deleted!";
     }
}  




else if(strcmp(subj_input[x], "del FI 112")==0)
{
     if(subj_array[3]==false)
                         {
                                                cout<<"\nSubject FI 112 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[3]=false;
     total_units=total_units-3;
     strcpy(total_subj[4],"");
     cout<<"\nSubject FI 112 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del HI 101")==0)
{
     if(subj_array[4]==false)
                         {
                                                cout<<"\nSubject HI 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[4]=false;
     total_units=total_units-3;
     strcpy(total_subj[5],"");
     cout<<"\nSubject HI 101 Successfully deleted!";
     }
}  



else if(strcmp(subj_input[x], "del STB 101")==0)
{
     if(subj_array[5]==false)
                         {
                                                cout<<"\nSubject STB 101 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[5]=false;
     total_units=total_units-3;
     strcpy(total_subj[6],"");
     cout<<"\nSubject STB 101 Successfully deleted!";
     }
}  


else if(strcmp(subj_input[x], "del PEN 4")==0)
{
     if(subj_array[6]==false)
                         {
                                                cout<<"\nSubject PEN 4 is not yet included!\n";
                                                 }
      else{                                         
     subj_array[6]=false;
     total_units=total_units-2;
     strcpy(total_subj[7],"");
     cout<<"\nSubject PEN 4 Successfully deleted!";
     }
}  

/*END OF DELETED SECTION*/


else if(strcmp(subj_input[x], "x")==0){cout<<"\nInputting Subjects done!"; Sleep(1000);break;}

else
{ cout<<"\nWrong Subject Code!\n";
}


}//end of all



clrscr();



cout<<"\nษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
setcolor(31);  cout<<"\nบ   SUBJECTCODE\t\t           DESCRIPTION\t\t\t   UNITS      บ"<<endl;
setcolor(527); cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;

for(x=0; x<=20; x++)
{
         
         cout<<total_subj[x];
         }
cout<<"\n\n\nPress a key to continue...";




getch();
}//ACcntancty
     
