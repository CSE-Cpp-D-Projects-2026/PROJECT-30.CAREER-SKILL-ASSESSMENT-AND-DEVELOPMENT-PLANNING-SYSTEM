
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
he description about the New Role : ";
    getline(cin,c.rdescription);
    cout<<"Enter the Required Experience Level     : ";
    getline(cin,c.rexperience);
    cout<<"Enter the Educatiovoid addr()
{
    careerrole c;
    cout<<"Enter New role ID :";
    cin>>c.rid;
    cin.ignore();
    cout<<"Enter the New Role Name                 : ";
    getline(cin,c.rname);
    cout<<"Give tn Requirement         : ";
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

        }
    }
    if(found=0)
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
        }
        found=1;
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
    if(found=0)
    {
        cout<<"-----Roll Id not found !----"<<endl;
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
            management.erase(management.begin()+1);
            found=1;
            break;
        }
    }
    if(found ==0)
    {
        cout<<"----ROLE ID NOT FOUND !----";
    }
}
