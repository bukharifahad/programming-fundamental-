#include<iostream>
#include<string>
using namespace std;
int main()
{
 string admin,user,adminuser,adminpass,name,interest,del,block,blockn,usern,puser,userid,rname,massage;
 int num,pass,digit,password,userpass,dmsg;
 cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
 cout<<"Social Messaging Application";
 cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
 cout<<"admin"<<endl;
 cout<<"user"<<endl;
 cout<<"exit"<<endl;
 cin>>admin;
 
 if(admin=="admin")
 {
    cout<<"enter admin user"<<endl;
    cin>>adminuser;
    cout<<"enter admin pass"<<endl;
    cin>>adminpass;

    if(adminuser=="adminuser" && adminpass=="adminpass")
    {
      cout<<"* * * * * * * * *  * * * *  * * *  * * * * * *";
      cout<<"admin DASHBOARD";
      cout<<"* * * * * * * * * * * * * * * * * * * * * * *";
      cout<<"press 1 to add user"<<endl;
      cout<<"press 2 to delete user"<<endl;
      cout<<"press 3 to block/unblock user"<<endl;
      cout<<"press 4 to view user"<<endl;
      cout<<"press 5 to search user"<<endl;
      cout<<"press 6 to reset user password"<<endl;
      cout<<"press 7 to logout"<<endl;
      cout<<"enter number as per admin choice: ";
      cin>>num;

      switch(num)
      {
        case 1:
        {
          cout<<"ali 147 cricket"<<endl;
          cout<<"zain 567 badmenten"<<endl;
          cout<<"enter name of new user: ";
          cin>>name;
          cout<<"enter password: ";
          cin>>pass;
          cout<<"enter interest: ";
          cin>>interest;
          cout<<"All list of users:"<<endl;
          cout<<"ali 147 cricket"<<endl;
          cout<<"zain 567 badmenten"<<endl;
          cout<<name<<" "<<pass<<" "<<interest<<endl;
          break;
        }
        case 2:
        {
          cout<<"ali 147 cricket"<<endl;
          cout<<"zain 567 badmenten"<<endl;
          cout<<"enter name to delete the user: ";
          cin>>del;
          if(del=="ali")
          {
            cout<<"zain 567 badmenten"<<endl; 
            cout<<"ali user is deleted";
          }
          else if(del=="zain")
          {
            cout<<"ali 147 cricket"<<endl;
            cout<<"zain user is deleted";
          }
          else
            cout<<"no user found";
          break;
        }
        case 3:
        {
          cout<<"ali 147 cricket"<<endl;
          cout<<"zain 567 badmenten"<<endl;
          cout<<"enter block/unblock if u want to block/unblock someone: ";
          cin>>block;
          if(block=="block")
          {
            cout<<"enter name to block user: ";
            cin>>blockn;
            if(blockn=="ali")
            {
              cout<<"zain 567 badmenten"<<endl;
              cout<<"ali is blocked now";
            }
            else if(blockn=="zain")
            {
              cout<<"ali 147 cricket"<<endl;
              cout<<"zain is blocked now";
            }
            else 
              cout<<"no user found";
          }
          else if(block=="unblock")
          {
            cout<<"zain is blocked"<<endl;
            cout<<"ali is also blocked"<<endl;
            cout<<"enter 1 if you want to unblock ali"<<endl;
            cout<<"enter 2 if you want to unblock zain"<<endl;
            cout<<"enter 3 if you want to unblock both user"<<endl;
            cin>>digit;
            if(digit==1)
            {
              cout<<"ali is unblocked"<<endl<<"ali 147 cricket"<<endl;
              cout<<"zain is not unblocked";
            } 
            else if(digit==2)
            {
              cout<<"zain is unblocked"<<endl<<"zain 567 badmenten"<<endl;
              cout<<"ali is not unblocked";
            }
            else if(digit==3)
            {
              cout<<"ali is unblocked"<<endl<<"ali 147 cricket"<<endl;
              cout<<"zain is unblocked"<<endl<<"zain 567 badmenten";        
            }
            else 
              cout<<"no user found";
          }
          break;
        }
        case 4:
        {
          cout<<"user view list:"<<endl;
          cout<<"ali 147 cricket"<<endl;
          cout<<"zain 567 badmenten"<<endl;
          cout<<"usman 789 cricket";
          break;
        }
        case 5:
        {
          cout<<"enter the name to search the user: ";
          cin>>usern;
          if(usern=="ali")
            cout<<"ali 147 cricket";
          else if(usern=="zain")
            cout<<"zain 567 badmenten";
          else if(usern=="usman")
            cout<<"usman 789 cricket";
          else
            cout<<"user not found";
          break; 
        }
        case 6:
        {
          cout<<"ali 147 cricket"<<endl;
          cout<<"zain 567 badmenten"<<endl;
          cout<<"usman 789 cricket"<<endl;
          cout<<"enter name of user to reset password: ";
          cin>>puser;
          if(puser=="ali")
          {
            cout<<"enter new password: ";
            cin>>password;
            cout<<"ali "<<password<<" cricket";
          }
          else if(puser=="zain")
          {
            cout<<"enter new password: ";
            cin>>password;
            cout<<"zain "<<password<<" badmenten";
          }
          else if(puser=="usman")
          {
            cout<<"enter new password: ";
            cin>>password;
            cout<<"usman "<<password<<" cricket";
          }
          else 
            cout<<"user not found";
          break;
        }
        case 7:
          cout<<"admin logout";
          break;
      }
    }
    else
    {
      cout<<"invalid admin credentials";
    }
 }

 else if(admin=="user")
{
   cout<<"_ _ _ _ _ __ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ";
   cout<<"USER INTERFACE";
   cout<<"_ _ _ __ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;

   cout<<"enter user id name: ";
   cin>>userid;
   cout<<"enter user pass: ";
   cin>>userpass;

   if(userid=="ali" && userpass==147 || userid=="zain" && userpass==567 || userid=="usman" && userpass==789)
   {
     cout<<"* * * * * * * * *  * * * *  * * *  * * * * * *";
     cout<<"USER DASHBOARD";
     cout<<"* * * * * * * * * * * * * * * * * * * * * * *"<<endl;
     cout<<"press 1 to send message"<<endl;
     cout<<"press 2 to view inbox"<<endl;
     cout<<"press 3 to delete message"<<endl;
     cout<<"enter number as per user choice: ";
     cin>>num;
     cin.ignore();
     switch(num)
     {
       case 1:
       {
         cout<<"enter reciever name: ";
         cin>>rname;
         cin.ignore();
         cout<<"enter message: ";
         getline(cin, massage);
         cout<<"Message sent successfully!"<<endl;
         cout<<"Message content: "<<massage<<endl;
         break;
       }

       case 2:
       {
         cout<<"_-_-_-INBOX_-_-_-_-"<<endl;
         cout<<"FROM : ALI"<<endl;
         cout<<"Message  : Hello! how are you"<<endl;
         cout<<"FROM : UMAIR"<<endl;
         cout<<"Message  : Hello to the system"<<endl;
         break;
       }

       case 3:
       {
         cout<<"FROM : ALI"<<endl;
         cout<<"Message  : Hello! how are you"<<endl;
         cout<<"FROM : UMAIR"<<endl;
         cout<<"Message  : Hello to the system"<<endl;
         cout<<"enter the number of message you want to delete (1 or 2): ";
         cin>>dmsg;
         if(dmsg==1)
         {
           cout<<"ALI's message deleted"<<endl;
           cout<<"Remaining:"<<endl;
           cout<<"FROM : UMAIR"<<endl;
           cout<<"Message: Hello to the system"<<endl;
         }
         else if(dmsg==2)
         {
           cout<<"UMAIR's message deleted"<<endl;
           cout<<"Remaining:"<<endl;
           cout<<"FROM : ALI"<<endl;
           cout<<"Message: Hello! how are you"<<endl;
         }
         else 
           cout<<"no message deleted";
         break;
       }

       default:
         cout<<"Invalid option!";
     }
   }
   else
   {
     cout<<"Invalid user credentials";
   }
 }
 else if(admin=="exit")
 {
   cout<<"Program closed.";
 }
 else
 {
   cout<<"Invalid input";
 }
}
