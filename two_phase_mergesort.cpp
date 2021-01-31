#include "metaheader.h"

using namespace std;
int main(int argc,char** argv){
	cout<<argc<<endl;
	int order=0;
	fr(i,1,argc){
		cout<<"argv["<<i<<"] = "<<	argv[i]<<endl;
	}
	vector<ll>v;
	fr(i,5,argc){
		v.push_back(int(argv[i][1]-'0'));
	}
	float memoryused=atof(argv[3])*int(pow(2,20));
	if (strcmp(argv[4],"desc")==0 || strcmp(argv[4],"DESC")==0)
		order^=1;
	cout<<"MEMORY in Bytes" << memoryused<<endl;
	ifstream in_file;
	in_file.open(argv[1],ios::in);
	char arr[2];
	in_file.read(arr,1);
	int field_length[1000],c=0,fields=0,flag=0,len=0;
	while(arr[0]!='\n'){
		if (arr[0]!=' '){
			c++;flag=0;
		}
		else{
			flag++;
			if(flag==2){
				field_length[fields++]=c;
				c=0;
			}
		}
		in_file.read(arr,1);
	}
	cout<<str.size()<<endl;
	in_file.close();
	field_length[fields]=c;fields+=1;
	fr(i,0,fields)
		len+=field_length[i];
	cout<<len<<endl;
	return 0;
}