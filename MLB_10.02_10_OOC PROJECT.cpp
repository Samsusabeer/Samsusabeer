#include <iostream> 
#include<cstring> 
#include<string> using namespace std; 
#define SIZE 2
//Role class 
class Role{ private:
int role_id; 
char rolr_litel[20];
char role_description[];
public: role();
role(int role_id, char rolr_litel[],char role_description[]);
void addrole();
void editrolr(); 
void deleterole();
void searchrole();
void assingrole();
};

{
  
roleid = roleid; 
role_titel = role_titel; 
};
void Role::addrole() 
void Role::editrole() 
void Role::deleterole() 
void Role::searchrole() 
void Role::assingrole() 
{ 
cout << "Role_Id : " << roleid << endl; 
cout << "Role_Titel : " << roletitel << endl; 
};
//User class 
class User{ private:
int user_id; 
char user_role_id[20];
char user_name[];

char user_email[];
char user_address[];
public: user();
user(int user_id, char user_litel[],char user_description[]);
void adduser();
void edituser(); 
void deleteuser();
void searchuser();
};
//user implementation 
User::User(){} 
User::User(int user_id, string user_titel[],string user_discribtion[]) 
{ 
userid = userid; 
user_titel = user_titel; 
} 
void Role::adduser() 
void Role::edituser() 
void Role::deleteuser() 
void Role::searchuser()
{ 
cout << "User_Id : " << userid << endl; 
cout << "User_Titel : " << Usertitel << endl; 
cout << "User_Discription : " << usrdiscription << endl; 
}


//Insurance implementation 
Insurance::Insurance(){} 
Insurance::Insurance(int Insurance_id, string Insurance_amount[],int 
Insurance_number[],string Insurance_discribtion[]) 
{ 
insuranceid = insuranceid; 
insurance_amount= insurance_amount[20]; 
insurance_number=insurance_number[];
insurance_description=insurance_description[];
insurance_types=insurance_types[];
} 
void insurance::adduser() 
void insurance::edituser() 
void insurance::deleteuser() 
void insurance::searchuser() 
{ 
cout << "User_Id : " << userid << endl; 
cout << "User_Titel : " << Usertitel << endl; 
cout << "User_Discription : " << usrdiscription << endl; 
}



}; 
//Customer Class 
class customer{ private:
int customer_id; 
char customer_role_id[20];
char customer_name[];
char customer_email[];
char customer_address[];
char customer_username[];
char customer_password[];
public: customer();
customer(int user_id, char user_litel[],char user_description[],char 
customer_username[],char customer_password[]);
void addcustomer();
void editcustomer(); 
void deletecustomerr();
void searchcustomer();
};
//Permission Class
class permission{ private:

int permission_id; 
char permission_role_id[20];
char permission_title[];
char permission_module[];
char permission_description[];
public: permission();
permission(int permission_id, char permission_role_id[],char 
permission_title[],char permission_module[];,char user_description[]);
void addpermission();
void editpermission(); 
void deletepermission();
void searchpermission();
};
//Main Program int main() 
{ User u1(123456789,"Sunimal","sunimal@smail.com"); 
Flight f1(441,"1100h","SriLanka","Japan"); Reservation 
r1(47,"Asian","Business");
Payment p1(1004,140000.00); Card c1(987654321,"23/08"); Paypal 
pal1(100040008,"Personal"); 
Cart cart1; Agent a1; Report rep1; 
return 0; 
//std::cout << "Hello World!\n"; 
