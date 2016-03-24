void printing(void)
{
     
     for(int x=0; x<=100; x++)
     {
        
     Sleep(30);
     gotoxy(26,8);
     setcolor(782);
     cout<<"\tPlease Wait...";
     gotoxy(36,10);
     setcolor(9);
     cout<<x<<"%";
        
  
     }
     
clrscr();
setcolor(782);
gotoxy(26,8);
     cout<<"REGISTRATION FORM PRINTED!";
     gotoxy(36,10);
     cout<<"100%";
     
gotoxy(27,15);
cout<<"press any key to continue";
getch();
setcolor(799);
}
