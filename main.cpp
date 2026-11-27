/*Career skill Assesment*/
#include<iostream>
#include<vector>
#include<string>
#include<limits>
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
    cout<<"Enter Student ID     : ";
    cin>>s.id;
    for(int i=0;i<students.size();i++)
    if(students[i].id==s.id)
    {
        cout<<"ROLL NUMBER ALREADY FOUND";
        return;

    }
    cin.ignore(1000,'\n');
    cout<<"Enter Student Name     : ";
    getline(cin, s.name);
    cout<<"Enter year :";
    cin>>s.year;
    cin.ignore(1000,'\n');
    cout<<"Enter Your Department  : ";
    getline(cin,s.department);
    cout<<"Enter Your Email       : ";
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
            cout<<"You Exited From the Student Management Menu"<<endl;
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
    int minlevel;
    int maxlevel;
    string assessmentmethod;

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
    cout<<"Enter the minimum proficiency level : ";
    cin>>sk.minlevel;
    cout<<"Enter the maximum proficiency level : ";
    cin>>sk.maxlevel;
    cin.ignore();
    cout<<"Enter the assessment method : ";
    getline(cin,sk.assessmentmethod);



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
       cout<<"MINIMUM LEVEL =  "<<skills[i].minlevel<<endl;
       cout<<"MAXIMUM LEVEL = "<<skills[i].maxlevel<<endl;
       cout<<"ASSESSMENT METHOD = "<<skills[i].assessmentmethod<<endl;
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

       cout<<"Enter New Minimum Proficiency Level: ";
       cin>>skills[i].minlevel;

       cout<<"Enter New Maximum Proficiency Level: ";
       cin>>skills[i].maxlevel;

       while(skills[i].minlevel<=0 || skills[i].maxlevel<=0 || skills[i].minlevel>skills[i].maxlevel)
      {
      cout<<"Invalid proficiency range! Enter again."<<endl;

      cout<<"Enter Minimum Level: ";
      cin>>skills[i].minlevel;

      cout<<"Enter Maximum Level: ";
      cin>>skills[i].maxlevel;
     }

    cin.ignore();

    cout<<"Enter New Assessment Method: ";
    getline(cin,skills[i].assessmentmethod);

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
class Assessment
{
public:
    int assessmentid;
    int studentid;
    int skillid;
    int score;
    string assessmenttype;
    string assessmentdate;
    string evidencenote;
    string assessor;

    Assessment()
    {
        assessmentid=0;
        studentid=0;
        skillid=0;
        score=0;
    }

    virtual void display()
    {
        cout<<"Assessment ID: "<<assessmentid<<endl;
        cout<<"Student ID: "<<studentid<<endl;
        cout<<"Skill ID: "<<skillid<<endl;
        cout<<"Score: "<<score<<endl;
        cout<<"Assessment Type: "<<assessmenttype<<endl;
        cout<<"Assessment Date: "<<assessmentdate<<endl;
        cout<<"Evidence Note: "<<evidencenote<<endl;
        cout<<"Assessor: "<<assessor<<endl;
    }

    virtual ~Assessment()
    {
    }
};

class SelfAssessment : public Assessment
{
public:
    void display() override
    {
        cout<<"SELF ASSESSMENT"<<endl;
        Assessment::display();
    }
};

class FacultyAssessment : public Assessment
{
public:
    void display() override
    {
        cout<<"FACULTY ASSESSMENT"<<endl;
        Assessment::display();
    }
};

vector<Assessment*> assessments;


