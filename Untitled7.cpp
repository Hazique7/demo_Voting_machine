#include<iostream>
using namespace std;
int mqm = 0, ppp = 0, pti = 0, input[5],  i ,  v ;
void cnic(){
	cout<<"enter cnic number please! \n";
	cin>>input[5];
	cout<<endl;
}

void MQM()
{
mqm++;
}

void PTI()
{
	pti++;
}

void PPP()
{
	ppp++;
}
 void show_results(){
 	cout<<"total votes of mqm are = "<<mqm<<endl;
 	cout<<"total votes of ppp are = "<<ppp<<endl;
 	cout<<"total votes of pti are = "<<pti<<endl;
 }
 void nic(){
 	cout<<"please cast your vote\n"<<endl;
   cout<<"press 1 to vote MQM\n"<<endl;
   cout<<"press 2 to vote PTI\n"<<endl;
   cout<<"press 3 to vote PPP\n"<<endl;
   
cin>>v;
if(v == 1){
	MQM();
}
else if(v == 2){
			PTI();
}
else if(v == 3){
	PPP();
}
}
//void cnic_check(){
//          for( int i = 0 ; i < q; i++)
//          {
//          	for( int j = i+1; j <q ; j++)
//			  {
//          		if(input[i] == input[j] )
//          		cout<<input[i];
//          		else
//          		 nic();
//			  }
//		  }
//		 
//}

main(){
	// i = total number of voters in the area//
	for(int i = 0 ; i < 3; i++){
	
	cnic();
	//cnic_check();
	nic();
	system("cls");
	}
	show_results();
}