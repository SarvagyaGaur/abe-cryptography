#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
    string pname;
    string pgender;
    string address;
    string dob;
    string blood_group;
    string covid_report;
class hospital {
    public:
    static unordered_map<string, vector<string>> policy;
    string name;
    long staff_id;
    string designation;
    int Floor;
    string specialization;
    int zone;
    static void createFile()
    {
        cout<<"Enter name: ";
        cin>>pname;
        cout<<"Enter gender: ";
        cin>>pgender;
        cout<<"Enter address: ";
        cin>>address;
        cout<<"Enter dob: ";
        cin>>dob;
        cout<<"Enter blood group: ";
        cin>>blood_group;
        cout<<"Enter covid result: ";
        cin>>covid_report;
    }
    static void encryption()
    {
        cout<<endl;
        cout<<"Start creating ciphertext policy: "<<endl;
        char c;
        cout<<"Do you wish to include name in the policy? (y/n) ";
        cin>>c;
        if(c == 'y' || c == 'Y')
        {
            string x;
            cout<<"Enter attribute values, type -1 to stop"<<endl;
            while(cin>>x)
            {
                if(x == "-1")
                    break;
                policy["name"].push_back(x);
            }
        }
        cout<<"Do you wish to include staff id in the policy? (y/n) ";
        cin>>c;
        if(c == 'y' || c == 'Y')
        {
            long x;
            cout<<"Enter attribute values, type -1 to stop"<<endl;
            while(cin>>x)
            {
                string y = to_string(x);
                if(y == "-1")
                    break;
                policy["staff_id"].push_back(y);
            }
        }
        cout<<"Do you wish to include designation in the policy? (y/n) "; 
        cin>>c;
        if(c == 'y' || c == 'Y')
        {
            string x;
            cout<<"Enter attribute values, type -1 to stop"<<endl;
            while(cin>>x)
            {
                if(x == "-1")
                    break;
                policy["designation"].push_back(x);
            }
        }
        cout<<"Do you wish to include floor in the policy? (y/n) ";
        cin>>c;
        if(c == 'y' || c == 'Y')
        {
            long x;
            cout<<"Enter attribute values, type -1 to stop"<<endl;
            while(cin>>x)
            {
                string y = to_string(x);
                if(y == "-1")
                    break;
                policy["Floor"].push_back(y);
            }
        }
        cout<<"Do you wish to include specialization in the policy? (y/n) "; 
        cin>>c;
        if(c == 'y' || c == 'Y')
        {
            string x;
            cout<<"Enter attribute values, type -1 to stop"<<endl;
            while(cin>>x)
            {
                if(x == "-1")
                    break;
                policy["specialization"].push_back(x);
            }
        }
        cout<<"Do you wish to include zone in the policy? (y/n) ";
        cin>>c;
        if(c == 'y' || c == 'Y')
        {
            long x;
            cout<<"Enter attribute values, type -1 to stop"<<endl;
            while(cin>>x)
            {
                string y = to_string(x);
                if(y == "-1")
                    break;
                policy["zone"].push_back(y);
            }
        }
    }
    bool decryption()
    {
        cout<<endl;
        cout<<"Decryption starts: "<<endl;
        cout<<"Enter your name: ";
        cin>>name;
        if(policy.find("name") != policy.end())
        {
            vector<string> it = policy["name"];
            int flag = -1;
            for(int i = 0; i < it.size(); i++)
            {
                if(it[i] == name)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == -1)
                return false;
        }
        cout<<"Enter your staff id: ";
        cin>>staff_id;
        if(policy.find("staff_id") != policy.end())
        {
            vector<string> it = policy["staff_id"];
            int flag = -1;
            string s = to_string(staff_id);
            for(int i = 0; i < it.size(); i++)
            {
                if(it[i] == s)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == -1)
                return false;
        }
        cout<<"Enter your designation: ";
        cin>>designation;
        if(policy.find("designation") != policy.end())
        {
            vector<string> it = policy["designation"];
            int flag = -1;
            for(int i = 0; i < it.size(); i++)
            {
                if(it[i] == designation)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == -1)
                return false;
        }
        cout<<"Enter your floor: ";
        cin>>Floor;
        if(policy.find("Floor") != policy.end())
        {
            vector<string> it = policy["Floor"];
            int flag = -1;
            string s = to_string(Floor);
            for(int i = 0; i < it.size(); i++)
            {
                if(it[i] == s)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == -1)
                return false;
        }
        cout<<"Enter your specialization: ";
        cin>>specialization;
        if(policy.find("specialization") != policy.end())
        {
            vector<string> it = policy["specialization"];
            int flag = -1;
            for(int i = 0; i < it.size(); i++)
            {
                if(it[i] == specialization)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == -1)
                return false;
        }
        cout<<"Enter your zone: ";
        cin>>zone;
        if(policy.find("zone") != policy.end())
        {
            vector<string> it = policy["zone"];
            int flag = -1;
            string s = to_string(zone);
            for(int i = 0; i < it.size(); i++)
            {
                if(it[i] == s)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == -1)
                return false;
        }
        return true;
    } 
    static void printFile()
    {
        cout<<"---Patient Report---"<<endl;
        cout<<"Name: "<<pname<<endl;
        cout<<"Gender: "<<pgender<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Date of Birth: "<<dob<<endl;
        cout<<"Blood Group: "<<blood_group<<endl;
        cout<<"Covid result: "<<covid_report<<endl;
    }
    /* static void printPolicy()
    {
        for(auto it = policy.begin(); it != policy.end(); it++)
        {
            cout<<(*it).first<<": ";
            vector<string> it1 = (*it).second;
            for(int i = 0; i < it1.size(); i++)
                cout<<it1[i]<<", ";
            cout<<endl;
        }
    } */
};
unordered_map<string, vector<string>> hospital::policy;
int main()
{
    cout<<"---Enter patient details---"<<endl;
    cout<<endl;
    hospital::createFile();
    hospital::encryption();
    // hospital::printPolicy();
    cout<<endl;
    int n;
    cout<<"How many staff memebers are there?"<<endl;
    cin>>n;
    hospital h[n];
    for(int i = 0; i < n; i++)
    {
        bool check = h[i].decryption();
        if(check)
        {
            cout<<"Decryption successfull!"<<endl;
            hospital::printFile();
        }
        else
            cout<<"Confidential - not for your eyes"<<endl;
    }
    return 0;
}