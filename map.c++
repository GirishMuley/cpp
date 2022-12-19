#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int , string> name_map;

    name_map[1] = "tom";
    name_map[2] = "max";
    name_map[3] = "mark";
    name_map[4] = "john";
    name_map[5] = "patrik";

    name_map.insert(pair<int ,string>(6,"jauly"));
    name_map.insert(pair<int ,string>(7,"madara"));

    cout<<"map size = "<<name_map.size()<<endl;
    cout<<"is map empty = "<<name_map.empty()<<endl;

    for(map<int, string>::iterator it = name_map.begin();it !=name_map.end();it++)
    cout<<it->first<<" => "   <<it->second<<endl;

    cout<<"finding a particular key"<<endl;

    map<int, string>::iterator it = name_map.find(5);
    cout<<"key found = "<<it->second<<endl;

    cout<<"map size = "<<name_map.size()<<endl;
    cout<<"is map empty = "<<name_map.empty()<<endl;

    cout<<"Deleting a particular key"<<endl;

    map<int, string>::iterator it2 = name_map.find(5);
    name_map.erase(it2);

    for(map<int, string>::iterator it = name_map.begin();it !=name_map.end();it++)
    cout<<it->first<<" => "   <<it->second<<endl;

    cout<<"map size = "<<name_map.size()<<endl;
    cout<<"is map empty = "<<name_map.empty()<<endl;
 
    cout<<"Deleting all keys"<<endl;
    
    name_map.clear();
    cout<<"map size = "<<name_map.size()<<endl;
    cout<<"is map empty = "<<name_map.empty()<<endl;


    return 0;
}