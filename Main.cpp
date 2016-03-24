/*
 * Enrollment System Log
 * A project by:
 *         Jonas Villa,
 *         Zarene Bigay,
 *         Lorenzo Cruz.
*/



#include <conio.h>
#include <iostream.h>
#include <fstream.h>
#include <windows.h>
#include "DesignFunctions.cpp"
#include "Loading.cpp"
#include "ListOfPassers.cpp"


void welcomeDesign(void);
void process(void);
void searchForStudent(void);


using namespace std;

main(){
      
welcomeDesign();
  
} 
/********************************HEADER***********************************/  

void welcomeDesign(void){
     
clrscr();
setcolor(10);
cout<<"\t        __. ,      .       ,   .___         ..            , \n";
cout<<"\t       (__ -+-. . _| _ ._ -+-  [__ ._ ._. _ ||._ _  _ ._ -+-\n";
cout<<"\t       .__) | (_|(_](/,[ ) |   [___[ )[  (_)||[ | )(/,[ ) | \n\n";
                                                     
cout<<"\t                           .       \n";                         
cout<<"\t                           |    _  _      \n";                  
cout<<"\t                           |___(_)(_] \n";                      
cout<<"\t                                  ._| \n";        


setcolor(3);
cout<<"\n\n\t\t\tProgram by:\n\t\t\t\tJonas Villa, \n\t\t\t\tZarene Bigay, \n\t\t\t\tLorenzo Cruz\n";
setcolor(5);
cout<<"\n\t\t\tPress Any Key to Continue...                            ";
setcolor(15);
char x;
x = getche();
if(x=='x') exit(0);

clrscr();
setcolor(11);
cout<<"\n\n\n\n\n\t\t\t\tPlease wait!...";
cout<<"\t\t\t";
gotoxy(3,9);
printf("\t\t\tÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
gotoxy(3,10);
printf("\t\t\tº°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°º");
gotoxy(3,11);
printf("\t\t\tÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");

for(int k=25;k<58;k++)
{
Sleep(10);
gotoxy(k,10);
printf("±");
}
Sleep(10);
searchForStudent();

getch();
}
