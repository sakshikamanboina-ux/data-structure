include<iostream>
using namespace std;
int main()
{
 int roll[5],temp;
 cout<<"Enter roll numbers of 5 students:";
 for(int i=0;i<4;i++)
{
 cin>>roll[i];
}
 for(int i=0;i<4;i++)
{
 for(int j=i+1;j<5;j++)
 {
  if(roll[i]>roll[j])
  {
   temp=roll[i];
   roll[i]=roll[j];
   roll[j]=temp;
  }
 }
}

cout<<"Roll numbers in accending order:";
for(int i=0;i<5;i++)
{
cout<<roll[i]<<"";
}
return 0;
}