void selfassessment()
{
    SelfAssessment *a = new SelfAssessment;
    int found=0;

    cout<<"------ SELF ASSESSMENT ------"<<endl;

    cout<<"Enter Assessment ID: ";
    cin>>a->assessmentid;

    for(int i=0;i<assessments.size();i++)
    {
        if(assessments[i]->assessmentid==a->assessmentid)
        {
            cout<<"Assessment ID Already Exists!"<<endl;
            delete a;
            return;
        }
    }

    cout<<"Enter Student ID: ";
    cin>>a->studentid;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].id==a->studentid)
        {
            found=1;
            a->assessor=students[i].name;
            break;
        }
    }

    if(found==0)
    {
        cout<<"Student ID Not Found!"<<endl;
        delete a;
        return;
    }

    found=0;

    cout<<"Enter Skill ID: ";
    cin>>a->skillid;

    for(int i=0;i<skills.size();i++)
    {
        if(skills[i].skillid==a->skillid)
        {
            found=1;

            cout<<"Skill Name: "<<skills[i].skillname<<endl;
            cout<<"Minimum Level: "<<skills[i].minlevel<<endl;
            cout<<"Maximum Level: "<<skills[i].maxlevel<<endl;

            cout<<"Enter Your Score: ";
            cin>>a->score;

            while(a->score<skills[i].minlevel || a->score>skills[i].maxlevel)
            {
                cout<<"Invalid Score! Enter Again: ";
                cin>>a->score;
            }

            break;
        }
    }

    if(found==0)
    {
        cout<<"Skill ID Not Found!"<<endl;
        delete a;
        return;
    }

    a->assessmenttype="Self";

    cin.ignore();

    cout<<"Enter Assessment Date: ";
    getline(cin,a->assessmentdate);

    cout<<"Enter Evidence Note: ";
    getline(cin,a->evidencenote);

    if(a->assessmentdate=="" || a->evidencenote=="")
    {
        cout<<"Date and Evidence Note Cannot Be Empty!"<<endl;
        delete a;
        return;
    }

    assessments.push_back(a);

    cout<<"Self Assessment Added Successfully!"<<endl;
}


void facultyassessment()
{
    FacultyAssessment *a = new FacultyAssessment;
    int found=0;

    cout<<"------ FACULTY ASSESSMENT ------"<<endl;

    cout<<"Enter Assessment ID: ";
    cin>>a->assessmentid;

    for(int i=0;i<assessments.size();i++)
    {
        if(assessments[i]->assessmentid==a->assessmentid)
        {
            cout<<"Assessment ID Already Exists!"<<endl;
            delete a;
            return;
        }
    }

    cout<<"Enter Student ID: ";
    cin>>a->studentid;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].id==a->studentid)
        {
            found=1;
            break;
        }
    }

    if(found==0)
    {
        cout<<"Student ID Not Found!"<<endl;
        delete a;
        return;
    }

    found=0;

    cout<<"Enter Skill ID: ";
    cin>>a->skillid;

    for(int i=0;i<skills.size();i++)
    {
        if(skills[i].skillid==a->skillid)
        {
            found=1;

            cout<<"Skill Name: "<<skills[i].skillname<<endl;
            cout<<"Minimum Level: "<<skills[i].minlevel<<endl;
            cout<<"Maximum Level: "<<skills[i].maxlevel<<endl;

            cout<<"Enter Faculty Assessment Score: ";
            cin>>a->score;

            while(a->score<skills[i].minlevel || a->score>skills[i].maxlevel)
            {
                cout<<"Invalid Score! Enter Again: ";
                cin>>a->score;
            }

            break;
        }
    }

    if(found==0)
    {
        cout<<"Skill ID Not Found!"<<endl;
        delete a;
        return;
    }

    a->assessmenttype="Faculty";

    cin.ignore();

    cout<<"Enter Assessment Date: ";
    getline(cin,a->assessmentdate);

    cout<<"Enter Evidence Note: ";
    getline(cin,a->evidencenote);

    cout<<"Enter Faculty Name: ";
    getline(cin,a->assessor);

    if(a->assessmentdate=="" || a->evidencenote=="" || a->assessor=="")
    {
        cout<<"Fields Cannot Be Empty!"<<endl;
        delete a;
        return;
    }

    assessments.push_back(a);

    cout<<"Faculty Assessment Added Successfully!"<<endl;
}


void displayassessment()
{
    if(assessments.empty())
    {
        cout<<"No Assessment Records Found!"<<endl;
        return;
    }

    cout<<"------ ALL ASSESSMENT RECORDS ------"<<endl;

    for(int i=0;i<assessments.size();i++)
    {
        cout<<"--------------------------"<<endl;
        assessments[i]->display();
    }
}


void assessmenthistory()
{
    int id,found=0;

    cout<<"------ ASSESSMENT HISTORY ------"<<endl;

    cout<<"Enter Student ID: ";
    cin>>id;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].id==id)
        {
            found=1;
            cout<<"Student Name: "<<students[i].name<<endl;
            break;
        }
    }

    if(found==0)
    {
        cout<<"Student ID Not Found!"<<endl;
        return;
    }

    found=0;

    for(int i=0;i<assessments.size();i++)
    {
        if(assessments[i]->studentid==id)
        {
            found=1;
            cout<<"--------------------------"<<endl;
            assessments[i]->display();
        }
    }

    if(found==0)
    {
        cout<<"No Assessment History Found!"<<endl;
    }
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
        selfassessment();
        break;

        case 2:
        facultyassessment();
        break;

        case 3:
        displayassessment();
        break;

        case 4:
        assessmenthistory();
        break;

        case 5:
        cout<<"You got exited from the skill assessment menu"<<endl;
        break;

        default:
        cout<<"Invalid Choice"<<endl;
    }
   }while(choice4!=5);


}

