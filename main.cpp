/*Career skill Assesment*/
#include<iostream>
using namespace std;

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
            cout<<"You Exited From the Student Management Menu";
           
            default:
            cout<<"Invalid Option "<<endl;
        }



    }while(choice1!=6);
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
        cout<<"4.UODATE SKILL"<<endl;
        cout<<"5.DELETE SKILL"<<endl;
        cout<<"6.RETURN TO MAIN MENU"<<endl;
        cout<<"================================================="<<endl;
        cout<<"Enter the choice for the skill catalogue menu : ";
        cin>>choice2;

        switch(choice2)
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
            cout<<"You Exited From the Skill Catalogue Menu";
            break;

            default:
            cout<<"Invalid Choice"<<endl;
        }

    } while (choice2!=6);
    
    
}
void careerrole()
{
    int choice3;
    do
    {
        cout<<"==============CAREER ROLE MENU=============="<<endl;
        cout<<"1.ADD ROLE"<<endl;
        cout<<"2.DISPLAY ROLL"<<endl;
        cout<<"3.SEARCH ROLL"<<endl;
        cout<<"4.UPDATE ROLL"<<endl;
        cout<<"5.DELETE ROLL"<<endl;
        cout<<"6.RETURN TO MAIN MENU"<<endl;
        cout<<"================================================="<<endl;
        cout<<"Enter the choice for the career role menu : ";
        cin>>choice3;

        switch(choice3)
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
            cout<<"You Exited From the Career role Menu";
            break;

            default:
            cout<<"Invalid Choice"<<endl;
        }

    } while (choice3!=6);
    
}
void skillassessment()
{
   


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
        /*gapanalysis();*/
        break;

        case 6:
        cout<<"DEVELOPMENT PLANNING SELECTED!"<<endl;
       /* developmentplanning();*/
        break;

        case 7:
        cout<<"PROGRESS REPORT SELECTED!"<<endl;
        /*progressreport();*/
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