#include <iostream>
#include <deque>//container adaptor 
#include <stack> //container adaptop
int main(int, char**) {
    std::cout << "Advanced Operation !\n";
    std::cout<<"Construct the string "<<std::endl;
    const char*name="michael";
    char noNull[]={'m','i'};
    std::string copyThat(name);
    std::cout<<"constructor for copy \t: " <<copyThat<<std::endl;
    std::cout<<"Copy n character \t: [";
    std::string nchar(noNull,2);
    std::cout<<nchar<<"]"<<std::endl;
    std::cout<<"substr operation"<<std::endl;
    std::string numberIs("0x-899887-io");
    std::string testcopy=numberIs.substr(0,5);
    std::cout<<"Original string \t:[";
    std::cout<<numberIs<<std::endl;
    std::cout<<"substr \t: [" <<testcopy<<"]"<<std::endl;

    std::cout<<"Insert and erase "<<std::endl;
    std::string address("madison street");
    std::cout<<"Original Value\t:["<<address<<"]"<<std::endl;
    address.insert(address.size(),5,'!');
    std::cout<<"Insert five exclamation  point \t:["<<address<<"]"<<std::endl;
    address.erase(address.size()-5,5); //erase the last five element from address
    std::cout<<"After erase \t:["<<address<<"]"<<std::endl;
    std::cout<<"Append function "<<std::endl;
    std::string  bookName("c++ primer"),s=bookName;
    s.insert(s.size(),"4th ed");
    std::cout<<"Before Append]t:["<<bookName<<"]"<<std::endl;
    bookName.append("4th ed");
    std::cout<<"Append string \t: [" <<bookName<<"]"<<std::endl;
    std::cout<<"Replace string \t: [";
    bookName.replace(0,3,"adv");
    std::cout<<bookName<<"]"<<std::endl;
    std::string nameP("AnnaBelle");
    std::cout<<"Find anna\t:[";
    auto findAt=nameP.find("Anna");
    std::cout<<findAt<<"( as index found ) ]"<<std::endl;
    std::string mixString("mix123string456");
    std::string numberStr("1234567");
    auto findPos=mixString.find_first_not_of(numberStr);
    std::cout<<"String \t: ["<<mixString<<"]"<<std::endl;
    std::cout<<"Find (from first) postion that contain not number in string \t: ["<<findPos<<"]"<<std::endl;
    auto findFromlast=mixString.find_last_not_of(numberStr);
    std::cout<<"Find (from first) postion that contain not number in string \t: ["<<findFromlast<<"]"<<std::endl;
    std::cout<<"return length of characters \t:  [" <<mixString.length()<<"]"<<std::endl;

    std::cout<<"Specifying where to search "<<std::endl;
    std::string::size_type pos=0;
    while ((pos=mixString.find_first_of(numberStr,pos))!=std::string::npos)
    {
        //npos return  various value when they fail
        std::cout<<"Find number at index \t: "<<pos<<" element is "<<mixString[pos]<<std::endl;
        ++pos;

    }

    std::string river("Missisipi");
    std::string riverIn("kapuas");
    auto first_pos=river.find("is");//find from left to right
    std::cout<<"find() : this function is searching forward \t: ["<<first_pos<<"]"<<std::endl;
    auto rfind=river.rfind("is");
    std::cout<<"rfind() : this function is searching backward \t: ["<<rfind<<"]"<<std::endl;
    auto compareRiv=river.compare(riverIn);
    std::cout<<"1.First River\t:["<<river<<"]"<<std::endl;
    std::cout<<"2.Second River\t:["<<riverIn<<"]"<<std::endl;
    std::cout<<"Resul compare \t:["<<compareRiv<<std::endl;

    std::cout<<"Converting the data"<<std::endl;
    int nData=42;
    std::string sData=std::to_string(nData);
    std::cout<<"Original data as number\t:["<<nData<<"]"<<std::endl;
    std::cout<<"Represented as string \t:[" <<sData<<"]"<<std::endl;
    double conStrt=std::stod(sData);
    std::string mike("987.009987");
    double testCon=std::stod(mike); //converts string to floating point
    std::cout<<"Then Convert to double \t:["<<conStrt<<"]"<<std::endl;
    std::cout<<"String before conversion done \t: ["<<mike<<"]"<<std::endl;
    std::cout<<"String after conversion done \t: ["<<testCon<<"]"<<std::endl;
    std::cout<<"Then convert to int \t\t:["<<std::stoi(mike)<<"]"<<std::endl;

    std::cout<<"Defining an adaptor"<<std::endl;
    std::deque<int> deq;
    std::stack<int> stk(deq);//copies elements from deq into stk 

    //stack adaptor
    std::stack<int> inStack;
    for(size_t i=0;i!=10;++i){
        inStack.push(i);
    }
    auto testStack=inStack.top();
    std::cout<<"view stack\t:["<<inStack.top()<<std::endl;
    for(auto i=0;i<=testStack;++i){
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;

    while (!inStack.empty())
    {
        int value=inStack.top();
        inStack.pop();
    }
    




    



}
