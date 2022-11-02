//
// Created by will on 2022/11/2.
//
#include"iostream"
#include"string"
#include"cstring"

using namespace std;

int main(){
    string m;
    char hash[26]= {0};
    cin>>m;
    string temp(m);
    int num=m.size();
    int count=0;
    for(int i=num-1;i>-1;i--){
        int b=m[i]-'a'; //字母表顺序
        if(hash[b]!='\0')//对应字母已经存在
        {
            temp[i]=hash[b];
        }
        else if(i==num-1){
            hash[b]='a';
            temp[i]='a';
        }
        else if(i==num-2){
            hash[b]='b';
            temp[i]='b';
            count++;
        }
        else {
            bool flag=true;
           for(int j=i+1;j<num-1;j++){
               if(m[i]==m[j]){
                   flag=false;
                   break;
               }
           }
           if(flag) count++;
           hash[b]=count+'a';
           temp[i]=hash[b];
       }

    }
     cout<<temp;
    return 0;
}
