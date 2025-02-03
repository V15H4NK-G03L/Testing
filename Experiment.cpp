#include <iostream>

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include <cstdio> //playing audio

#include <fstream> //for opening browsers link

#include <chrono> //for pc access

#include <ctime> //for identifying time

using namespace std;

int main()

{

char ans[25];

cout<<"Welcome to Bot"<<"\n"<<">>> ";

auto timenow =

chrono::system_clock::to_time_t(chrono::system_clock::now());

char url[1000] = "Google";

while (true)

{

gets(ans);

if(stricmp(ans,"hi")==0)

cout<<"\nHi! My name is Bot!!\nHow may I help you ??"<<"\n"<<">>> ";

else if(stricmp(ans,"How are you")==0)

cout<<"\nI'm Fine!!"<<"\n"<<">>> ";

else if(stricmp(ans,"hello")==0)

cout<<"\nHi!"<<"\n"<<">>> ";

else if(stricmp(ans,"tell me the time")==0)

cout <<"\n"<<">>> "<<ctime(&timenow)<<"\n"<<">>> ";

else if(stricmp(ans,"hey")==0)

cout<<"\nHello!"<<"\n"<<">>> ";

else if(stricmp(ans,"will today rain")==0)

cout<<"\nWhat boy you want leave ah! No leave go to school"<<"\n"<<">>> ";

else if(stricmp(ans,"open notepad")==0)

system("notepad.exe");

else

cout<<"\nI cannot understand what you said!!"<<"\n"<<">>> ";

}

}