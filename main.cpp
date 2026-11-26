/*Career skill Assesment*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class StudentManagement
{
    public:
    int id;
    string name;
    string department;
    string email;
    int year;

};


vector<StudentManagement>students;

void add()
{
    StudentManagement s;
    cout<<"Enter Student ID :";
    cin>>s.id;
    for(int i=0;i<students.size();i++)
    if(students[i].id==s.id)
    {
        cout<<"ROLL NUMBER ALREADY FOUND";
        return;

    }
    cin.ignore();
    cout<<"Enter Student Name :";
    getline(cin, s.name);
    cout<<"Enter year :";
    cin>>s.year;
    cin.ignore();
    cout<<"Enter Your Department :";
    getline(cin,s.department);
    cout<<"Enter Your Email: ";
    getline(cin,s.email);
    students.push_back(s);
    cout<<"STUDENT ADDED SUCCESSFULLY !!"<<endl;
}
void disp()
{
    int id;
    cout<<"Enter Student Id :";
    cin>>id;
    int found=0;
    for(int i=0;i<students.size();i++)
    {
        if(students[i].id==id)
        {
            cout<<"Name       : "<<students[i].name<<endl;
            cout<<"Department : "<<students[i].department<<endl;
            cout<<"Email      : "<<students[i].email<<endl;
            cout<<"Year       : "<<students[i].year<<endl;
            found=1;
            break;
        }
       

    }
     if(found==0)
        {
        cout<<"STUDENT NOT FOUND !"<<endl;
        }


}
void search()
{
    int id;
    cout<<"Enter Your ID :";
    cin>>id;
    int found=0;
    for(int i=0;i<students.size();i++)
    {
        if(students[i].id==id)
        {
            cout<<"Student found !!"<<endl;
            cout<<"Name       : "<<students[i].name<<endl;
            cout<<"Year       : "<<students[i].year<<endl;
            cout<<"Department : "<<students[i].department<<endl;
            cout<<"Email      : "<<students[i].email<<endl;
            found=1;
            break;

        }
    }
    if(found==0)
    {
        cout<<"STUDENT NOT FOUND !"<<endl;
    }
  
}
void update()
{

    int id;
    cout<<"Enter the student id to update the details : ";
    cin>>id;

    int found=0;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].id==id)
        {
            cin.ignore();
            cout<<"Enter the new name : ";
            
            getline(cin,students[i].name);

            cout<<"Enter the new department : ";
            
            getline(cin,students[i].department);

            cout<<"Enter the new year : ";
            cin>>students[i].year;
            cin.ignore();
            
            cout<<"Enter the new email : ";
            getline(cin,students[i].email);

            cout<<"Student Updated Successfully ! "<<endl;

            found=1;
            break;

        }  
        
    }

    if(found==0)
    {
        cout<<"Student not found ! "<<endl;
        
    }
    
}
void deletestudent()
{

    int id;
    cout<<"Enter the student id to delete : ";
    cin>>id;
    int found=0;

    for(int i=0;i<students.size();i++)
    {

        if(students[i].id==id)
        {
            students.erase(students.begin()+i);
            found=1;

            break;

        }

    }

    if(found==0)
    {
        cout<<"Student not found ! "<<endl;
    }
}


void studentmanagement()
{
    int choice1;

    do{
        cout<<"========STUDENT MANAGEMENT MENU=========="<<endl;
        cout<<"1.ADD STUDENT"<<endl;
        cout<<"2.DISPLAY STUDENT"<<endl;
        cout<<"3.SEARCH STUDENT"<<endl;
        cout<<"4.UPDATE STUDENT"<<endl;
        cout<<"5.DELETE STUDENT"<<endl;
        cout<<"6.RETURN TO HOME MENU"<<endl;
        cout<<"=========================================="<<endl;
        cout<<"Enter the choice for student management menu : ";
        cin>>choice1;

        switch(choice1)
        {
            case 1:
            cout<<"---------ADDING STUDENT------------"<<endl;
            add();
            break;

            case 2:
            cout<<"-------DISPLAYING STUDENT DETAILS -----"<<endl;
            disp();
            break;

            case 3:
            cout<<"-------SEARCHING STUDENT DETAILS---------"<<endl;
            search();
            break;

            case 4:
            cout<<"-------UPDATING STUDENT DETAILS----------"<<endl;
            update();
            break;

            case 5:
            cout<<"-------DELETING STUDENT DETAILS----------"<<endl;
            deletestudent();
            break;

            case 6:
            cout<<"You Exited From the Student Management Menu";
            break;
           
            default:
            cout<<"Invalid Option "<<endl;
        }



    }while(choice1!=6);
}
class SkillCatalogue
{
    public:
    int skillid;
    string skillname;
    string skillcategory;
    string skilldescription;

};

vector<SkillCatalogue>skills;

void addskill()
{
    SkillCatalogue sk;

    cout<<"Enter the skill id : ";
    cin>>sk.skillid;

    for(int i=0;i<skills.size();i++)
    {
        if(skills[i].skillid==sk.skillid)
        {
            cout<<"SKILL ID ALREADY EXISTS"<<endl;
            return;
        }
    }
    cin.ignore();

    cout<<"Enter the skill Name : ";
    getline(cin,sk.skillname);
    cout<<"Enter the skill Category : ";
    getline(cin,sk.skillcategory);
    cout<<"Enter the skill Description : ";
    getline(cin,sk.skilldescription);

    skills.push_back(sk);

    cout<<"SKILL ADDED SUCCESSFULLY"<<endl;


}
void displayskill()
{
    int sid;
    cout<<"Enter the id to display the skill : ";
    cin>>sid;
    int found=0;

    for(int i=0;i<skills.size();i++)
    {
        if(skills[i].skillid==sid)
        {

       cout<<"SKILL ID = "<<skills[i].skillid<<endl;
       cout<<"SKILL NAME = "<<skills[i].skillname<<endl;
       cout<<"SKILL CATEGORY = "<<skills[i].skillcategory<<endl;
       cout<<"SKILL DESCRIPTION = "<<skills[i].skilldescription<<endl;
       found=1;
       break;
        }
    }
    if(found==0)
    {
        cout<<"SKILL ID NOT FOUND "<<endl;
    }
}
void searchskill()
{
    int sid;
    cout<<"Enter the skill id to search : ";
    cin>>sid;
    int found=0;


    for(int i=0;i<skills.size();i++)
    {
        if(skills[i].skillid==sid)
        {
            cout<<"Skill Found!"<<endl;
            cout<<"Skill Name  : "<<skills[i].skillname<<endl;
            cout<<"Category    : "<<skills[i].skillcategory<<endl;
            cout<<"Description : "<<skills[i].skilldescription<<endl;
            found=1;
            break;
        }
    }
    if(found==0)

    {
          cout<<"SKILL IS NOT FOUND !"<<endl;
    }
}
void updateskill()
{

    int sid;
    cout<<"Enter the id to update skill : ";
    cin>>sid;
    int found=0;
    for(int i=0;i<skills.size();i++)
    {
    if(skills[i].skillid==sid)
    {
       cin.ignore();
       cout<<"Enter the new skill name : ";
       getline(cin,skills[i].skillname);
       cout<<"Enter the new skill category : ";
       getline(cin,skills[i].skillcategory);
       cout<<"Enter the enw skill description : ";
       getline(cin,skills[i].skilldescription);

       found=1;
       break;
    }
    }
    if(found==0)
    {
        cout<<"SKILL IS NOT FOUND ! "<<endl;

    }
}
void deleteskill()
{

    int sid;
    cout<<"Enter the id to delete the skill : ";
    cin>>sid;

    int found=0;

    for(int i=0;i<skills.size();i++)
    {

        if(skills[i].skillid==sid)
        {
            skills.erase(skills.begin()+i);
            found=1;

            break;

        }

    }
    if(found==0)
    {
        cout<<"SKILL NOT FOUND ! "<<endl;
    }
}

void skillcatalogue()
{

    int choice2;

    do
    {
        cout<<"==============SKILL CATALOGUE MENU=============="<<endl;
        cout<<"1.ADD SKILL"<<endl;
        cout<<"2.DISPLAY SKILL"<<endl;
        cout<<"3.SEARCH SKILL"<<endl;
        cout<<"4.UPDATE SKILL"<<endl;
        cout<<"5.DELETE SKILL"<<endl;
        cout<<"6.RETURN TO MAIN MENU"<<endl;
        cout<<"================================================="<<endl;
        cout<<"Enter the choice for the skill catalogue menu : ";
        cin>>choice2;

        switch(choice2)
        {
            case 1:
            addskill();
            break;

            case 2:
            displayskill();
            break;

            case 3:
            searchskill();
            break;

            case 4:
            updateskill();
            break;

            case 5:
            deleteskill();
            break;

            case 6:
            cout<<"You Exited From the Skill Catalogue Menu";
            break;

            default:
            cout<<"Invalid Choice"<<endl;
        }

    } while (choice2!=6);
    
    
}

class careerrole
{
    public:
    int rid;
    string rname;
    string rdescription;
    string rexperience;
    string reducation;
};
vector<careerrole>management;
void addr()
{
    careerrole c;
    cout<<"Enter New role ID :";
    cin>>c.rid;
    for(int i=0;i<management.size();i++)
    {
        if(management[i].rid==c.rid)
        {
            cout<<"Id Role already found !"<<endl;
            return;
        }
    }

    cin.ignore();
    cout<<"Enter the New Role Name                 : ";
    getline(cin,c.rname);
    cout<<"Give the description about the New Role : ";
    getline(cin,c.rdescription);
    cout<<"Enter the Required Experience Level     : ";
    getline(cin,c.rexperience);
    cout<<"Enter the Education Requirement         : ";
    getline(cin,c.reducation);
    management.push_back(c);
    cout<<"------NEW ROLE ADDED SUCCESSFULLY------- !"<<endl;


}
void displayr()
{
    int id;
    cout<<"Enter Role ID :";
    cin>>id;
    int found=0;
    for(int i=0;i<management.size();i++)
    {
        if(management[i].rid==id)
        {
            cout<<"Role Name                 : "<<management[i].rname<<endl;
            cout<<"Role Description          : "<<management[i].rdescription<<endl;
            cout<<"Required Experience Level : "<<management[i].rexperience<<endl;
            cout<<"Educational Requirement   : "<<management[i].reducation<<endl;
            found=1;
            break;

        }
    }
    if(found==0)
    {
        cout<<"------ROLE NOT FOUND !------"<<endl;
    }
}

void searchr()
{
    int id;
    cout<<"Enter Role ID :";
    cin>>id;
    int found=0;
    for(int i=0;i<management.size();i++)
    {
        if(management[i].rid==id)
        {
            cout<<"Role Name                 : "<<management[i].rname<<endl;
            cout<<"Role Description          : "<<management[i].rdescription<<endl;
            cout<<"Required Experience Level : "<<management[i].rexperience<<endl;
            cout<<"Educational Requirement   : "<<management[i].reducation<<endl;
            found=1;
            break;
        }
        
    }
    if(found==0)
    {
        cout<<"---Role ID not found !----";
    }
}
void updater()
{
    int id;
    cout<<"Enter the Role Id to Update :";
    cin>>id;
    int found =0;
    cin.ignore();
    for(int i=0;i<management.size();i++)
    {
        if(management[i].rid==id)
        {
            cout<<"Enter the Role name to Update            : ";
            getline(cin,management[i].rname);
            cout<<"Enter the Role Description to be updated : ";
            getline(cin,management[i].rdescription);
            cout<<"Enter the Required Experience level       : ";
            getline(cin,management[i].rexperience);
            cout<<"Enter the required Education to be updated : ";
            getline(cin,management[i].reducation);
            found=1;
        }

    }
    if(found==0)
    {
        cout<<"-----Role Id not found !----"<<endl;
    }
}
void deleter()
{
    int id;
    cout<<"Enter Role Id to be deleted :";
    cin>>id;
    int found =0;
    for(int i=0;i<management.size();i++)
    {
        if(management[i].rid==id)
        {
            management.erase(management.begin()+i);
            found=1;
            break;
        }
    }
    if(found ==0)
    {
        cout<<"----ROLE ID NOT FOUND !----";
    }
}

void careerrole()
{
    int choice3;
    do
    {
        cout<<"==============CAREER ROLE MENU=============="<<endl;
        cout<<"1.ADD ROLE"<<endl;
        cout<<"2.DISPLAY ROLE"<<endl;
        cout<<"3.SEARCH ROLE"<<endl;
        cout<<"4.UPDATE ROLL"<<endl;
        cout<<"5.DELETE ROLL"<<endl;
        cout<<"6.RETURN TO MAIN MENU"<<endl;
        cout<<"================================================="<<endl;
        cout<<"Enter the choice for the career role menu : ";
        cin>>choice3;

        switch(choice3)
        {
            case 1:
            addr();
            break;

            case 2:
            displayr();
            break;

            case 3:
            searchr();
            break;

            case 4:
            updater();
            break;

            case 5:
            deleter();
            break;

            case 6:
            cout<<"You Exited From the Career role Menu";
            break;

            default:
            cout<<"Invalid Choice"<<endl;
        }

    } while (choice3!=6);
    
}
void skillassessment()
{
   
   int choice4;

   do
   {
    cout<<"=========SKILL ASSESSMENT MENU=========="<<endl;
    cout<<"1.STUDENT SELF ASSESSMENT"<<endl;
    cout<<"2.FACULTY ASSESSMENT"<<endl;
    cout<<"3.DISPLAY ASSESSMENT"<<endl;
    cout<<"4.VIEW ASSESSMENT HISTORY"<<endl;
    cout<<"5.RETURN TO MAIN MENU"<<endl;
    cout<<"========================================"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice4;

    switch(choice4)
    {
        case 1:
        break;

        case 2:
        break;

        case 3:
        break;

        case 4:
        break;

        case 5:
        cout<<"You got exuted from the skill assessment menu"<<endl;
        break;

        default:
        cout<<"Invalid Choice"<<endl;
    }
   }while(choice4!=5);


}
void gapanalysis()
{
    int choice5;
    do{

     cout<<"==============GAP ANALYSIS MENU=============="<<endl;
        cout<<"1.CALCULATE SKILL GAP"<<endl;
        cout<<"2.DISPLAY MISSING SKILLS"<<endl;
        cout<<"3.DISPLAY STRONG SKILLS"<<endl;
        cout<<"4.RETURN TO MAIN MENU"<<endl;
        cout<<"==========================================="<<endl;
        cout<<"Enter your choice: ";
        cin>>choice5;

        switch(choice5)
        {
            case 1:
                
                break;

            case 2:
                
                break;

            case 3:
               
                break;

            case 4:
                cout<<"You got exited from the gap analysis menu"<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice5!=4);
}
void  developmentplanning()
{
    int choice6;
     do
    {
        cout<<"==============DEVELOPMENT PLANNING MENU=============="<<endl;
        cout<<"1.CREATE DEVELOPMENT TASK"<<endl;
        cout<<"2.DISPLAY TASKS"<<endl;
        cout<<"3.UPDATE TASK STATUS"<<endl;
        cout<<"4.DELETE TASK"<<endl;
        cout<<"5.TRACK PROGRESS"<<endl;
        cout<<"6.RETURN TO MAIN MENU"<<endl;
        cout<<"======================================================="<<endl;

        cout<<"Enter your choice: ";
        cin>>choice6;

        switch(choice6)
        {
            case 1:
                
                break;

            case 2:
                
                break;

            case 3:
                
                break;

            case 4:
               
                break;

            case 5:
                
                break;

            case 6:
                cout<<"You got exited from the development planning menu"<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice6!=6);
}
void progressreport()
{
    int choice7;
    do
    {
        cout<<"==============PROGRESS REPORT MENU=============="<<endl;
        cout<<"1.STUDENT REPORT"<<endl;
        cout<<"2.ASSESSMENT REPORT"<<endl;
        cout<<"3.SKILL GAP REPORT"<<endl;
        cout<<"4.DEVELOPMENT PROGRESS REPORT"<<endl;
        cout<<"5.CAREER READINESS REPORT"<<endl;
        cout<<"6.RETURN TO MAIN MENU"<<endl;
        cout<<"======================================================="<<endl;
        
        cout<<"Enter your choice: ";
        cin>>choice7;

        switch(choice7)
        {
            case 1:
            
                break;

            case 2:
                
                break;

            case 3:
                
                break;

            case 4:
               
                break;

            case 5:
                
                break;

            case 6:
               cout<<"You got exited from the progress report menu"<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice7!=6);
}




    
    

int main()
{
    int choice;
    do{
    cout<<"**********************************************************"<<endl;  
    cout<<"**********************************************************"<<endl;
    cout<<"    CAREER SKILL ASSSESSMENT AND DEVELOPMENT PLANNING     "<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"        1.STUDENT MANAGEMENT          "<<endl;
    cout<<"        2.SKILL CATALOGUE             "<<endl;
    cout<<"        3.CAREER ROLE MANAGEMENT      "<<endl;
    cout<<"        4.SKILL ASSESSMENT            "<<endl;
    cout<<"        5.GAP ANALYSIS                "<<endl;
    cout<<"        6.DEVELOPMENT PLANNING        "<<endl;
    cout<<"        7.PROGRESS REPORT             "<<endl;
    cout<<"        8.EXIT                        "<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"STUDENT MANAGEMENT SELECTED!"<<endl;
        studentmanagement();
        break;

        case 2:
        cout<<"SKILL CATALOGUE SELECTED!"<<endl;
        skillcatalogue();
        break;

        case 3:
        cout<<"CAREER ROLE MANAGEMENT!"<<endl;
        careerrole();
        break;

        case 4:
        cout<<"SKILL ASSESSMENT SELECTED!"<<endl;
        skillassessment();
        break;

        case 5:
        cout<<"GAP ANALYSIS!"<<endl;
        gapanalysis();
        break;

        case 6:
        cout<<"DEVELOPMENT PLANNING SELECTED!"<<endl;
       developmentplanning();
        break;

        case 7:
        cout<<"PROGRESS REPORT SELECTED!"<<endl;
        progressreport();
        break;

        case 8:
        cout<<"YOU EXITED FROM THE PROGRAM!"<<endl;
        break;

        default:
        cout<<"INVALID OPTION!"<<endl;


    }
    }while(choice!=8);


    return 0;
}