int gapstudentid;

vector<int> gapskillid;
vector<int> gaprequiredlevel;
vector<int> gapcurrentscore;
vector<int> gapassessed;

void calculateskillgap()
{
    int sid,rid,found=0;

    cout<<"Enter Student ID: ";
    cin>>sid;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].id==sid)
        {
            found=1;
            break;
        }
    }

    if(found==0)
    {
        cout<<"Student Not Found!"<<endl;
        return;
    }

    cout<<"Enter Career Role ID: ";
    cin>>rid;

    found=0;

    for(int i=0;i<management.size();i++)
    {
        if(management[i].rid==rid)
        {
            found=1;
            break;
        }
    }

    if(found==0)
    {
        cout<<"Career Role Not Found!"<<endl;
        return;
    }

    gapstudentid=sid;

    gapskillid.clear();
    gaprequiredlevel.clear();
    gapcurrentscore.clear();
    gapassessed.clear();

    int n;

    cout<<"Enter Number of Required Skills: ";
    cin>>n;

    while(n<=0)
    {
        cout<<"Invalid Number! Enter Again: ";
        cin>>n;
    }

    for(int j=0;j<n;j++)
    {
        int sk_id,target,score=0,assessed=0;
        found=0;

        cout<<"Enter Skill ID: ";
        cin>>sk_id;

        for(int i=0;i<skills.size();i++)
        {
            if(skills[i].skillid==sk_id)
            {
                found=1;

                cout<<"Skill Name: "<<skills[i].skillname<<endl;

                cout<<"Enter Required Level: ";
                cin>>target;

                while(target<skills[i].minlevel || target>skills[i].maxlevel)
                {
                    cout<<"Invalid Level! Enter Again: ";
                    cin>>target;
                }

                for(int k=0;k<assessments.size();k++)
                {
                    if(assessments[k]->studentid==sid &&
                       assessments[k]->skillid==sk_id)
                    {
                        score=assessments[k]->score;
                        assessed=1;
                    }
                }

                gapskillid.push_back(sk_id);
                gaprequiredlevel.push_back(target);
                gapcurrentscore.push_back(score);
                gapassessed.push_back(assessed);

                if(assessed==1)
                {
                    int gap=target-score;

                    cout<<"Current Level: "<<score<<endl;
                    cout<<"Skill Gap: "<<gap<<endl;

                    if(gap>0)
                    {
                        cout<<"Status: Needs Improvement"<<endl;
                    }
                    else if(gap==0)
                    {
                        cout<<"Status: Requirement Achieved"<<endl;
                    }
                    else
                    {
                        cout<<"Status: Strong Skill"<<endl;
                    }
                }
                else
                {
                    cout<<"No Assessment Found!"<<endl;
                }

                break;
            }
        }

        if(found==0)
        {
            cout<<"Skill Not Found!"<<endl;
            j--;
        }
    }
}

void displaymissingskills()
{
    int found=0;

    for(int i=0;i<gapskillid.size();i++)
    {
        if(gapassessed[i]==0 || gapcurrentscore[i]<gaprequiredlevel[i])
        {
            for(int j=0;j<skills.size();j++)
            {
                if(skills[j].skillid==gapskillid[i])
                {
                    cout<<"Missing Skill: "<<skills[j].skillname<<endl;
                    found=1;
                    break;
                }
            }
        }
    }

    if(found==0)
    {
        cout<<"No Missing Skills!"<<endl;
    }
}


void displaystrongskills()
{
    int found=0;

    for(int i=0;i<gapskillid.size();i++)
    {
        if(gapassessed[i]==1 && gapcurrentscore[i]>gaprequiredlevel[i])
        {
            for(int j=0;j<skills.size();j++)
            {
                if(skills[j].skillid==gapskillid[i])
             
                {
                    cout<<"Strong Skill: "<<skills[j].skillname<<endl;
                    cout<<"Current Level: "<<gapcurrentscore[i]<<endl;
                    cout<<"Required Level: "<<gaprequiredlevel[i]<<endl;

                    found=1;
                    break;
                }
            }
        }
    }

    if(found==0)
    {
        cout<<"No Strong Skills Found!"<<endl;
    }
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
                calculateskillgap();
                break;

            case 2:
                displaymissingskills();
                break;

            case 3:
               displaystrongskills();
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