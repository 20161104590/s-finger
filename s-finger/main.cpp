//
//  main.cpp
//  s-finger
//
//  Created by 客人用户 on 2017/12/13.
//  Copyright © 2017年 客人用户. All rights reserved.
//

#include <iostream>
using namespace std;
struct Student
{
    char name[20];
    char num[20];
    int age;
    struct Student *next;
};
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int s=1;
    int temp=0;
    struct Student *p,*q,*head;
    head=NULL;
    cout<<" 1or2"<<endl;
    while(cin>>s,s==1)
    {
        p=new Student;
        cout<<"name"<<endl;
        cin>>p->name;
        cout<<"num:"<<endl;
        cin>>p->num;
        cout<<"age:";
        cin>>p->age;
        if(head==NULL)
        {
            head=p;
        }
        else
        {
            q->next=p;
        }
        q=p;
        p->next=NULL;
        cout<<"1or2"<<endl;
    }
    p=head;
    while(p!=NULL)
    {
        cout<<"name:"<<p->name<<"num:"<<p->num<<"age:"<<p->num<<endl;
        p=p->next;
    }
    p=head;
    if(p!=NULL)
    {
        q=p->next;
        delete p;
        p=q;
        while(q);
    }
    return 0;
}
