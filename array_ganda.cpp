#include <iostream>
#include <conio.h>
#include<iostream>
#include<algorithm>
#include<set>
#include<string>
#include<string.h>
#include<unistd.h>

void cek(std::string usr)
{
        int count =1;
        char temp[1024]={0};
        strncpy(temp,usr.c_str(),sizeof(temp));
        for(int i=0;temp[i];++i)
        {
                for(int j=i+1;temp[j]==temp[i];++j)
                {
                        if(temp[i]==temp[j])
                                count++;
                                i=j;

                }
                        if(count>=2)
                        {
                                std::cout<<"huruf pertama yg duplikat ="<<temp[i]<<" dan berjumlah "<<count<<std::endl;
                                count =1;
                                break;
                        }
        }

}

int main()
{
        std::string userInput;
        std::cout<< "masukan inputan : ";
        std::getline(std::cin,userInput);            
        userInput.erase(std::remove(userInput.begin(), userInput.end(),' '), userInput.end());
        std::sort(userInput.begin(),userInput.end());
//        std::cout<<userInput<<std::endl;
        if(!userInput.empty())
        cek(userInput);
}
